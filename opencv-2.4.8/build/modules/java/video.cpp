
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.video"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_VIDEO
#include "opencv2/video/video.hpp"

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
//  void BackgroundSubtractor::operator ()(Mat image, Mat& fgmask, double learningRate = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj, jdouble learningRate)
{
    static const char method_name[] = "video::apply_10()";
    try {
        LOGD("%s", method_name);
        BackgroundSubtractor* me = (BackgroundSubtractor*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        me->operator ()( image, fgmask, (double)learningRate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj)
{
    static const char method_name[] = "video::apply_11()";
    try {
        LOGD("%s", method_name);
        BackgroundSubtractor* me = (BackgroundSubtractor*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        me->operator ()( image, fgmask );
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
//  static void BackgroundSubtractor::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (BackgroundSubtractor*) self;
}


//
//  RotatedRect CamShift(Mat probImage, Rect& window, TermCriteria criteria)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_Video_CamShift_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint, jdoubleArray, jint, jint, jdouble);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_Video_CamShift_10
  (JNIEnv* env, jclass , jlong probImage_nativeObj, jint window_x, jint window_y, jint window_width, jint window_height, jdoubleArray window_out, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "video::CamShift_10()";
    try {
        LOGD("%s", method_name);
        Mat& probImage = *((Mat*)probImage_nativeObj);
        Rect window(window_x, window_y, window_width, window_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        RotatedRect _retval_ = cv::CamShift( probImage, window, criteria );
        jdoubleArray _da_retval_ = env->NewDoubleArray(5);  jdouble _tmp_retval_[5] = {_retval_.center.x, _retval_.center.y, _retval_.size.width, _retval_.size.height, _retval_.angle}; env->SetDoubleArrayRegion(_da_retval_, 0, 5, _tmp_retval_);  jdouble tmp_window[4] = {window.x, window.y, window.width, window.height}; env->SetDoubleArrayRegion(window_out, 0, 4, tmp_window);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int buildOpticalFlowPyramid(Mat img, vector_Mat& pyramid, Size winSize, int maxLevel, bool withDerivatives = true, int pyrBorder = BORDER_REFLECT_101, int derivBorder = BORDER_CONSTANT, bool tryReuseInputImage = true)
//

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jboolean, jint, jint, jboolean);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pyramid_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jboolean withDerivatives, jint pyrBorder, jint derivBorder, jboolean tryReuseInputImage)
{
    static const char method_name[] = "video::buildOpticalFlowPyramid_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> pyramid;
        Mat& pyramid_mat = *((Mat*)pyramid_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        int _retval_ = cv::buildOpticalFlowPyramid( img, pyramid, winSize, (int)maxLevel, (bool)withDerivatives, (int)pyrBorder, (int)derivBorder, (bool)tryReuseInputImage );
        vector_Mat_to_Mat( pyramid, pyramid_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pyramid_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel)
{
    static const char method_name[] = "video::buildOpticalFlowPyramid_11()";
    try {
        LOGD("%s", method_name);
        vector<Mat> pyramid;
        Mat& pyramid_mat = *((Mat*)pyramid_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        int _retval_ = cv::buildOpticalFlowPyramid( img, pyramid, winSize, (int)maxLevel );
        vector_Mat_to_Mat( pyramid, pyramid_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double calcGlobalOrientation(Mat orientation, Mat mask, Mat mhi, double timestamp, double duration)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_calcGlobalOrientation_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_calcGlobalOrientation_10
  (JNIEnv* env, jclass , jlong orientation_nativeObj, jlong mask_nativeObj, jlong mhi_nativeObj, jdouble timestamp, jdouble duration)
{
    static const char method_name[] = "video::calcGlobalOrientation_10()";
    try {
        LOGD("%s", method_name);
        Mat& orientation = *((Mat*)orientation_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        Mat& mhi = *((Mat*)mhi_nativeObj);
        double _retval_ = cv::calcGlobalOrientation( orientation, mask, mhi, (double)timestamp, (double)duration );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void calcMotionGradient(Mat mhi, Mat& mask, Mat& orientation, double delta1, double delta2, int apertureSize = 3)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcMotionGradient_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcMotionGradient_10
  (JNIEnv* env, jclass , jlong mhi_nativeObj, jlong mask_nativeObj, jlong orientation_nativeObj, jdouble delta1, jdouble delta2, jint apertureSize)
{
    static const char method_name[] = "video::calcMotionGradient_10()";
    try {
        LOGD("%s", method_name);
        Mat& mhi = *((Mat*)mhi_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        Mat& orientation = *((Mat*)orientation_nativeObj);
        cv::calcMotionGradient( mhi, mask, orientation, (double)delta1, (double)delta2, (int)apertureSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcMotionGradient_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcMotionGradient_11
  (JNIEnv* env, jclass , jlong mhi_nativeObj, jlong mask_nativeObj, jlong orientation_nativeObj, jdouble delta1, jdouble delta2)
{
    static const char method_name[] = "video::calcMotionGradient_11()";
    try {
        LOGD("%s", method_name);
        Mat& mhi = *((Mat*)mhi_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        Mat& orientation = *((Mat*)orientation_nativeObj);
        cv::calcMotionGradient( mhi, mask, orientation, (double)delta1, (double)delta2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void calcOpticalFlowFarneback(Mat prev, Mat next, Mat& flow, double pyr_scale, int levels, int winsize, int iterations, int poly_n, double poly_sigma, int flags)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowFarneback_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint, jint, jint, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowFarneback_10
  (JNIEnv* env, jclass , jlong prev_nativeObj, jlong next_nativeObj, jlong flow_nativeObj, jdouble pyr_scale, jint levels, jint winsize, jint iterations, jint poly_n, jdouble poly_sigma, jint flags)
{
    static const char method_name[] = "video::calcOpticalFlowFarneback_10()";
    try {
        LOGD("%s", method_name);
        Mat& prev = *((Mat*)prev_nativeObj);
        Mat& next = *((Mat*)next_nativeObj);
        Mat& flow = *((Mat*)flow_nativeObj);
        cv::calcOpticalFlowFarneback( prev, next, flow, (double)pyr_scale, (int)levels, (int)winsize, (int)iterations, (int)poly_n, (double)poly_sigma, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void calcOpticalFlowPyrLK(Mat prevImg, Mat nextImg, vector_Point2f prevPts, vector_Point2f& nextPts, vector_uchar& status, vector_float& err, Size winSize = Size(21,21), int maxLevel = 3, TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01), int flags = 0, double minEigThreshold = 1e-4)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jint, jint, jint, jdouble, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_10
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jint flags, jdouble minEigThreshold)
{
    static const char method_name[] = "video::calcOpticalFlowPyrLK_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err, winSize, (int)maxLevel, criteria, (int)flags, (double)minEigThreshold );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );  vector_uchar_to_Mat( status, status_mat );  vector_float_to_Mat( err, err_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_11
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel)
{
    static const char method_name[] = "video::calcOpticalFlowPyrLK_11()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err, winSize, (int)maxLevel );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );  vector_uchar_to_Mat( status, status_mat );  vector_float_to_Mat( err, err_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_12
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj)
{
    static const char method_name[] = "video::calcOpticalFlowPyrLK_12()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );  vector_uchar_to_Mat( status, status_mat );  vector_float_to_Mat( err, err_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void calcOpticalFlowSF(Mat from, Mat to, Mat flow, int layers, int averaging_block_size, int max_flow)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowSF_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowSF_10
  (JNIEnv* env, jclass , jlong from_nativeObj, jlong to_nativeObj, jlong flow_nativeObj, jint layers, jint averaging_block_size, jint max_flow)
{
    static const char method_name[] = "video::calcOpticalFlowSF_10()";
    try {
        LOGD("%s", method_name);
        Mat& from = *((Mat*)from_nativeObj);
        Mat& to = *((Mat*)to_nativeObj);
        Mat& flow = *((Mat*)flow_nativeObj);
        cv::calcOpticalFlowSF( from, to, flow, (int)layers, (int)averaging_block_size, (int)max_flow );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void calcOpticalFlowSF(Mat from, Mat to, Mat flow, int layers, int averaging_block_size, int max_flow, double sigma_dist, double sigma_color, int postprocess_window, double sigma_dist_fix, double sigma_color_fix, double occ_thr, int upscale_averaging_radius, double upscale_sigma_dist, double upscale_sigma_color, double speed_up_thr)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowSF_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jint, jdouble, jdouble, jint, jdouble, jdouble, jdouble, jint, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowSF_11
  (JNIEnv* env, jclass , jlong from_nativeObj, jlong to_nativeObj, jlong flow_nativeObj, jint layers, jint averaging_block_size, jint max_flow, jdouble sigma_dist, jdouble sigma_color, jint postprocess_window, jdouble sigma_dist_fix, jdouble sigma_color_fix, jdouble occ_thr, jint upscale_averaging_radius, jdouble upscale_sigma_dist, jdouble upscale_sigma_color, jdouble speed_up_thr)
{
    static const char method_name[] = "video::calcOpticalFlowSF_11()";
    try {
        LOGD("%s", method_name);
        Mat& from = *((Mat*)from_nativeObj);
        Mat& to = *((Mat*)to_nativeObj);
        Mat& flow = *((Mat*)flow_nativeObj);
        cv::calcOpticalFlowSF( from, to, flow, (int)layers, (int)averaging_block_size, (int)max_flow, (double)sigma_dist, (double)sigma_color, (int)postprocess_window, (double)sigma_dist_fix, (double)sigma_color_fix, (double)occ_thr, (int)upscale_averaging_radius, (double)upscale_sigma_dist, (double)upscale_sigma_color, (double)speed_up_thr );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  Mat estimateRigidTransform(Mat src, Mat dst, bool fullAffine)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_estimateRigidTransform_10 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_estimateRigidTransform_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jboolean fullAffine)
{
    static const char method_name[] = "video::estimateRigidTransform_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat _retval_ = cv::estimateRigidTransform( src, dst, (bool)fullAffine );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int meanShift(Mat probImage, Rect& window, TermCriteria criteria)
//

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_meanShift_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint, jdoubleArray, jint, jint, jdouble);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_meanShift_10
  (JNIEnv* env, jclass , jlong probImage_nativeObj, jint window_x, jint window_y, jint window_width, jint window_height, jdoubleArray window_out, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "video::meanShift_10()";
    try {
        LOGD("%s", method_name);
        Mat& probImage = *((Mat*)probImage_nativeObj);
        Rect window(window_x, window_y, window_width, window_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        int _retval_ = cv::meanShift( probImage, window, criteria );
        jdouble tmp_window[4] = {window.x, window.y, window.width, window.height}; env->SetDoubleArrayRegion(window_out, 0, 4, tmp_window);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void segmentMotion(Mat mhi, Mat& segmask, vector_Rect& boundingRects, double timestamp, double segThresh)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Video_segmentMotion_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_segmentMotion_10
  (JNIEnv* env, jclass , jlong mhi_nativeObj, jlong segmask_nativeObj, jlong boundingRects_mat_nativeObj, jdouble timestamp, jdouble segThresh)
{
    static const char method_name[] = "video::segmentMotion_10()";
    try {
        LOGD("%s", method_name);
        vector<Rect> boundingRects;
        Mat& boundingRects_mat = *((Mat*)boundingRects_mat_nativeObj);
        Mat& mhi = *((Mat*)mhi_nativeObj);
        Mat& segmask = *((Mat*)segmask_nativeObj);
        cv::segmentMotion( mhi, segmask, boundingRects, (double)timestamp, (double)segThresh );
        vector_Rect_to_Mat( boundingRects, boundingRects_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void updateMotionHistory(Mat silhouette, Mat& mhi, double timestamp, double duration)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Video_updateMotionHistory_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_updateMotionHistory_10
  (JNIEnv* env, jclass , jlong silhouette_nativeObj, jlong mhi_nativeObj, jdouble timestamp, jdouble duration)
{
    static const char method_name[] = "video::updateMotionHistory_10()";
    try {
        LOGD("%s", method_name);
        Mat& silhouette = *((Mat*)silhouette_nativeObj);
        Mat& mhi = *((Mat*)mhi_nativeObj);
        cv::updateMotionHistory( silhouette, mhi, (double)timestamp, (double)duration );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//   KalmanFilter::KalmanFilter()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::KalmanFilter_10()";
    try {
        LOGD("%s", method_name);
        
        KalmanFilter* _retval_ = new KalmanFilter(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   KalmanFilter::KalmanFilter(int dynamParams, int measureParams, int controlParams = 0, int type = CV_32F)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_11 (JNIEnv*, jclass, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_11
  (JNIEnv* env, jclass , jint dynamParams, jint measureParams, jint controlParams, jint type)
{
    static const char method_name[] = "video::KalmanFilter_11()";
    try {
        LOGD("%s", method_name);
        
        KalmanFilter* _retval_ = new KalmanFilter( (int)dynamParams, (int)measureParams, (int)controlParams, (int)type );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_12 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_12
  (JNIEnv* env, jclass , jint dynamParams, jint measureParams)
{
    static const char method_name[] = "video::KalmanFilter_12()";
    try {
        LOGD("%s", method_name);
        
        KalmanFilter* _retval_ = new KalmanFilter( (int)dynamParams, (int)measureParams );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat KalmanFilter::correct(Mat measurement)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_correct_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_correct_10
  (JNIEnv* env, jclass , jlong self, jlong measurement_nativeObj)
{
    static const char method_name[] = "video::correct_10()";
    try {
        LOGD("%s", method_name);
        KalmanFilter* me = (KalmanFilter*) self; //TODO: check for NULL
        Mat& measurement = *((Mat*)measurement_nativeObj);
        Mat _retval_ = me->correct( measurement );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat KalmanFilter::predict(Mat control = Mat())
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_10
  (JNIEnv* env, jclass , jlong self, jlong control_nativeObj)
{
    static const char method_name[] = "video::predict_10()";
    try {
        LOGD("%s", method_name);
        KalmanFilter* me = (KalmanFilter*) self; //TODO: check for NULL
        Mat& control = *((Mat*)control_nativeObj);
        Mat _retval_ = me->predict( control );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::predict_11()";
    try {
        LOGD("%s", method_name);
        KalmanFilter* me = (KalmanFilter*) self; //TODO: check for NULL
        Mat _retval_ = me->predict(  );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void KalmanFilter::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (KalmanFilter*) self;
}


//
//   BackgroundSubtractorMOG2::BackgroundSubtractorMOG2()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::BackgroundSubtractorMOG2_10()";
    try {
        LOGD("%s", method_name);
        
        BackgroundSubtractorMOG2* _retval_ = new BackgroundSubtractorMOG2(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   BackgroundSubtractorMOG2::BackgroundSubtractorMOG2(int history, float varThreshold, bool bShadowDetection = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_11 (JNIEnv*, jclass, jint, jfloat, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_11
  (JNIEnv* env, jclass , jint history, jfloat varThreshold, jboolean bShadowDetection)
{
    static const char method_name[] = "video::BackgroundSubtractorMOG2_11()";
    try {
        LOGD("%s", method_name);
        
        BackgroundSubtractorMOG2* _retval_ = new BackgroundSubtractorMOG2( (int)history, (float)varThreshold, (bool)bShadowDetection );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_12 (JNIEnv*, jclass, jint, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_12
  (JNIEnv* env, jclass , jint history, jfloat varThreshold)
{
    static const char method_name[] = "video::BackgroundSubtractorMOG2_12()";
    try {
        LOGD("%s", method_name);
        
        BackgroundSubtractorMOG2* _retval_ = new BackgroundSubtractorMOG2( (int)history, (float)varThreshold );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void BackgroundSubtractorMOG2::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (BackgroundSubtractorMOG2*) self;
}


//
//   BackgroundSubtractorMOG::BackgroundSubtractorMOG()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG_BackgroundSubtractorMOG_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG_BackgroundSubtractorMOG_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::BackgroundSubtractorMOG_10()";
    try {
        LOGD("%s", method_name);
        
        BackgroundSubtractorMOG* _retval_ = new BackgroundSubtractorMOG(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   BackgroundSubtractorMOG::BackgroundSubtractorMOG(int history, int nmixtures, double backgroundRatio, double noiseSigma = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG_BackgroundSubtractorMOG_11 (JNIEnv*, jclass, jint, jint, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG_BackgroundSubtractorMOG_11
  (JNIEnv* env, jclass , jint history, jint nmixtures, jdouble backgroundRatio, jdouble noiseSigma)
{
    static const char method_name[] = "video::BackgroundSubtractorMOG_11()";
    try {
        LOGD("%s", method_name);
        
        BackgroundSubtractorMOG* _retval_ = new BackgroundSubtractorMOG( (int)history, (int)nmixtures, (double)backgroundRatio, (double)noiseSigma );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG_BackgroundSubtractorMOG_12 (JNIEnv*, jclass, jint, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_BackgroundSubtractorMOG_BackgroundSubtractorMOG_12
  (JNIEnv* env, jclass , jint history, jint nmixtures, jdouble backgroundRatio)
{
    static const char method_name[] = "video::BackgroundSubtractorMOG_12()";
    try {
        LOGD("%s", method_name);
        
        BackgroundSubtractorMOG* _retval_ = new BackgroundSubtractorMOG( (int)history, (int)nmixtures, (double)backgroundRatio );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void BackgroundSubtractorMOG::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (BackgroundSubtractorMOG*) self;
}


} // extern "C"

#endif // HAVE_OPENCV_VIDEO
