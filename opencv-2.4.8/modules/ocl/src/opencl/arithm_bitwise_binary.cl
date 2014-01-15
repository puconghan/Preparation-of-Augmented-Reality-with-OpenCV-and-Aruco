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
// Copyright (C) 2010-2012, Institute Of Software Chinese Academy Of Science, all rights reserved.
// Copyright (C) 2010-2012, Advanced Micro Devices, Inc., all rights reserved.
// Third party copyrights are property of their respective owners.
//
// @Authors
//    Jiang Liyuan, jlyuan001.good@163.com
//    Peng Xiao,    pengxiao@outlook.com
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

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////// bitwise_binary //////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////

__kernel void arithm_bitwise_binary(__global uchar * src1, int src1_step, int src1_offset,
                                    __global uchar * src2, int src2_step, int src2_offset,
                                    __global uchar * dst, int dst_step, int dst_offset,
                                    int cols, int rows)
{
    int x = get_global_id(0);
    int y = get_global_id(1);

    if (x < cols && y < rows)
    {
#if elemSize > 1
        x *= elemSize;
#endif
        int src1_index = mad24(y, src1_step, x + src1_offset);
        int src2_index = mad24(y, src2_step, x + src2_offset);
        int dst_index = mad24(y, dst_step, x + dst_offset);

#if elemSize > 1
        #pragma unroll
        for (int i = 0; i < elemSize; i += vlen)
        {
            ucharv t0 = vloadn(0, src1 + src1_index + i);
            ucharv t1 = vloadn(0, src2 + src2_index + i);
            ucharv t2 = t0 Operation t1;

            vstoren(t2, 0, dst + dst_index + i);
        }
#else
        dst[dst_index] = src1[src1_index] Operation src2[src2_index];
#endif
    }
}
