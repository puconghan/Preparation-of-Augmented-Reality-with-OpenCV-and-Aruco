
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.core"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_CORE
#include "opencv2/core/core.hpp"

using namespace cv;

/// throw java exception
static void throwJavaException(JNIEnv *env, const std::exception *e, const char *method) {
  std::string what = "unknown exception";
  jclass je = 0;

  if(e) {
    std::string exception_type = "std::exception";

    if(dynamic_cast<const cv::Exception*>(e)) {
      exception_type = "cv::Exception";
      je = env->FindClass("org/opencv/core/CvException");
    }

    what = exception_type + ": " + e->what();
  }

  if(!je) je = env->FindClass("java/lang/Exception");
  env->ThrowNew(je, what.c_str());

  LOGE("%s caught %s", method, what.c_str());
  (void)method;        // avoid "unused" warning
}


extern "C" {


//
//  void LUT(Mat src, Mat lut, Mat& dst, int interpolation = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_LUT_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_LUT_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong lut_nativeObj, jlong dst_nativeObj, jint interpolation)
{
    static const char method_name[] = "core::LUT_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& lut = *((Mat*)lut_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::LUT( src, lut, dst, (int)interpolation );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_LUT_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_LUT_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong lut_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::LUT_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& lut = *((Mat*)lut_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::LUT( src, lut, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double Mahalanobis(Mat v1, Mat v2, Mat icovar)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_Mahalanobis_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_Mahalanobis_10
  (JNIEnv* env, jclass , jlong v1_nativeObj, jlong v2_nativeObj, jlong icovar_nativeObj)
{
    static const char method_name[] = "core::Mahalanobis_10()";
    try {
        LOGD("%s", method_name);
        Mat& v1 = *((Mat*)v1_nativeObj);
        Mat& v2 = *((Mat*)v2_nativeObj);
        Mat& icovar = *((Mat*)icovar_nativeObj);
        double _retval_ = cv::Mahalanobis( v1, v2, icovar );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void PCABackProject(Mat data, Mat mean, Mat eigenvectors, Mat& result)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCABackProject_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCABackProject_10
  (JNIEnv* env, jclass , jlong data_nativeObj, jlong mean_nativeObj, jlong eigenvectors_nativeObj, jlong result_nativeObj)
{
    static const char method_name[] = "core::PCABackProject_10()";
    try {
        LOGD("%s", method_name);
        Mat& data = *((Mat*)data_nativeObj);
        Mat& mean = *((Mat*)mean_nativeObj);
        Mat& eigenvectors = *((Mat*)eigenvectors_nativeObj);
        Mat& result = *((Mat*)result_nativeObj);
        cv::PCABackProject( data, mean, eigenvectors, result );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void PCACompute(Mat data, Mat& mean, Mat& eigenvectors, int maxComponents = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCACompute_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCACompute_10
  (JNIEnv* env, jclass , jlong data_nativeObj, jlong mean_nativeObj, jlong eigenvectors_nativeObj, jint maxComponents)
{
    static const char method_name[] = "core::PCACompute_10()";
    try {
        LOGD("%s", method_name);
        Mat& data = *((Mat*)data_nativeObj);
        Mat& mean = *((Mat*)mean_nativeObj);
        Mat& eigenvectors = *((Mat*)eigenvectors_nativeObj);
        cv::PCACompute( data, mean, eigenvectors, (int)maxComponents );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCACompute_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCACompute_11
  (JNIEnv* env, jclass , jlong data_nativeObj, jlong mean_nativeObj, jlong eigenvectors_nativeObj)
{
    static const char method_name[] = "core::PCACompute_11()";
    try {
        LOGD("%s", method_name);
        Mat& data = *((Mat*)data_nativeObj);
        Mat& mean = *((Mat*)mean_nativeObj);
        Mat& eigenvectors = *((Mat*)eigenvectors_nativeObj);
        cv::PCACompute( data, mean, eigenvectors );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void PCAComputeVar(Mat data, Mat& mean, Mat& eigenvectors, double retainedVariance)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCAComputeVar_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCAComputeVar_10
  (JNIEnv* env, jclass , jlong data_nativeObj, jlong mean_nativeObj, jlong eigenvectors_nativeObj, jdouble retainedVariance)
{
    static const char method_name[] = "core::PCAComputeVar_10()";
    try {
        LOGD("%s", method_name);
        Mat& data = *((Mat*)data_nativeObj);
        Mat& mean = *((Mat*)mean_nativeObj);
        Mat& eigenvectors = *((Mat*)eigenvectors_nativeObj);
        cv::PCAComputeVar( data, mean, eigenvectors, (double)retainedVariance );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void PCAProject(Mat data, Mat mean, Mat eigenvectors, Mat& result)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCAProject_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_PCAProject_10
  (JNIEnv* env, jclass , jlong data_nativeObj, jlong mean_nativeObj, jlong eigenvectors_nativeObj, jlong result_nativeObj)
{
    static const char method_name[] = "core::PCAProject_10()";
    try {
        LOGD("%s", method_name);
        Mat& data = *((Mat*)data_nativeObj);
        Mat& mean = *((Mat*)mean_nativeObj);
        Mat& eigenvectors = *((Mat*)eigenvectors_nativeObj);
        Mat& result = *((Mat*)result_nativeObj);
        cv::PCAProject( data, mean, eigenvectors, result );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void SVBackSubst(Mat w, Mat u, Mat vt, Mat rhs, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_SVBackSubst_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_SVBackSubst_10
  (JNIEnv* env, jclass , jlong w_nativeObj, jlong u_nativeObj, jlong vt_nativeObj, jlong rhs_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::SVBackSubst_10()";
    try {
        LOGD("%s", method_name);
        Mat& w = *((Mat*)w_nativeObj);
        Mat& u = *((Mat*)u_nativeObj);
        Mat& vt = *((Mat*)vt_nativeObj);
        Mat& rhs = *((Mat*)rhs_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::SVBackSubst( w, u, vt, rhs, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void SVDecomp(Mat src, Mat& w, Mat& u, Mat& vt, int flags = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_SVDecomp_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_SVDecomp_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong w_nativeObj, jlong u_nativeObj, jlong vt_nativeObj, jint flags)
{
    static const char method_name[] = "core::SVDecomp_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& w = *((Mat*)w_nativeObj);
        Mat& u = *((Mat*)u_nativeObj);
        Mat& vt = *((Mat*)vt_nativeObj);
        cv::SVDecomp( src, w, u, vt, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_SVDecomp_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_SVDecomp_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong w_nativeObj, jlong u_nativeObj, jlong vt_nativeObj)
{
    static const char method_name[] = "core::SVDecomp_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& w = *((Mat*)w_nativeObj);
        Mat& u = *((Mat*)u_nativeObj);
        Mat& vt = *((Mat*)vt_nativeObj);
        cv::SVDecomp( src, w, u, vt );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void absdiff(Mat src1, Mat src2, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_absdiff_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_absdiff_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::absdiff_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::absdiff( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void absdiff(Mat src1, Scalar src2, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_absdiff_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_absdiff_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj)
{
    static const char method_name[] = "core::absdiff_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::absdiff( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void add(Mat src1, Mat src2, Mat& dst, Mat mask = Mat(), int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj, jint dtype)
{
    static const char method_name[] = "core::add_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::add( src1, src2, dst, mask, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::add_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::add( src1, src2, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_12
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::add_12()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::add( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void add(Mat src1, Scalar src2, Mat& dst, Mat mask = Mat(), int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_13 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_13
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj, jlong mask_nativeObj, jint dtype)
{
    static const char method_name[] = "core::add_13()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::add( src1, src2, dst, mask, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_14 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_14
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::add_14()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::add( src1, src2, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_15 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_add_15
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj)
{
    static const char method_name[] = "core::add_15()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::add( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void addWeighted(Mat src1, double alpha, Mat src2, double beta, double gamma, Mat& dst, int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_addWeighted_10 (JNIEnv*, jclass, jlong, jdouble, jlong, jdouble, jdouble, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_addWeighted_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble alpha, jlong src2_nativeObj, jdouble beta, jdouble gamma, jlong dst_nativeObj, jint dtype)
{
    static const char method_name[] = "core::addWeighted_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::addWeighted( src1, (double)alpha, src2, (double)beta, (double)gamma, dst, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_addWeighted_11 (JNIEnv*, jclass, jlong, jdouble, jlong, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_addWeighted_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble alpha, jlong src2_nativeObj, jdouble beta, jdouble gamma, jlong dst_nativeObj)
{
    static const char method_name[] = "core::addWeighted_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::addWeighted( src1, (double)alpha, src2, (double)beta, (double)gamma, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void batchDistance(Mat src1, Mat src2, Mat& dist, int dtype, Mat& nidx, int normType = NORM_L2, int K = 0, Mat mask = Mat(), int update = 0, bool crosscheck = false)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_batchDistance_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jlong, jint, jint, jlong, jint, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_batchDistance_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dist_nativeObj, jint dtype, jlong nidx_nativeObj, jint normType, jint K, jlong mask_nativeObj, jint update, jboolean crosscheck)
{
    static const char method_name[] = "core::batchDistance_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dist = *((Mat*)dist_nativeObj);
        Mat& nidx = *((Mat*)nidx_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::batchDistance( src1, src2, dist, (int)dtype, nidx, (int)normType, (int)K, mask, (int)update, (bool)crosscheck );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_batchDistance_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_batchDistance_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dist_nativeObj, jint dtype, jlong nidx_nativeObj, jint normType, jint K)
{
    static const char method_name[] = "core::batchDistance_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dist = *((Mat*)dist_nativeObj);
        Mat& nidx = *((Mat*)nidx_nativeObj);
        cv::batchDistance( src1, src2, dist, (int)dtype, nidx, (int)normType, (int)K );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_batchDistance_12 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_batchDistance_12
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dist_nativeObj, jint dtype, jlong nidx_nativeObj)
{
    static const char method_name[] = "core::batchDistance_12()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dist = *((Mat*)dist_nativeObj);
        Mat& nidx = *((Mat*)nidx_nativeObj);
        cv::batchDistance( src1, src2, dist, (int)dtype, nidx );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void bitwise_and(Mat src1, Mat src2, Mat& dst, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1and_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1and_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::bitwise_1and_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::bitwise_and( src1, src2, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1and_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1and_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::bitwise_1and_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::bitwise_and( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void bitwise_not(Mat src, Mat& dst, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1not_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1not_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::bitwise_1not_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::bitwise_not( src, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1not_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1not_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::bitwise_1not_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::bitwise_not( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void bitwise_or(Mat src1, Mat src2, Mat& dst, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1or_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1or_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::bitwise_1or_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::bitwise_or( src1, src2, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1or_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1or_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::bitwise_1or_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::bitwise_or( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void bitwise_xor(Mat src1, Mat src2, Mat& dst, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1xor_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1xor_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::bitwise_1xor_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::bitwise_xor( src1, src2, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1xor_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_bitwise_1xor_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::bitwise_1xor_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::bitwise_xor( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void calcCovarMatrix(Mat samples, Mat& covar, Mat& mean, int flags, int ctype = CV_64F)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_calcCovarMatrix_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_calcCovarMatrix_10
  (JNIEnv* env, jclass , jlong samples_nativeObj, jlong covar_nativeObj, jlong mean_nativeObj, jint flags, jint ctype)
{
    static const char method_name[] = "core::calcCovarMatrix_10()";
    try {
        LOGD("%s", method_name);
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& covar = *((Mat*)covar_nativeObj);
        Mat& mean = *((Mat*)mean_nativeObj);
        cv::calcCovarMatrix( samples, covar, mean, (int)flags, (int)ctype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_calcCovarMatrix_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_calcCovarMatrix_11
  (JNIEnv* env, jclass , jlong samples_nativeObj, jlong covar_nativeObj, jlong mean_nativeObj, jint flags)
{
    static const char method_name[] = "core::calcCovarMatrix_11()";
    try {
        LOGD("%s", method_name);
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& covar = *((Mat*)covar_nativeObj);
        Mat& mean = *((Mat*)mean_nativeObj);
        cv::calcCovarMatrix( samples, covar, mean, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void cartToPolar(Mat x, Mat y, Mat& magnitude, Mat& angle, bool angleInDegrees = false)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_cartToPolar_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_cartToPolar_10
  (JNIEnv* env, jclass , jlong x_nativeObj, jlong y_nativeObj, jlong magnitude_nativeObj, jlong angle_nativeObj, jboolean angleInDegrees)
{
    static const char method_name[] = "core::cartToPolar_10()";
    try {
        LOGD("%s", method_name);
        Mat& x = *((Mat*)x_nativeObj);
        Mat& y = *((Mat*)y_nativeObj);
        Mat& magnitude = *((Mat*)magnitude_nativeObj);
        Mat& angle = *((Mat*)angle_nativeObj);
        cv::cartToPolar( x, y, magnitude, angle, (bool)angleInDegrees );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_cartToPolar_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_cartToPolar_11
  (JNIEnv* env, jclass , jlong x_nativeObj, jlong y_nativeObj, jlong magnitude_nativeObj, jlong angle_nativeObj)
{
    static const char method_name[] = "core::cartToPolar_11()";
    try {
        LOGD("%s", method_name);
        Mat& x = *((Mat*)x_nativeObj);
        Mat& y = *((Mat*)y_nativeObj);
        Mat& magnitude = *((Mat*)magnitude_nativeObj);
        Mat& angle = *((Mat*)angle_nativeObj);
        cv::cartToPolar( x, y, magnitude, angle );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool checkRange(Mat a, bool quiet = true,  _hidden_ * pos = 0, double minVal = -DBL_MAX, double maxVal = DBL_MAX)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_checkRange_10 (JNIEnv*, jclass, jlong, jboolean, jdouble, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_checkRange_10
  (JNIEnv* env, jclass , jlong a_nativeObj, jboolean quiet, jdouble minVal, jdouble maxVal)
{
    static const char method_name[] = "core::checkRange_10()";
    try {
        LOGD("%s", method_name);
        Mat& a = *((Mat*)a_nativeObj);
        bool _retval_ = cv::checkRange( a, (bool)quiet, 0, (double)minVal, (double)maxVal );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_checkRange_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_checkRange_11
  (JNIEnv* env, jclass , jlong a_nativeObj)
{
    static const char method_name[] = "core::checkRange_11()";
    try {
        LOGD("%s", method_name);
        Mat& a = *((Mat*)a_nativeObj);
        bool _retval_ = cv::checkRange( a );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void circle(Mat& img, Point center, int radius, Scalar color, int thickness = 1, int lineType = 8, int shift = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_circle_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jint, jdouble, jdouble, jdouble, jdouble, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_circle_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble center_x, jdouble center_y, jint radius, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness, jint lineType, jint shift)
{
    static const char method_name[] = "core::circle_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point center((int)center_x, (int)center_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::circle( img, center, (int)radius, color, (int)thickness, (int)lineType, (int)shift );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_circle_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jint, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_circle_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble center_x, jdouble center_y, jint radius, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness)
{
    static const char method_name[] = "core::circle_11()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point center((int)center_x, (int)center_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::circle( img, center, (int)radius, color, (int)thickness );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_circle_12 (JNIEnv*, jclass, jlong, jdouble, jdouble, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_circle_12
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble center_x, jdouble center_y, jint radius, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "core::circle_12()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point center((int)center_x, (int)center_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::circle( img, center, (int)radius, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool clipLine(Rect imgRect, Point& pt1, Point& pt2)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_clipLine_10 (JNIEnv*, jclass, jint, jint, jint, jint, jdouble, jdouble, jdoubleArray, jdouble, jdouble, jdoubleArray);

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_clipLine_10
  (JNIEnv* env, jclass , jint imgRect_x, jint imgRect_y, jint imgRect_width, jint imgRect_height, jdouble pt1_x, jdouble pt1_y, jdoubleArray pt1_out, jdouble pt2_x, jdouble pt2_y, jdoubleArray pt2_out)
{
    static const char method_name[] = "core::clipLine_10()";
    try {
        LOGD("%s", method_name);
        Rect imgRect(imgRect_x, imgRect_y, imgRect_width, imgRect_height);
        Point pt1((int)pt1_x, (int)pt1_y);
        Point pt2((int)pt2_x, (int)pt2_y);
        bool _retval_ = cv::clipLine( imgRect, pt1, pt2 );
        jdouble tmp_pt1[2] = {pt1.x, pt1.y}; env->SetDoubleArrayRegion(pt1_out, 0, 2, tmp_pt1);  jdouble tmp_pt2[2] = {pt2.x, pt2.y}; env->SetDoubleArrayRegion(pt2_out, 0, 2, tmp_pt2);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void compare(Mat src1, Mat src2, Mat& dst, int cmpop)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_compare_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_compare_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jint cmpop)
{
    static const char method_name[] = "core::compare_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::compare( src1, src2, dst, (int)cmpop );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void compare(Mat src1, Scalar src2, Mat& dst, int cmpop)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_compare_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_compare_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj, jint cmpop)
{
    static const char method_name[] = "core::compare_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::compare( src1, src2, dst, (int)cmpop );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void completeSymm(Mat& mtx, bool lowerToUpper = false)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_completeSymm_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_completeSymm_10
  (JNIEnv* env, jclass , jlong mtx_nativeObj, jboolean lowerToUpper)
{
    static const char method_name[] = "core::completeSymm_10()";
    try {
        LOGD("%s", method_name);
        Mat& mtx = *((Mat*)mtx_nativeObj);
        cv::completeSymm( mtx, (bool)lowerToUpper );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_completeSymm_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_completeSymm_11
  (JNIEnv* env, jclass , jlong mtx_nativeObj)
{
    static const char method_name[] = "core::completeSymm_11()";
    try {
        LOGD("%s", method_name);
        Mat& mtx = *((Mat*)mtx_nativeObj);
        cv::completeSymm( mtx );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void convertScaleAbs(Mat src, Mat& dst, double alpha = 1, double beta = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_convertScaleAbs_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_convertScaleAbs_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble alpha, jdouble beta)
{
    static const char method_name[] = "core::convertScaleAbs_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::convertScaleAbs( src, dst, (double)alpha, (double)beta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_convertScaleAbs_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_convertScaleAbs_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::convertScaleAbs_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::convertScaleAbs( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  int countNonZero(Mat src)
//

JNIEXPORT jint JNICALL Java_org_opencv_core_Core_countNonZero_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_core_Core_countNonZero_10
  (JNIEnv* env, jclass , jlong src_nativeObj)
{
    static const char method_name[] = "core::countNonZero_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        int _retval_ = cv::countNonZero( src );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cubeRoot(float val)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_core_Core_cubeRoot_10 (JNIEnv*, jclass, jfloat);

JNIEXPORT jfloat JNICALL Java_org_opencv_core_Core_cubeRoot_10
  (JNIEnv* env, jclass , jfloat val)
{
    static const char method_name[] = "core::cubeRoot_10()";
    try {
        LOGD("%s", method_name);
        
        float _retval_ = cv::cubeRoot( (float)val );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void dct(Mat src, Mat& dst, int flags = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_dct_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_dct_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint flags)
{
    static const char method_name[] = "core::dct_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::dct( src, dst, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_dct_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_dct_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::dct_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::dct( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double determinant(Mat mtx)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_determinant_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_determinant_10
  (JNIEnv* env, jclass , jlong mtx_nativeObj)
{
    static const char method_name[] = "core::determinant_10()";
    try {
        LOGD("%s", method_name);
        Mat& mtx = *((Mat*)mtx_nativeObj);
        double _retval_ = cv::determinant( mtx );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void dft(Mat src, Mat& dst, int flags = 0, int nonzeroRows = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_dft_10 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_dft_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint flags, jint nonzeroRows)
{
    static const char method_name[] = "core::dft_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::dft( src, dst, (int)flags, (int)nonzeroRows );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_dft_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_dft_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::dft_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::dft( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void divide(Mat src1, Mat src2, Mat& dst, double scale = 1, int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jdouble scale, jint dtype)
{
    static const char method_name[] = "core::divide_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::divide( src1, src2, dst, (double)scale, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jdouble scale)
{
    static const char method_name[] = "core::divide_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::divide( src1, src2, dst, (double)scale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_12
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::divide_12()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::divide( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void divide(double scale, Mat src2, Mat& dst, int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_13 (JNIEnv*, jclass, jdouble, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_13
  (JNIEnv* env, jclass , jdouble scale, jlong src2_nativeObj, jlong dst_nativeObj, jint dtype)
{
    static const char method_name[] = "core::divide_13()";
    try {
        LOGD("%s", method_name);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::divide( (double)scale, src2, dst, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_14 (JNIEnv*, jclass, jdouble, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_14
  (JNIEnv* env, jclass , jdouble scale, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::divide_14()";
    try {
        LOGD("%s", method_name);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::divide( (double)scale, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void divide(Mat src1, Scalar src2, Mat& dst, double scale = 1, int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_15 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_15
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj, jdouble scale, jint dtype)
{
    static const char method_name[] = "core::divide_15()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::divide( src1, src2, dst, (double)scale, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_16 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_16
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj, jdouble scale)
{
    static const char method_name[] = "core::divide_16()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::divide( src1, src2, dst, (double)scale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_17 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_divide_17
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj)
{
    static const char method_name[] = "core::divide_17()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::divide( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool eigen(Mat src, bool computeEigenvectors, Mat& eigenvalues, Mat& eigenvectors)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_eigen_10 (JNIEnv*, jclass, jlong, jboolean, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_eigen_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jboolean computeEigenvectors, jlong eigenvalues_nativeObj, jlong eigenvectors_nativeObj)
{
    static const char method_name[] = "core::eigen_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& eigenvalues = *((Mat*)eigenvalues_nativeObj);
        Mat& eigenvectors = *((Mat*)eigenvectors_nativeObj);
        bool _retval_ = cv::eigen( src, (bool)computeEigenvectors, eigenvalues, eigenvectors );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void ellipse(Mat& img, Point center, Size axes, double angle, double startAngle, double endAngle, Scalar color, int thickness = 1, int lineType = 8, int shift = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble center_x, jdouble center_y, jdouble axes_width, jdouble axes_height, jdouble angle, jdouble startAngle, jdouble endAngle, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness, jint lineType, jint shift)
{
    static const char method_name[] = "core::ellipse_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point center((int)center_x, (int)center_y);
        Size axes((int)axes_width, (int)axes_height);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::ellipse( img, center, axes, (double)angle, (double)startAngle, (double)endAngle, color, (int)thickness, (int)lineType, (int)shift );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble center_x, jdouble center_y, jdouble axes_width, jdouble axes_height, jdouble angle, jdouble startAngle, jdouble endAngle, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness)
{
    static const char method_name[] = "core::ellipse_11()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point center((int)center_x, (int)center_y);
        Size axes((int)axes_width, (int)axes_height);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::ellipse( img, center, axes, (double)angle, (double)startAngle, (double)endAngle, color, (int)thickness );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_12 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_12
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble center_x, jdouble center_y, jdouble axes_width, jdouble axes_height, jdouble angle, jdouble startAngle, jdouble endAngle, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "core::ellipse_12()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point center((int)center_x, (int)center_y);
        Size axes((int)axes_width, (int)axes_height);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::ellipse( img, center, axes, (double)angle, (double)startAngle, (double)endAngle, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void ellipse(Mat& img, RotatedRect box, Scalar color, int thickness = 1, int lineType = 8)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_13 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_13
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble box_center_x, jdouble box_center_y, jdouble box_size_width, jdouble box_size_height, jdouble box_angle, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness, jint lineType)
{
    static const char method_name[] = "core::ellipse_13()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        RotatedRect box(cv::Point2f(box_center_x, box_center_y), cv::Size2f(box_size_width, box_size_height), box_angle);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::ellipse( img, box, color, (int)thickness, (int)lineType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_14 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_14
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble box_center_x, jdouble box_center_y, jdouble box_size_width, jdouble box_size_height, jdouble box_angle, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness)
{
    static const char method_name[] = "core::ellipse_14()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        RotatedRect box(cv::Point2f(box_center_x, box_center_y), cv::Size2f(box_size_width, box_size_height), box_angle);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::ellipse( img, box, color, (int)thickness );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_15 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse_15
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble box_center_x, jdouble box_center_y, jdouble box_size_width, jdouble box_size_height, jdouble box_angle, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "core::ellipse_15()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        RotatedRect box(cv::Point2f(box_center_x, box_center_y), cv::Size2f(box_size_width, box_size_height), box_angle);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::ellipse( img, box, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void ellipse2Poly(Point center, Size axes, int angle, int arcStart, int arcEnd, int delta, vector_Point& pts)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse2Poly_10 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jint, jint, jint, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_ellipse2Poly_10
  (JNIEnv* env, jclass , jdouble center_x, jdouble center_y, jdouble axes_width, jdouble axes_height, jint angle, jint arcStart, jint arcEnd, jint delta, jlong pts_mat_nativeObj)
{
    static const char method_name[] = "core::ellipse2Poly_10()";
    try {
        LOGD("%s", method_name);
        vector<Point> pts;
        Mat& pts_mat = *((Mat*)pts_mat_nativeObj);
        Point center((int)center_x, (int)center_y);
        Size axes((int)axes_width, (int)axes_height);
        cv::ellipse2Poly( center, axes, (int)angle, (int)arcStart, (int)arcEnd, (int)delta, pts );
        vector_Point_to_Mat( pts, pts_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void exp(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_exp_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_exp_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::exp_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::exp( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void extractChannel(Mat src, Mat& dst, int coi)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_extractChannel_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_extractChannel_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint coi)
{
    static const char method_name[] = "core::extractChannel_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::extractChannel( src, dst, (int)coi );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  float fastAtan2(float y, float x)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_core_Core_fastAtan2_10 (JNIEnv*, jclass, jfloat, jfloat);

JNIEXPORT jfloat JNICALL Java_org_opencv_core_Core_fastAtan2_10
  (JNIEnv* env, jclass , jfloat y, jfloat x)
{
    static const char method_name[] = "core::fastAtan2_10()";
    try {
        LOGD("%s", method_name);
        
        float _retval_ = cv::fastAtan2( (float)y, (float)x );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void fillConvexPoly(Mat& img, vector_Point points, Scalar color, int lineType = 8, int shift = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_fillConvexPoly_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_fillConvexPoly_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong points_mat_nativeObj, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint lineType, jint shift)
{
    static const char method_name[] = "core::fillConvexPoly_10()";
    try {
        LOGD("%s", method_name);
        vector<Point> points;
        Mat& points_mat = *((Mat*)points_mat_nativeObj);
        Mat_to_vector_Point( points_mat, points );
        Mat& img = *((Mat*)img_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::fillConvexPoly( img, points, color, (int)lineType, (int)shift );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_fillConvexPoly_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_fillConvexPoly_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong points_mat_nativeObj, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "core::fillConvexPoly_11()";
    try {
        LOGD("%s", method_name);
        vector<Point> points;
        Mat& points_mat = *((Mat*)points_mat_nativeObj);
        Mat_to_vector_Point( points_mat, points );
        Mat& img = *((Mat*)img_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::fillConvexPoly( img, points, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void fillPoly(Mat& img, vector_vector_Point pts, Scalar color, int lineType = 8, int shift = 0, Point offset = Point())
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_fillPoly_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_fillPoly_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pts_mat_nativeObj, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint lineType, jint shift, jdouble offset_x, jdouble offset_y)
{
    static const char method_name[] = "core::fillPoly_10()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > pts;
        Mat& pts_mat = *((Mat*)pts_mat_nativeObj);
        Mat_to_vector_vector_Point( pts_mat, pts );
        Mat& img = *((Mat*)img_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        Point offset((int)offset_x, (int)offset_y);
        cv::fillPoly( img, pts, color, (int)lineType, (int)shift, offset );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_fillPoly_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_fillPoly_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pts_mat_nativeObj, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "core::fillPoly_11()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > pts;
        Mat& pts_mat = *((Mat*)pts_mat_nativeObj);
        Mat_to_vector_vector_Point( pts_mat, pts );
        Mat& img = *((Mat*)img_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::fillPoly( img, pts, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void findNonZero(Mat src, Mat& idx)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_findNonZero_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_findNonZero_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong idx_nativeObj)
{
    static const char method_name[] = "core::findNonZero_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& idx = *((Mat*)idx_nativeObj);
        cv::findNonZero( src, idx );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void flip(Mat src, Mat& dst, int flipCode)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_flip_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_flip_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint flipCode)
{
    static const char method_name[] = "core::flip_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::flip( src, dst, (int)flipCode );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void gemm(Mat src1, Mat src2, double alpha, Mat src3, double gamma, Mat& dst, int flags = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_gemm_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jlong, jdouble, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_gemm_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jdouble alpha, jlong src3_nativeObj, jdouble gamma, jlong dst_nativeObj, jint flags)
{
    static const char method_name[] = "core::gemm_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& src3 = *((Mat*)src3_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::gemm( src1, src2, (double)alpha, src3, (double)gamma, dst, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_gemm_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jlong, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_gemm_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jdouble alpha, jlong src3_nativeObj, jdouble gamma, jlong dst_nativeObj)
{
    static const char method_name[] = "core::gemm_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& src3 = *((Mat*)src3_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::gemm( src1, src2, (double)alpha, src3, (double)gamma, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  string getBuildInformation()
//

JNIEXPORT jstring JNICALL Java_org_opencv_core_Core_getBuildInformation_10 (JNIEnv*, jclass);

JNIEXPORT jstring JNICALL Java_org_opencv_core_Core_getBuildInformation_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "core::getBuildInformation_10()";
    try {
        LOGD("%s", method_name);
        
        string _retval_ = cv::getBuildInformation(  );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  int64 getCPUTickCount()
//

JNIEXPORT jlong JNICALL Java_org_opencv_core_Core_getCPUTickCount_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_core_Core_getCPUTickCount_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "core::getCPUTickCount_10()";
    try {
        LOGD("%s", method_name);
        
        int64 _retval_ = cv::getCPUTickCount(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNumberOfCPUs()
//

JNIEXPORT jint JNICALL Java_org_opencv_core_Core_getNumberOfCPUs_10 (JNIEnv*, jclass);

JNIEXPORT jint JNICALL Java_org_opencv_core_Core_getNumberOfCPUs_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "core::getNumberOfCPUs_10()";
    try {
        LOGD("%s", method_name);
        
        int _retval_ = cv::getNumberOfCPUs(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getOptimalDFTSize(int vecsize)
//

JNIEXPORT jint JNICALL Java_org_opencv_core_Core_getOptimalDFTSize_10 (JNIEnv*, jclass, jint);

JNIEXPORT jint JNICALL Java_org_opencv_core_Core_getOptimalDFTSize_10
  (JNIEnv* env, jclass , jint vecsize)
{
    static const char method_name[] = "core::getOptimalDFTSize_10()";
    try {
        LOGD("%s", method_name);
        
        int _retval_ = cv::getOptimalDFTSize( (int)vecsize );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 getTickCount()
//

JNIEXPORT jlong JNICALL Java_org_opencv_core_Core_getTickCount_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_core_Core_getTickCount_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "core::getTickCount_10()";
    try {
        LOGD("%s", method_name);
        
        int64 _retval_ = cv::getTickCount(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getTickFrequency()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_getTickFrequency_10 (JNIEnv*, jclass);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_getTickFrequency_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "core::getTickFrequency_10()";
    try {
        LOGD("%s", method_name);
        
        double _retval_ = cv::getTickFrequency(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void hconcat(vector_Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_hconcat_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_hconcat_10
  (JNIEnv* env, jclass , jlong src_mat_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::hconcat_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Mat( src_mat, src );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::hconcat( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void idct(Mat src, Mat& dst, int flags = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_idct_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_idct_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint flags)
{
    static const char method_name[] = "core::idct_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::idct( src, dst, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_idct_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_idct_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::idct_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::idct( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void idft(Mat src, Mat& dst, int flags = 0, int nonzeroRows = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_idft_10 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_idft_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint flags, jint nonzeroRows)
{
    static const char method_name[] = "core::idft_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::idft( src, dst, (int)flags, (int)nonzeroRows );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_idft_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_idft_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::idft_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::idft( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void inRange(Mat src, Scalar lowerb, Scalar upperb, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_inRange_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_inRange_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jdouble lowerb_val0, jdouble lowerb_val1, jdouble lowerb_val2, jdouble lowerb_val3, jdouble upperb_val0, jdouble upperb_val1, jdouble upperb_val2, jdouble upperb_val3, jlong dst_nativeObj)
{
    static const char method_name[] = "core::inRange_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Scalar lowerb(lowerb_val0, lowerb_val1, lowerb_val2, lowerb_val3);
        Scalar upperb(upperb_val0, upperb_val1, upperb_val2, upperb_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::inRange( src, lowerb, upperb, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void insertChannel(Mat src, Mat& dst, int coi)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_insertChannel_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_insertChannel_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint coi)
{
    static const char method_name[] = "core::insertChannel_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::insertChannel( src, dst, (int)coi );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double invert(Mat src, Mat& dst, int flags = DECOMP_LU)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_invert_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_invert_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint flags)
{
    static const char method_name[] = "core::invert_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        double _retval_ = cv::invert( src, dst, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_invert_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_invert_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::invert_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        double _retval_ = cv::invert( src, dst );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double kmeans(Mat data, int K, Mat& bestLabels, TermCriteria criteria, int attempts, int flags, Mat& centers = Mat())
//

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_kmeans_10 (JNIEnv*, jclass, jlong, jint, jlong, jint, jint, jdouble, jint, jint, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_kmeans_10
  (JNIEnv* env, jclass , jlong data_nativeObj, jint K, jlong bestLabels_nativeObj, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jint attempts, jint flags, jlong centers_nativeObj)
{
    static const char method_name[] = "core::kmeans_10()";
    try {
        LOGD("%s", method_name);
        Mat& data = *((Mat*)data_nativeObj);
        Mat& bestLabels = *((Mat*)bestLabels_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        Mat& centers = *((Mat*)centers_nativeObj);
        double _retval_ = cv::kmeans( data, (int)K, bestLabels, criteria, (int)attempts, (int)flags, centers );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_kmeans_11 (JNIEnv*, jclass, jlong, jint, jlong, jint, jint, jdouble, jint, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_kmeans_11
  (JNIEnv* env, jclass , jlong data_nativeObj, jint K, jlong bestLabels_nativeObj, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jint attempts, jint flags)
{
    static const char method_name[] = "core::kmeans_11()";
    try {
        LOGD("%s", method_name);
        Mat& data = *((Mat*)data_nativeObj);
        Mat& bestLabels = *((Mat*)bestLabels_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        double _retval_ = cv::kmeans( data, (int)K, bestLabels, criteria, (int)attempts, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void line(Mat& img, Point pt1, Point pt2, Scalar color, int thickness = 1, int lineType = 8, int shift = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_line_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_line_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble pt1_x, jdouble pt1_y, jdouble pt2_x, jdouble pt2_y, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness, jint lineType, jint shift)
{
    static const char method_name[] = "core::line_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point pt1((int)pt1_x, (int)pt1_y);
        Point pt2((int)pt2_x, (int)pt2_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::line( img, pt1, pt2, color, (int)thickness, (int)lineType, (int)shift );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_line_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_line_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble pt1_x, jdouble pt1_y, jdouble pt2_x, jdouble pt2_y, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness)
{
    static const char method_name[] = "core::line_11()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point pt1((int)pt1_x, (int)pt1_y);
        Point pt2((int)pt2_x, (int)pt2_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::line( img, pt1, pt2, color, (int)thickness );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_line_12 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_line_12
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble pt1_x, jdouble pt1_y, jdouble pt2_x, jdouble pt2_y, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "core::line_12()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point pt1((int)pt1_x, (int)pt1_y);
        Point pt2((int)pt2_x, (int)pt2_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::line( img, pt1, pt2, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void log(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_log_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_log_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::log_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::log( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void magnitude(Mat x, Mat y, Mat& magnitude)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_magnitude_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_magnitude_10
  (JNIEnv* env, jclass , jlong x_nativeObj, jlong y_nativeObj, jlong magnitude_nativeObj)
{
    static const char method_name[] = "core::magnitude_10()";
    try {
        LOGD("%s", method_name);
        Mat& x = *((Mat*)x_nativeObj);
        Mat& y = *((Mat*)y_nativeObj);
        Mat& magnitude = *((Mat*)magnitude_nativeObj);
        cv::magnitude( x, y, magnitude );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void max(Mat src1, Mat src2, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_max_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_max_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::max_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::max( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void max(Mat src1, Scalar src2, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_max_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_max_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj)
{
    static const char method_name[] = "core::max_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::max( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  Scalar mean(Mat src, Mat mask = Mat())
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_mean_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_mean_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::mean_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        Scalar _retval_ = cv::mean( src, mask );
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {_retval_.val[0], _retval_.val[1], _retval_.val[2], _retval_.val[3]}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_mean_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_mean_11
  (JNIEnv* env, jclass , jlong src_nativeObj)
{
    static const char method_name[] = "core::mean_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Scalar _retval_ = cv::mean( src );
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {_retval_.val[0], _retval_.val[1], _retval_.val[2], _retval_.val[3]}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void meanStdDev(Mat src, vector_double& mean, vector_double& stddev, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_meanStdDev_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_meanStdDev_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong mean_mat_nativeObj, jlong stddev_mat_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::meanStdDev_10()";
    try {
        LOGD("%s", method_name);
        vector<double> mean;
        Mat& mean_mat = *((Mat*)mean_mat_nativeObj);
        vector<double> stddev;
        Mat& stddev_mat = *((Mat*)stddev_mat_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::meanStdDev( src, mean, stddev, mask );
        vector_double_to_Mat( mean, mean_mat );  vector_double_to_Mat( stddev, stddev_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_meanStdDev_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_meanStdDev_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong mean_mat_nativeObj, jlong stddev_mat_nativeObj)
{
    static const char method_name[] = "core::meanStdDev_11()";
    try {
        LOGD("%s", method_name);
        vector<double> mean;
        Mat& mean_mat = *((Mat*)mean_mat_nativeObj);
        vector<double> stddev;
        Mat& stddev_mat = *((Mat*)stddev_mat_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        cv::meanStdDev( src, mean, stddev );
        vector_double_to_Mat( mean, mean_mat );  vector_double_to_Mat( stddev, stddev_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void merge(vector_Mat mv, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_merge_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_merge_10
  (JNIEnv* env, jclass , jlong mv_mat_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::merge_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> mv;
        Mat& mv_mat = *((Mat*)mv_mat_nativeObj);
        Mat_to_vector_Mat( mv_mat, mv );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::merge( mv, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void min(Mat src1, Mat src2, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_min_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_min_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::min_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::min( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void min(Mat src1, Scalar src2, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_min_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_min_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj)
{
    static const char method_name[] = "core::min_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::min( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void mixChannels(vector_Mat src, vector_Mat dst, vector_int fromTo)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_mixChannels_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_mixChannels_10
  (JNIEnv* env, jclass , jlong src_mat_nativeObj, jlong dst_mat_nativeObj, jlong fromTo_mat_nativeObj)
{
    static const char method_name[] = "core::mixChannels_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Mat( src_mat, src );
        vector<Mat> dst;
        Mat& dst_mat = *((Mat*)dst_mat_nativeObj);
        Mat_to_vector_Mat( dst_mat, dst );
        vector<int> fromTo;
        Mat& fromTo_mat = *((Mat*)fromTo_mat_nativeObj);
        Mat_to_vector_int( fromTo_mat, fromTo );
        cv::mixChannels( src, dst, fromTo );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void mulSpectrums(Mat a, Mat b, Mat& c, int flags, bool conjB = false)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulSpectrums_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulSpectrums_10
  (JNIEnv* env, jclass , jlong a_nativeObj, jlong b_nativeObj, jlong c_nativeObj, jint flags, jboolean conjB)
{
    static const char method_name[] = "core::mulSpectrums_10()";
    try {
        LOGD("%s", method_name);
        Mat& a = *((Mat*)a_nativeObj);
        Mat& b = *((Mat*)b_nativeObj);
        Mat& c = *((Mat*)c_nativeObj);
        cv::mulSpectrums( a, b, c, (int)flags, (bool)conjB );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulSpectrums_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulSpectrums_11
  (JNIEnv* env, jclass , jlong a_nativeObj, jlong b_nativeObj, jlong c_nativeObj, jint flags)
{
    static const char method_name[] = "core::mulSpectrums_11()";
    try {
        LOGD("%s", method_name);
        Mat& a = *((Mat*)a_nativeObj);
        Mat& b = *((Mat*)b_nativeObj);
        Mat& c = *((Mat*)c_nativeObj);
        cv::mulSpectrums( a, b, c, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void mulTransposed(Mat src, Mat& dst, bool aTa, Mat delta = Mat(), double scale = 1, int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulTransposed_10 (JNIEnv*, jclass, jlong, jlong, jboolean, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulTransposed_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jboolean aTa, jlong delta_nativeObj, jdouble scale, jint dtype)
{
    static const char method_name[] = "core::mulTransposed_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& delta = *((Mat*)delta_nativeObj);
        cv::mulTransposed( src, dst, (bool)aTa, delta, (double)scale, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulTransposed_11 (JNIEnv*, jclass, jlong, jlong, jboolean, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulTransposed_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jboolean aTa, jlong delta_nativeObj, jdouble scale)
{
    static const char method_name[] = "core::mulTransposed_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& delta = *((Mat*)delta_nativeObj);
        cv::mulTransposed( src, dst, (bool)aTa, delta, (double)scale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulTransposed_12 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_mulTransposed_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jboolean aTa)
{
    static const char method_name[] = "core::mulTransposed_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::mulTransposed( src, dst, (bool)aTa );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void multiply(Mat src1, Mat src2, Mat& dst, double scale = 1, int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jdouble scale, jint dtype)
{
    static const char method_name[] = "core::multiply_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::multiply( src1, src2, dst, (double)scale, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jdouble scale)
{
    static const char method_name[] = "core::multiply_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::multiply( src1, src2, dst, (double)scale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_12
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::multiply_12()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::multiply( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void multiply(Mat src1, Scalar src2, Mat& dst, double scale = 1, int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_13 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_13
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj, jdouble scale, jint dtype)
{
    static const char method_name[] = "core::multiply_13()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::multiply( src1, src2, dst, (double)scale, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_14 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_14
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj, jdouble scale)
{
    static const char method_name[] = "core::multiply_14()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::multiply( src1, src2, dst, (double)scale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_15 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_multiply_15
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj)
{
    static const char method_name[] = "core::multiply_15()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::multiply( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double norm(Mat src1, int normType = NORM_L2, Mat mask = Mat())
//

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_10 (JNIEnv*, jclass, jlong, jint, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jint normType, jlong mask_nativeObj)
{
    static const char method_name[] = "core::norm_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        double _retval_ = cv::norm( src1, (int)normType, mask );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jint normType)
{
    static const char method_name[] = "core::norm_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        double _retval_ = cv::norm( src1, (int)normType );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_12 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_12
  (JNIEnv* env, jclass , jlong src1_nativeObj)
{
    static const char method_name[] = "core::norm_12()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        double _retval_ = cv::norm( src1 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double norm(Mat src1, Mat src2, int normType = NORM_L2, Mat mask = Mat())
//

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_13 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_13
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jint normType, jlong mask_nativeObj)
{
    static const char method_name[] = "core::norm_13()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        double _retval_ = cv::norm( src1, src2, (int)normType, mask );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_14 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_14
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jint normType)
{
    static const char method_name[] = "core::norm_14()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        double _retval_ = cv::norm( src1, src2, (int)normType );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_15 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_norm_15
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj)
{
    static const char method_name[] = "core::norm_15()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        double _retval_ = cv::norm( src1, src2 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void normalize(Mat src, Mat& dst, double alpha = 1, double beta = 0, int norm_type = NORM_L2, int dtype = -1, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_normalize_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_normalize_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble alpha, jdouble beta, jint norm_type, jint dtype, jlong mask_nativeObj)
{
    static const char method_name[] = "core::normalize_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::normalize( src, dst, (double)alpha, (double)beta, (int)norm_type, (int)dtype, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_normalize_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_normalize_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble alpha, jdouble beta, jint norm_type, jint dtype)
{
    static const char method_name[] = "core::normalize_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::normalize( src, dst, (double)alpha, (double)beta, (int)norm_type, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_normalize_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_normalize_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble alpha, jdouble beta, jint norm_type)
{
    static const char method_name[] = "core::normalize_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::normalize( src, dst, (double)alpha, (double)beta, (int)norm_type );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_normalize_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_normalize_13
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::normalize_13()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::normalize( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void patchNaNs(Mat& a, double val = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_patchNaNs_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_patchNaNs_10
  (JNIEnv* env, jclass , jlong a_nativeObj, jdouble val)
{
    static const char method_name[] = "core::patchNaNs_10()";
    try {
        LOGD("%s", method_name);
        Mat& a = *((Mat*)a_nativeObj);
        cv::patchNaNs( a, (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_patchNaNs_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_patchNaNs_11
  (JNIEnv* env, jclass , jlong a_nativeObj)
{
    static const char method_name[] = "core::patchNaNs_11()";
    try {
        LOGD("%s", method_name);
        Mat& a = *((Mat*)a_nativeObj);
        cv::patchNaNs( a );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void perspectiveTransform(Mat src, Mat& dst, Mat m)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_perspectiveTransform_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_perspectiveTransform_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong m_nativeObj)
{
    static const char method_name[] = "core::perspectiveTransform_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& m = *((Mat*)m_nativeObj);
        cv::perspectiveTransform( src, dst, m );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void phase(Mat x, Mat y, Mat& angle, bool angleInDegrees = false)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_phase_10 (JNIEnv*, jclass, jlong, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_phase_10
  (JNIEnv* env, jclass , jlong x_nativeObj, jlong y_nativeObj, jlong angle_nativeObj, jboolean angleInDegrees)
{
    static const char method_name[] = "core::phase_10()";
    try {
        LOGD("%s", method_name);
        Mat& x = *((Mat*)x_nativeObj);
        Mat& y = *((Mat*)y_nativeObj);
        Mat& angle = *((Mat*)angle_nativeObj);
        cv::phase( x, y, angle, (bool)angleInDegrees );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_phase_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_phase_11
  (JNIEnv* env, jclass , jlong x_nativeObj, jlong y_nativeObj, jlong angle_nativeObj)
{
    static const char method_name[] = "core::phase_11()";
    try {
        LOGD("%s", method_name);
        Mat& x = *((Mat*)x_nativeObj);
        Mat& y = *((Mat*)y_nativeObj);
        Mat& angle = *((Mat*)angle_nativeObj);
        cv::phase( x, y, angle );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void polarToCart(Mat magnitude, Mat angle, Mat& x, Mat& y, bool angleInDegrees = false)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_polarToCart_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_polarToCart_10
  (JNIEnv* env, jclass , jlong magnitude_nativeObj, jlong angle_nativeObj, jlong x_nativeObj, jlong y_nativeObj, jboolean angleInDegrees)
{
    static const char method_name[] = "core::polarToCart_10()";
    try {
        LOGD("%s", method_name);
        Mat& magnitude = *((Mat*)magnitude_nativeObj);
        Mat& angle = *((Mat*)angle_nativeObj);
        Mat& x = *((Mat*)x_nativeObj);
        Mat& y = *((Mat*)y_nativeObj);
        cv::polarToCart( magnitude, angle, x, y, (bool)angleInDegrees );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_polarToCart_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_polarToCart_11
  (JNIEnv* env, jclass , jlong magnitude_nativeObj, jlong angle_nativeObj, jlong x_nativeObj, jlong y_nativeObj)
{
    static const char method_name[] = "core::polarToCart_11()";
    try {
        LOGD("%s", method_name);
        Mat& magnitude = *((Mat*)magnitude_nativeObj);
        Mat& angle = *((Mat*)angle_nativeObj);
        Mat& x = *((Mat*)x_nativeObj);
        Mat& y = *((Mat*)y_nativeObj);
        cv::polarToCart( magnitude, angle, x, y );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void polylines(Mat& img, vector_vector_Point pts, bool isClosed, Scalar color, int thickness = 1, int lineType = 8, int shift = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_polylines_10 (JNIEnv*, jclass, jlong, jlong, jboolean, jdouble, jdouble, jdouble, jdouble, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_polylines_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pts_mat_nativeObj, jboolean isClosed, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness, jint lineType, jint shift)
{
    static const char method_name[] = "core::polylines_10()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > pts;
        Mat& pts_mat = *((Mat*)pts_mat_nativeObj);
        Mat_to_vector_vector_Point( pts_mat, pts );
        Mat& img = *((Mat*)img_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::polylines( img, pts, (bool)isClosed, color, (int)thickness, (int)lineType, (int)shift );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_polylines_11 (JNIEnv*, jclass, jlong, jlong, jboolean, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_polylines_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pts_mat_nativeObj, jboolean isClosed, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness)
{
    static const char method_name[] = "core::polylines_11()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > pts;
        Mat& pts_mat = *((Mat*)pts_mat_nativeObj);
        Mat_to_vector_vector_Point( pts_mat, pts );
        Mat& img = *((Mat*)img_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::polylines( img, pts, (bool)isClosed, color, (int)thickness );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_polylines_12 (JNIEnv*, jclass, jlong, jlong, jboolean, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_polylines_12
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pts_mat_nativeObj, jboolean isClosed, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "core::polylines_12()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > pts;
        Mat& pts_mat = *((Mat*)pts_mat_nativeObj);
        Mat_to_vector_vector_Point( pts_mat, pts );
        Mat& img = *((Mat*)img_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::polylines( img, pts, (bool)isClosed, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void pow(Mat src, double power, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_pow_10 (JNIEnv*, jclass, jlong, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_pow_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jdouble power, jlong dst_nativeObj)
{
    static const char method_name[] = "core::pow_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::pow( src, (double)power, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void putText(Mat img, string text, Point org, int fontFace, double fontScale, Scalar color, int thickness = 1, int lineType = 8, bool bottomLeftOrigin = false)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_putText_10 (JNIEnv*, jclass, jlong, jstring, jdouble, jdouble, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_putText_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jstring text, jdouble org_x, jdouble org_y, jint fontFace, jdouble fontScale, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness, jint lineType, jboolean bottomLeftOrigin)
{
    static const char method_name[] = "core::putText_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        const char* utf_text = env->GetStringUTFChars(text, 0); std::string n_text( utf_text ? utf_text : "" ); env->ReleaseStringUTFChars(text, utf_text);
        Point org((int)org_x, (int)org_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::putText( img, n_text, org, (int)fontFace, (double)fontScale, color, (int)thickness, (int)lineType, (bool)bottomLeftOrigin );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_putText_11 (JNIEnv*, jclass, jlong, jstring, jdouble, jdouble, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_putText_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jstring text, jdouble org_x, jdouble org_y, jint fontFace, jdouble fontScale, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness)
{
    static const char method_name[] = "core::putText_11()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        const char* utf_text = env->GetStringUTFChars(text, 0); std::string n_text( utf_text ? utf_text : "" ); env->ReleaseStringUTFChars(text, utf_text);
        Point org((int)org_x, (int)org_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::putText( img, n_text, org, (int)fontFace, (double)fontScale, color, (int)thickness );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_putText_12 (JNIEnv*, jclass, jlong, jstring, jdouble, jdouble, jint, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_putText_12
  (JNIEnv* env, jclass , jlong img_nativeObj, jstring text, jdouble org_x, jdouble org_y, jint fontFace, jdouble fontScale, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "core::putText_12()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        const char* utf_text = env->GetStringUTFChars(text, 0); std::string n_text( utf_text ? utf_text : "" ); env->ReleaseStringUTFChars(text, utf_text);
        Point org((int)org_x, (int)org_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::putText( img, n_text, org, (int)fontFace, (double)fontScale, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void randShuffle_(Mat& dst, double iterFactor = 1.)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_randShuffle_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_randShuffle_10
  (JNIEnv* env, jclass , jlong dst_nativeObj, jdouble iterFactor)
{
    static const char method_name[] = "core::randShuffle_10()";
    try {
        LOGD("%s", method_name);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::randShuffle_( dst, (double)iterFactor );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_randShuffle_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_randShuffle_11
  (JNIEnv* env, jclass , jlong dst_nativeObj)
{
    static const char method_name[] = "core::randShuffle_11()";
    try {
        LOGD("%s", method_name);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::randShuffle_( dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void randn(Mat& dst, double mean, double stddev)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_randn_10 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_randn_10
  (JNIEnv* env, jclass , jlong dst_nativeObj, jdouble mean, jdouble stddev)
{
    static const char method_name[] = "core::randn_10()";
    try {
        LOGD("%s", method_name);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::randn( dst, (double)mean, (double)stddev );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void randu(Mat& dst, double low, double high)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_randu_10 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_randu_10
  (JNIEnv* env, jclass , jlong dst_nativeObj, jdouble low, jdouble high)
{
    static const char method_name[] = "core::randu_10()";
    try {
        LOGD("%s", method_name);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::randu( dst, (double)low, (double)high );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void rectangle(Mat& img, Point pt1, Point pt2, Scalar color, int thickness = 1, int lineType = 8, int shift = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_rectangle_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_rectangle_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble pt1_x, jdouble pt1_y, jdouble pt2_x, jdouble pt2_y, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness, jint lineType, jint shift)
{
    static const char method_name[] = "core::rectangle_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point pt1((int)pt1_x, (int)pt1_y);
        Point pt2((int)pt2_x, (int)pt2_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::rectangle( img, pt1, pt2, color, (int)thickness, (int)lineType, (int)shift );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_rectangle_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_rectangle_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble pt1_x, jdouble pt1_y, jdouble pt2_x, jdouble pt2_y, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness)
{
    static const char method_name[] = "core::rectangle_11()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point pt1((int)pt1_x, (int)pt1_y);
        Point pt2((int)pt2_x, (int)pt2_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::rectangle( img, pt1, pt2, color, (int)thickness );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_rectangle_12 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_rectangle_12
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble pt1_x, jdouble pt1_y, jdouble pt2_x, jdouble pt2_y, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "core::rectangle_12()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Point pt1((int)pt1_x, (int)pt1_y);
        Point pt2((int)pt2_x, (int)pt2_y);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::rectangle( img, pt1, pt2, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void reduce(Mat src, Mat& dst, int dim, int rtype, int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_reduce_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_reduce_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint dim, jint rtype, jint dtype)
{
    static const char method_name[] = "core::reduce_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::reduce( src, dst, (int)dim, (int)rtype, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_reduce_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_reduce_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint dim, jint rtype)
{
    static const char method_name[] = "core::reduce_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::reduce( src, dst, (int)dim, (int)rtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void repeat(Mat src, int ny, int nx, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_repeat_10 (JNIEnv*, jclass, jlong, jint, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_repeat_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jint ny, jint nx, jlong dst_nativeObj)
{
    static const char method_name[] = "core::repeat_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::repeat( src, (int)ny, (int)nx, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void scaleAdd(Mat src1, double alpha, Mat src2, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_scaleAdd_10 (JNIEnv*, jclass, jlong, jdouble, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_scaleAdd_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble alpha, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::scaleAdd_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::scaleAdd( src1, (double)alpha, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setErrorVerbosity(bool verbose)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_setErrorVerbosity_10 (JNIEnv*, jclass, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_setErrorVerbosity_10
  (JNIEnv* env, jclass , jboolean verbose)
{
    static const char method_name[] = "core::setErrorVerbosity_10()";
    try {
        LOGD("%s", method_name);
        
        cv::setErrorVerbosity( (bool)verbose );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setIdentity(Mat& mtx, Scalar s = Scalar(1))
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_setIdentity_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_setIdentity_10
  (JNIEnv* env, jclass , jlong mtx_nativeObj, jdouble s_val0, jdouble s_val1, jdouble s_val2, jdouble s_val3)
{
    static const char method_name[] = "core::setIdentity_10()";
    try {
        LOGD("%s", method_name);
        Mat& mtx = *((Mat*)mtx_nativeObj);
        Scalar s(s_val0, s_val1, s_val2, s_val3);
        cv::setIdentity( mtx, s );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_setIdentity_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_setIdentity_11
  (JNIEnv* env, jclass , jlong mtx_nativeObj)
{
    static const char method_name[] = "core::setIdentity_11()";
    try {
        LOGD("%s", method_name);
        Mat& mtx = *((Mat*)mtx_nativeObj);
        cv::setIdentity( mtx );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool solve(Mat src1, Mat src2, Mat& dst, int flags = DECOMP_LU)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_solve_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_solve_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jint flags)
{
    static const char method_name[] = "core::solve_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        bool _retval_ = cv::solve( src1, src2, dst, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_solve_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Core_solve_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::solve_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        bool _retval_ = cv::solve( src1, src2, dst );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int solveCubic(Mat coeffs, Mat& roots)
//

JNIEXPORT jint JNICALL Java_org_opencv_core_Core_solveCubic_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_core_Core_solveCubic_10
  (JNIEnv* env, jclass , jlong coeffs_nativeObj, jlong roots_nativeObj)
{
    static const char method_name[] = "core::solveCubic_10()";
    try {
        LOGD("%s", method_name);
        Mat& coeffs = *((Mat*)coeffs_nativeObj);
        Mat& roots = *((Mat*)roots_nativeObj);
        int _retval_ = cv::solveCubic( coeffs, roots );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double solvePoly(Mat coeffs, Mat& roots, int maxIters = 300)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_solvePoly_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_solvePoly_10
  (JNIEnv* env, jclass , jlong coeffs_nativeObj, jlong roots_nativeObj, jint maxIters)
{
    static const char method_name[] = "core::solvePoly_10()";
    try {
        LOGD("%s", method_name);
        Mat& coeffs = *((Mat*)coeffs_nativeObj);
        Mat& roots = *((Mat*)roots_nativeObj);
        double _retval_ = cv::solvePoly( coeffs, roots, (int)maxIters );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_solvePoly_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Core_solvePoly_11
  (JNIEnv* env, jclass , jlong coeffs_nativeObj, jlong roots_nativeObj)
{
    static const char method_name[] = "core::solvePoly_11()";
    try {
        LOGD("%s", method_name);
        Mat& coeffs = *((Mat*)coeffs_nativeObj);
        Mat& roots = *((Mat*)roots_nativeObj);
        double _retval_ = cv::solvePoly( coeffs, roots );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void sort(Mat src, Mat& dst, int flags)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_sort_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_sort_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint flags)
{
    static const char method_name[] = "core::sort_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::sort( src, dst, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void sortIdx(Mat src, Mat& dst, int flags)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_sortIdx_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_sortIdx_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint flags)
{
    static const char method_name[] = "core::sortIdx_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::sortIdx( src, dst, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void split(Mat m, vector_Mat& mv)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_split_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_split_10
  (JNIEnv* env, jclass , jlong m_nativeObj, jlong mv_mat_nativeObj)
{
    static const char method_name[] = "core::split_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> mv;
        Mat& mv_mat = *((Mat*)mv_mat_nativeObj);
        Mat& m = *((Mat*)m_nativeObj);
        cv::split( m, mv );
        vector_Mat_to_Mat( mv, mv_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void sqrt(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_sqrt_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_sqrt_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::sqrt_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::sqrt( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void subtract(Mat src1, Mat src2, Mat& dst, Mat mask = Mat(), int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj, jint dtype)
{
    static const char method_name[] = "core::subtract_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::subtract( src1, src2, dst, mask, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::subtract_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::subtract( src1, src2, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_12
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::subtract_12()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::subtract( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void subtract(Mat src1, Scalar src2, Mat& dst, Mat mask = Mat(), int dtype = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_13 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_13
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj, jlong mask_nativeObj, jint dtype)
{
    static const char method_name[] = "core::subtract_13()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::subtract( src1, src2, dst, mask, (int)dtype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_14 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_14
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "core::subtract_14()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::subtract( src1, src2, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_15 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_subtract_15
  (JNIEnv* env, jclass , jlong src1_nativeObj, jdouble src2_val0, jdouble src2_val1, jdouble src2_val2, jdouble src2_val3, jlong dst_nativeObj)
{
    static const char method_name[] = "core::subtract_15()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Scalar src2(src2_val0, src2_val1, src2_val2, src2_val3);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::subtract( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  Scalar sum(Mat src)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_sumElems_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_sumElems_10
  (JNIEnv* env, jclass , jlong src_nativeObj)
{
    static const char method_name[] = "core::sumElems_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Scalar _retval_ = cv::sum( src );
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {_retval_.val[0], _retval_.val[1], _retval_.val[2], _retval_.val[3]}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Scalar trace(Mat mtx)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_trace_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_trace_10
  (JNIEnv* env, jclass , jlong mtx_nativeObj)
{
    static const char method_name[] = "core::trace_10()";
    try {
        LOGD("%s", method_name);
        Mat& mtx = *((Mat*)mtx_nativeObj);
        Scalar _retval_ = cv::trace( mtx );
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {_retval_.val[0], _retval_.val[1], _retval_.val[2], _retval_.val[3]}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void transform(Mat src, Mat& dst, Mat m)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_transform_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_transform_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong m_nativeObj)
{
    static const char method_name[] = "core::transform_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& m = *((Mat*)m_nativeObj);
        cv::transform( src, dst, m );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void transpose(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_transpose_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_transpose_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::transpose_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::transpose( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void vconcat(vector_Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Core_vconcat_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Core_vconcat_10
  (JNIEnv* env, jclass , jlong src_mat_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "core::vconcat_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Mat( src_mat, src );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::vconcat( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



// C++: minMaxLoc(Mat src, double* minVal, double* maxVal=0, Point* minLoc=0, Point* maxLoc=0, InputArray mask=noArray())
JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_n_1minMaxLocManual (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_n_1minMaxLocManual
  (JNIEnv* env, jclass, jlong src_nativeObj, jlong mask_nativeObj)
{
    try {
        LOGD("Core::n_1minMaxLoc()");
        jdoubleArray result;
        result = env->NewDoubleArray(6);
        if (result == NULL) {
            return NULL; /* out of memory error thrown */
        }

        Mat& src = *((Mat*)src_nativeObj);

        double minVal, maxVal;
        Point minLoc, maxLoc;
        if (mask_nativeObj != 0) {
            Mat& mask = *((Mat*)mask_nativeObj);
            minMaxLoc(src, &minVal, &maxVal, &minLoc, &maxLoc, mask);
        } else {
            minMaxLoc(src, &minVal, &maxVal, &minLoc, &maxLoc);
        }

        jdouble fill[6];
        fill[0]=minVal;
        fill[1]=maxVal;
        fill[2]=minLoc.x;
        fill[3]=minLoc.y;
        fill[4]=maxLoc.x;
        fill[5]=maxLoc.y;

        env->SetDoubleArrayRegion(result, 0, 6, fill);

    return result;

    } catch(cv::Exception e) {
        LOGD("Core::n_1minMaxLoc() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return NULL;
    } catch (...) {
        LOGD("Core::n_1minMaxLoc() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {core::minMaxLoc()}");
        return NULL;
    }
}


// C++: Size getTextSize(const string& text, int fontFace, double fontScale, int thickness, int* baseLine);
JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_n_1getTextSize (JNIEnv*, jclass, jstring, jint, jdouble, jint, jintArray);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_core_Core_n_1getTextSize
  (JNIEnv* env, jclass, jstring text, jint fontFace, jdouble fontScale, jint thickness, jintArray baseLine)
{
    try {
        LOGD("Core::n_1getTextSize()");
        jdoubleArray result;
        result = env->NewDoubleArray(2);
        if (result == NULL) {
            return NULL; /* out of memory error thrown */
        }

        const char* utf_text = env->GetStringUTFChars(text, 0);
        std::string n_text( utf_text ? utf_text : "" );
        env->ReleaseStringUTFChars(text, utf_text);

        int _baseLine;
        int* pbaseLine = 0;

        if (baseLine != NULL)
            pbaseLine = &_baseLine;

        cv::Size rsize = cv::getTextSize(n_text, (int)fontFace, (double)fontScale, (int)thickness, pbaseLine);

        jdouble fill[2];
        fill[0]=rsize.width;
        fill[1]=rsize.height;

        env->SetDoubleArrayRegion(result, 0, 2, fill);

        if (baseLine != NULL) {
            jint jbaseLine = (jint)(*pbaseLine);
            env->SetIntArrayRegion(baseLine, 0, 1, &jbaseLine);
        }

        return result;

    } catch(cv::Exception e) {
        LOGD("Core::n_1getTextSize() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return NULL;
    } catch (...) {
        LOGD("Core::n_1getTextSize() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {core::getTextSize()}");
        return NULL;
    }
}


//
//  bool Algorithm::getBool(string name)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Algorithm_getBool_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_core_Algorithm_getBool_10
  (JNIEnv* env, jclass , jlong self, jstring name)
{
    static const char method_name[] = "core::getBool_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        bool _retval_ = me->getBool( n_name );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double Algorithm::getDouble(string name)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Algorithm_getDouble_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jdouble JNICALL Java_org_opencv_core_Algorithm_getDouble_10
  (JNIEnv* env, jclass , jlong self, jstring name)
{
    static const char method_name[] = "core::getDouble_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        double _retval_ = me->getDouble( n_name );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int Algorithm::getInt(string name)
//

JNIEXPORT jint JNICALL Java_org_opencv_core_Algorithm_getInt_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jint JNICALL Java_org_opencv_core_Algorithm_getInt_10
  (JNIEnv* env, jclass , jlong self, jstring name)
{
    static const char method_name[] = "core::getInt_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        int _retval_ = me->getInt( n_name );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat Algorithm::getMat(string name)
//

JNIEXPORT jlong JNICALL Java_org_opencv_core_Algorithm_getMat_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_core_Algorithm_getMat_10
  (JNIEnv* env, jclass , jlong self, jstring name)
{
    static const char method_name[] = "core::getMat_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        Mat _retval_ = me->getMat( n_name );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_Mat Algorithm::getMatVector(string name)
//

JNIEXPORT jlong JNICALL Java_org_opencv_core_Algorithm_getMatVector_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_core_Algorithm_getMatVector_10
  (JNIEnv* env, jclass , jlong self, jstring name)
{
    static const char method_name[] = "core::getMatVector_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        vector<Mat> _ret_val_vector_ = me->getMatVector( n_name );
        Mat* _retval_ = new Mat();  vector_Mat_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  string Algorithm::getString(string name)
//

JNIEXPORT jstring JNICALL Java_org_opencv_core_Algorithm_getString_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jstring JNICALL Java_org_opencv_core_Algorithm_getString_10
  (JNIEnv* env, jclass , jlong self, jstring name)
{
    static const char method_name[] = "core::getString_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        string _retval_ = me->getString( n_name );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  string Algorithm::paramHelp(string name)
//

JNIEXPORT jstring JNICALL Java_org_opencv_core_Algorithm_paramHelp_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jstring JNICALL Java_org_opencv_core_Algorithm_paramHelp_10
  (JNIEnv* env, jclass , jlong self, jstring name)
{
    static const char method_name[] = "core::paramHelp_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        string _retval_ = me->paramHelp( n_name );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  int Algorithm::paramType(string name)
//

JNIEXPORT jint JNICALL Java_org_opencv_core_Algorithm_paramType_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jint JNICALL Java_org_opencv_core_Algorithm_paramType_10
  (JNIEnv* env, jclass , jlong self, jstring name)
{
    static const char method_name[] = "core::paramType_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        int _retval_ = me->paramType( n_name );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void Algorithm::setBool(string name, bool value)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setBool_10 (JNIEnv*, jclass, jlong, jstring, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setBool_10
  (JNIEnv* env, jclass , jlong self, jstring name, jboolean value)
{
    static const char method_name[] = "core::setBool_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        me->setBool( n_name, (bool)value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void Algorithm::setDouble(string name, double value)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setDouble_10 (JNIEnv*, jclass, jlong, jstring, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setDouble_10
  (JNIEnv* env, jclass , jlong self, jstring name, jdouble value)
{
    static const char method_name[] = "core::setDouble_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        me->setDouble( n_name, (double)value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void Algorithm::setInt(string name, int value)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setInt_10 (JNIEnv*, jclass, jlong, jstring, jint);

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setInt_10
  (JNIEnv* env, jclass , jlong self, jstring name, jint value)
{
    static const char method_name[] = "core::setInt_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        me->setInt( n_name, (int)value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void Algorithm::setMat(string name, Mat value)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setMat_10 (JNIEnv*, jclass, jlong, jstring, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setMat_10
  (JNIEnv* env, jclass , jlong self, jstring name, jlong value_nativeObj)
{
    static const char method_name[] = "core::setMat_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        Mat& value = *((Mat*)value_nativeObj);
        me->setMat( n_name, value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void Algorithm::setMatVector(string name, vector_Mat value)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setMatVector_10 (JNIEnv*, jclass, jlong, jstring, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setMatVector_10
  (JNIEnv* env, jclass , jlong self, jstring name, jlong value_mat_nativeObj)
{
    static const char method_name[] = "core::setMatVector_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> value;
        Mat& value_mat = *((Mat*)value_mat_nativeObj);
        Mat_to_vector_Mat( value_mat, value );
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        me->setMatVector( n_name, value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void Algorithm::setString(string name, string value)
//

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setString_10 (JNIEnv*, jclass, jlong, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_setString_10
  (JNIEnv* env, jclass , jlong self, jstring name, jstring value)
{
    static const char method_name[] = "core::setString_10()";
    try {
        LOGD("%s", method_name);
        Algorithm* me = (Algorithm*) self; //TODO: check for NULL
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        const char* utf_value = env->GetStringUTFChars(value, 0); std::string n_value( utf_value ? utf_value : "" ); env->ReleaseStringUTFChars(value, utf_value);
        me->setString( n_name, n_value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  native support for java finalize()
//  static void Algorithm::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_core_Algorithm_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Algorithm*) self;
}


} // extern "C"

#endif // HAVE_OPENCV_CORE
