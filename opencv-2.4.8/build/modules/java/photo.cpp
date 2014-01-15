
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.photo"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_PHOTO
#include "opencv2/photo/photo.hpp"

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
//  void fastNlMeansDenoising(Mat src, Mat& dst, float h = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoising_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoising_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize)
{
    static const char method_name[] = "photo::fastNlMeansDenoising_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoising_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoising_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "photo::fastNlMeansDenoising_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoising( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void fastNlMeansDenoisingColored(Mat src, Mat& dst, float h = 3, float hColor = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColored_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColored_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jfloat hColor, jint templateWindowSize, jint searchWindowSize)
{
    static const char method_name[] = "photo::fastNlMeansDenoisingColored_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingColored( src, dst, (float)h, (float)hColor, (int)templateWindowSize, (int)searchWindowSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColored_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColored_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "photo::fastNlMeansDenoisingColored_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingColored( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void fastNlMeansDenoisingColoredMulti(vector_Mat srcImgs, Mat& dst, int imgToDenoiseIndex, int temporalWindowSize, float h = 3, float hColor = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColoredMulti_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jfloat, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColoredMulti_10
  (JNIEnv* env, jclass , jlong srcImgs_mat_nativeObj, jlong dst_nativeObj, jint imgToDenoiseIndex, jint temporalWindowSize, jfloat h, jfloat hColor, jint templateWindowSize, jint searchWindowSize)
{
    static const char method_name[] = "photo::fastNlMeansDenoisingColoredMulti_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> srcImgs;
        Mat& srcImgs_mat = *((Mat*)srcImgs_mat_nativeObj);
        Mat_to_vector_Mat( srcImgs_mat, srcImgs );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingColoredMulti( srcImgs, dst, (int)imgToDenoiseIndex, (int)temporalWindowSize, (float)h, (float)hColor, (int)templateWindowSize, (int)searchWindowSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColoredMulti_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColoredMulti_11
  (JNIEnv* env, jclass , jlong srcImgs_mat_nativeObj, jlong dst_nativeObj, jint imgToDenoiseIndex, jint temporalWindowSize)
{
    static const char method_name[] = "photo::fastNlMeansDenoisingColoredMulti_11()";
    try {
        LOGD("%s", method_name);
        vector<Mat> srcImgs;
        Mat& srcImgs_mat = *((Mat*)srcImgs_mat_nativeObj);
        Mat_to_vector_Mat( srcImgs_mat, srcImgs );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingColoredMulti( srcImgs, dst, (int)imgToDenoiseIndex, (int)temporalWindowSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void fastNlMeansDenoisingMulti(vector_Mat srcImgs, Mat& dst, int imgToDenoiseIndex, int temporalWindowSize, float h = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingMulti_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingMulti_10
  (JNIEnv* env, jclass , jlong srcImgs_mat_nativeObj, jlong dst_nativeObj, jint imgToDenoiseIndex, jint temporalWindowSize, jfloat h, jint templateWindowSize, jint searchWindowSize)
{
    static const char method_name[] = "photo::fastNlMeansDenoisingMulti_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> srcImgs;
        Mat& srcImgs_mat = *((Mat*)srcImgs_mat_nativeObj);
        Mat_to_vector_Mat( srcImgs_mat, srcImgs );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingMulti( srcImgs, dst, (int)imgToDenoiseIndex, (int)temporalWindowSize, (float)h, (int)templateWindowSize, (int)searchWindowSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingMulti_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingMulti_11
  (JNIEnv* env, jclass , jlong srcImgs_mat_nativeObj, jlong dst_nativeObj, jint imgToDenoiseIndex, jint temporalWindowSize)
{
    static const char method_name[] = "photo::fastNlMeansDenoisingMulti_11()";
    try {
        LOGD("%s", method_name);
        vector<Mat> srcImgs;
        Mat& srcImgs_mat = *((Mat*)srcImgs_mat_nativeObj);
        Mat_to_vector_Mat( srcImgs_mat, srcImgs );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingMulti( srcImgs, dst, (int)imgToDenoiseIndex, (int)temporalWindowSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void inpaint(Mat src, Mat inpaintMask, Mat& dst, double inpaintRadius, int flags)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_inpaint_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_inpaint_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong inpaintMask_nativeObj, jlong dst_nativeObj, jdouble inpaintRadius, jint flags)
{
    static const char method_name[] = "photo::inpaint_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& inpaintMask = *((Mat*)inpaintMask_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::inpaint( src, inpaintMask, dst, (double)inpaintRadius, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



} // extern "C"

#endif // HAVE_OPENCV_PHOTO
