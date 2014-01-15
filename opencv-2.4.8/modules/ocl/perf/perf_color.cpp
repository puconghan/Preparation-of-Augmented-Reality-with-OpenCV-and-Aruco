/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                           License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2010-2012, Multicoreware, Inc., all rights reserved.
// Copyright (C) 2010-2012, Advanced Micro Devices, Inc., all rights reserved.
// Third party copyrights are property of their respective owners.
//
// @Authors
//    Fangfang Bai, fangfang@multicorewareinc.com
//    Jin Ma,       jin@multicorewareinc.com
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors as is and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/
#include "perf_precomp.hpp"

using namespace perf;
using std::tr1::tuple;
using std::tr1::get;
using std::tr1::make_tuple;

///////////// cvtColor////////////////////////

CV_ENUM(ConversionTypes, CV_RGB2GRAY, CV_RGB2BGR, CV_RGB2YUV, CV_YUV2RGB, CV_RGB2YCrCb,
        CV_YCrCb2RGB, CV_RGB2XYZ, CV_XYZ2RGB, CV_RGB2HSV, CV_HSV2RGB, CV_RGB2HLS,
        CV_HLS2RGB, CV_BGR5652BGR, CV_BGR2BGR565, CV_RGBA2mRGBA, CV_mRGBA2RGBA, CV_YUV2RGB_NV12)

typedef tuple<Size, tuple<ConversionTypes, int, int> > cvtColorParams;
typedef TestBaseWithParam<cvtColorParams> cvtColorFixture;

PERF_TEST_P(cvtColorFixture, cvtColor, testing::Combine(
                testing::Values(Size(1000, 1002), Size(2000, 2004), Size(4000, 4008)),
                testing::Values(
                    make_tuple(ConversionTypes(CV_RGB2GRAY), 3, 1),
                    make_tuple(ConversionTypes(CV_RGB2BGR), 3, 3),
                    make_tuple(ConversionTypes(CV_RGB2YUV), 3, 3),
                    make_tuple(ConversionTypes(CV_YUV2RGB), 3, 3),
                    make_tuple(ConversionTypes(CV_RGB2YCrCb), 3, 3),
                    make_tuple(ConversionTypes(CV_YCrCb2RGB), 3, 3),
                    make_tuple(ConversionTypes(CV_RGB2XYZ), 3, 3),
                    make_tuple(ConversionTypes(CV_XYZ2RGB), 3, 3),
                    make_tuple(ConversionTypes(CV_RGB2HSV), 3, 3),
                    make_tuple(ConversionTypes(CV_HSV2RGB), 3, 3),
                    make_tuple(ConversionTypes(CV_RGB2HLS), 3, 3),
                    make_tuple(ConversionTypes(CV_HLS2RGB), 3, 3),
                    make_tuple(ConversionTypes(CV_BGR5652BGR), 2, 3),
                    make_tuple(ConversionTypes(CV_BGR2BGR565), 3, 2),
                    make_tuple(ConversionTypes(CV_RGBA2mRGBA), 4, 4),
                    make_tuple(ConversionTypes(CV_mRGBA2RGBA), 4, 4),
                    make_tuple(ConversionTypes(CV_YUV2RGB_NV12), 1, 3)
                    )))
{
    cvtColorParams params = GetParam();
    const Size srcSize = get<0>(params);
    const tuple<int, int, int> conversionParams = get<1>(params);
    const int code = get<0>(conversionParams), scn = get<1>(conversionParams),
            dcn = get<2>(conversionParams);

    Mat src(srcSize, CV_8UC(scn)), dst(srcSize, CV_8UC(scn));
    declare.in(src, WARMUP_RNG).out(dst);

    if (RUN_OCL_IMPL)
    {
        ocl::oclMat oclSrc(src), oclDst(src.size(), dst.type());

        OCL_TEST_CYCLE() ocl::cvtColor(oclSrc, oclDst, code, dcn);
        oclDst.download(dst);

        SANITY_CHECK(dst, 1);
    }
    else if (RUN_PLAIN_IMPL)
    {
        TEST_CYCLE() cv::cvtColor(src, dst, code, dcn);

        SANITY_CHECK(dst);
    }
    else
        OCL_PERF_ELSE
}
