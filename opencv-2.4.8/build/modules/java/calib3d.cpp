
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.calib3d"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_CALIB3D
#include "opencv2/calib3d/calib3d.hpp"

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
//   StereoSGBM::StereoSGBM()
//

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoSGBM_StereoSGBM_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoSGBM_StereoSGBM_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "calib3d::StereoSGBM_10()";
    try {
        LOGD("%s", method_name);
        
        StereoSGBM* _retval_ = new StereoSGBM(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   StereoSGBM::StereoSGBM(int minDisparity, int numDisparities, int SADWindowSize, int P1 = 0, int P2 = 0, int disp12MaxDiff = 0, int preFilterCap = 0, int uniquenessRatio = 0, int speckleWindowSize = 0, int speckleRange = 0, bool fullDP = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoSGBM_StereoSGBM_11 (JNIEnv*, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoSGBM_StereoSGBM_11
  (JNIEnv* env, jclass , jint minDisparity, jint numDisparities, jint SADWindowSize, jint P1, jint P2, jint disp12MaxDiff, jint preFilterCap, jint uniquenessRatio, jint speckleWindowSize, jint speckleRange, jboolean fullDP)
{
    static const char method_name[] = "calib3d::StereoSGBM_11()";
    try {
        LOGD("%s", method_name);
        
        StereoSGBM* _retval_ = new StereoSGBM( (int)minDisparity, (int)numDisparities, (int)SADWindowSize, (int)P1, (int)P2, (int)disp12MaxDiff, (int)preFilterCap, (int)uniquenessRatio, (int)speckleWindowSize, (int)speckleRange, (bool)fullDP );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoSGBM_StereoSGBM_12 (JNIEnv*, jclass, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoSGBM_StereoSGBM_12
  (JNIEnv* env, jclass , jint minDisparity, jint numDisparities, jint SADWindowSize)
{
    static const char method_name[] = "calib3d::StereoSGBM_12()";
    try {
        LOGD("%s", method_name);
        
        StereoSGBM* _retval_ = new StereoSGBM( (int)minDisparity, (int)numDisparities, (int)SADWindowSize );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void StereoSGBM::operator ()(Mat left, Mat right, Mat& disp)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_compute_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_compute_10
  (JNIEnv* env, jclass , jlong self, jlong left_nativeObj, jlong right_nativeObj, jlong disp_nativeObj)
{
    static const char method_name[] = "calib3d::compute_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        Mat& left = *((Mat*)left_nativeObj);
        Mat& right = *((Mat*)right_nativeObj);
        Mat& disp = *((Mat*)disp_nativeObj);
        me->operator ()( left, right, disp );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::minDisparity
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1minDisparity_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1minDisparity_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1minDisparity_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->minDisparity;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::minDisparity
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1minDisparity_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1minDisparity_10
  (JNIEnv* env, jclass , jlong self, jint minDisparity)
{
    static const char method_name[] = "calib3d::set_1minDisparity_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->minDisparity = ( (int)minDisparity );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::numberOfDisparities
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1numberOfDisparities_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1numberOfDisparities_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1numberOfDisparities_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->numberOfDisparities;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::numberOfDisparities
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1numberOfDisparities_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1numberOfDisparities_10
  (JNIEnv* env, jclass , jlong self, jint numberOfDisparities)
{
    static const char method_name[] = "calib3d::set_1numberOfDisparities_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->numberOfDisparities = ( (int)numberOfDisparities );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::SADWindowSize
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1SADWindowSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1SADWindowSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1SADWindowSize_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->SADWindowSize;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::SADWindowSize
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1SADWindowSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1SADWindowSize_10
  (JNIEnv* env, jclass , jlong self, jint SADWindowSize)
{
    static const char method_name[] = "calib3d::set_1SADWindowSize_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->SADWindowSize = ( (int)SADWindowSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::preFilterCap
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1preFilterCap_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1preFilterCap_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1preFilterCap_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->preFilterCap;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::preFilterCap
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1preFilterCap_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1preFilterCap_10
  (JNIEnv* env, jclass , jlong self, jint preFilterCap)
{
    static const char method_name[] = "calib3d::set_1preFilterCap_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->preFilterCap = ( (int)preFilterCap );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::uniquenessRatio
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1uniquenessRatio_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1uniquenessRatio_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1uniquenessRatio_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->uniquenessRatio;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::uniquenessRatio
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1uniquenessRatio_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1uniquenessRatio_10
  (JNIEnv* env, jclass , jlong self, jint uniquenessRatio)
{
    static const char method_name[] = "calib3d::set_1uniquenessRatio_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->uniquenessRatio = ( (int)uniquenessRatio );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::P1
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1P1_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1P1_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1P1_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->P1;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::P1
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1P1_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1P1_10
  (JNIEnv* env, jclass , jlong self, jint P1)
{
    static const char method_name[] = "calib3d::set_1P1_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->P1 = ( (int)P1 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::P2
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1P2_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1P2_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1P2_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->P2;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::P2
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1P2_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1P2_10
  (JNIEnv* env, jclass , jlong self, jint P2)
{
    static const char method_name[] = "calib3d::set_1P2_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->P2 = ( (int)P2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::speckleWindowSize
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1speckleWindowSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1speckleWindowSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1speckleWindowSize_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->speckleWindowSize;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::speckleWindowSize
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1speckleWindowSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1speckleWindowSize_10
  (JNIEnv* env, jclass , jlong self, jint speckleWindowSize)
{
    static const char method_name[] = "calib3d::set_1speckleWindowSize_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->speckleWindowSize = ( (int)speckleWindowSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::speckleRange
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1speckleRange_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1speckleRange_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1speckleRange_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->speckleRange;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::speckleRange
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1speckleRange_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1speckleRange_10
  (JNIEnv* env, jclass , jlong self, jint speckleRange)
{
    static const char method_name[] = "calib3d::set_1speckleRange_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->speckleRange = ( (int)speckleRange );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoSGBM::disp12MaxDiff
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1disp12MaxDiff_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1disp12MaxDiff_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1disp12MaxDiff_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        int _retval_ = me->disp12MaxDiff;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::disp12MaxDiff
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1disp12MaxDiff_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1disp12MaxDiff_10
  (JNIEnv* env, jclass , jlong self, jint disp12MaxDiff)
{
    static const char method_name[] = "calib3d::set_1disp12MaxDiff_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->disp12MaxDiff = ( (int)disp12MaxDiff );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// bool StereoSGBM::fullDP
//

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1fullDP_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_StereoSGBM_get_1fullDP_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "calib3d::get_1fullDP_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        bool _retval_ = me->fullDP;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoSGBM::fullDP
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1fullDP_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_set_1fullDP_10
  (JNIEnv* env, jclass , jlong self, jboolean fullDP)
{
    static const char method_name[] = "calib3d::set_1fullDP_10()";
    try {
        LOGD("%s", method_name);
        StereoSGBM* me = (StereoSGBM*) self; //TODO: check for NULL
        me->fullDP = ( (bool)fullDP );
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
//  static void StereoSGBM::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoSGBM_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (StereoSGBM*) self;
}


//
//   StereoBM::StereoBM()
//

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoBM_StereoBM_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoBM_StereoBM_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "calib3d::StereoBM_10()";
    try {
        LOGD("%s", method_name);
        
        StereoBM* _retval_ = new StereoBM(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   StereoBM::StereoBM(int preset, int ndisparities = 0, int SADWindowSize = 21)
//

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoBM_StereoBM_11 (JNIEnv*, jclass, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoBM_StereoBM_11
  (JNIEnv* env, jclass , jint preset, jint ndisparities, jint SADWindowSize)
{
    static const char method_name[] = "calib3d::StereoBM_11()";
    try {
        LOGD("%s", method_name);
        
        StereoBM* _retval_ = new StereoBM( (int)preset, (int)ndisparities, (int)SADWindowSize );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoBM_StereoBM_12 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_StereoBM_StereoBM_12
  (JNIEnv* env, jclass , jint preset)
{
    static const char method_name[] = "calib3d::StereoBM_12()";
    try {
        LOGD("%s", method_name);
        
        StereoBM* _retval_ = new StereoBM( (int)preset );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void StereoBM::operator ()(Mat left, Mat right, Mat& disparity, int disptype = CV_16S)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoBM_compute_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoBM_compute_10
  (JNIEnv* env, jclass , jlong self, jlong left_nativeObj, jlong right_nativeObj, jlong disparity_nativeObj, jint disptype)
{
    static const char method_name[] = "calib3d::compute_10()";
    try {
        LOGD("%s", method_name);
        StereoBM* me = (StereoBM*) self; //TODO: check for NULL
        Mat& left = *((Mat*)left_nativeObj);
        Mat& right = *((Mat*)right_nativeObj);
        Mat& disparity = *((Mat*)disparity_nativeObj);
        me->operator ()( left, right, disparity, (int)disptype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoBM_compute_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoBM_compute_11
  (JNIEnv* env, jclass , jlong self, jlong left_nativeObj, jlong right_nativeObj, jlong disparity_nativeObj)
{
    static const char method_name[] = "calib3d::compute_11()";
    try {
        LOGD("%s", method_name);
        StereoBM* me = (StereoBM*) self; //TODO: check for NULL
        Mat& left = *((Mat*)left_nativeObj);
        Mat& right = *((Mat*)right_nativeObj);
        Mat& disparity = *((Mat*)disparity_nativeObj);
        me->operator ()( left, right, disparity );
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
//  static void StereoBM::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoBM_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_StereoBM_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (StereoBM*) self;
}


//
//  Vec3d RQDecomp3x3(Mat src, Mat& mtxR, Mat& mtxQ, Mat& Qx = Mat(), Mat& Qy = Mat(), Mat& Qz = Mat())
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_calib3d_Calib3d_RQDecomp3x3_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_calib3d_Calib3d_RQDecomp3x3_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong mtxR_nativeObj, jlong mtxQ_nativeObj, jlong Qx_nativeObj, jlong Qy_nativeObj, jlong Qz_nativeObj)
{
    static const char method_name[] = "calib3d::RQDecomp3x3_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& mtxR = *((Mat*)mtxR_nativeObj);
        Mat& mtxQ = *((Mat*)mtxQ_nativeObj);
        Mat& Qx = *((Mat*)Qx_nativeObj);
        Mat& Qy = *((Mat*)Qy_nativeObj);
        Mat& Qz = *((Mat*)Qz_nativeObj);
        Vec3d _retval_ = cv::RQDecomp3x3( src, mtxR, mtxQ, Qx, Qy, Qz );
        jdoubleArray _da_retval_ = env->NewDoubleArray(3);  jdouble _tmp_retval_[3] = {_retval_.val[0], _retval_.val[1], _retval_.val[2]}; env->SetDoubleArrayRegion(_da_retval_, 0, 3, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdoubleArray JNICALL Java_org_opencv_calib3d_Calib3d_RQDecomp3x3_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_calib3d_Calib3d_RQDecomp3x3_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong mtxR_nativeObj, jlong mtxQ_nativeObj)
{
    static const char method_name[] = "calib3d::RQDecomp3x3_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& mtxR = *((Mat*)mtxR_nativeObj);
        Mat& mtxQ = *((Mat*)mtxQ_nativeObj);
        Vec3d _retval_ = cv::RQDecomp3x3( src, mtxR, mtxQ );
        jdoubleArray _da_retval_ = env->NewDoubleArray(3);  jdouble _tmp_retval_[3] = {_retval_.val[0], _retval_.val[1], _retval_.val[2]}; env->SetDoubleArrayRegion(_da_retval_, 0, 3, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void Rodrigues(Mat src, Mat& dst, Mat& jacobian = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_Rodrigues_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_Rodrigues_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong jacobian_nativeObj)
{
    static const char method_name[] = "calib3d::Rodrigues_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& jacobian = *((Mat*)jacobian_nativeObj);
        cv::Rodrigues( src, dst, jacobian );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_Rodrigues_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_Rodrigues_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "calib3d::Rodrigues_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Rodrigues( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double calibrateCamera(vector_Mat objectPoints, vector_Mat imagePoints, Size imageSize, Mat& cameraMatrix, Mat& distCoeffs, vector_Mat& rvecs, vector_Mat& tvecs, int flags = 0, TermCriteria criteria = TermCriteria( TermCriteria::COUNT+TermCriteria::EPS, 30, DBL_EPSILON))
//

JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_calibrateCamera_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jint, jint, jint, jdouble);

JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_calibrateCamera_10
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints_mat_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jint flags, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "calib3d::calibrateCamera_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Mat( objectPoints_mat, objectPoints );
        vector<Mat> imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat_to_vector_Mat( imagePoints_mat, imagePoints );
        vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        double _retval_ = cv::calibrateCamera( objectPoints, imagePoints, imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, (int)flags, criteria );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_calibrateCamera_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_calibrateCamera_11
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints_mat_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jint flags)
{
    static const char method_name[] = "calib3d::calibrateCamera_11()";
    try {
        LOGD("%s", method_name);
        vector<Mat> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Mat( objectPoints_mat, objectPoints );
        vector<Mat> imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat_to_vector_Mat( imagePoints_mat, imagePoints );
        vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        double _retval_ = cv::calibrateCamera( objectPoints, imagePoints, imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, (int)flags );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_calibrateCamera_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_calibrateCamera_12
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints_mat_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj)
{
    static const char method_name[] = "calib3d::calibrateCamera_12()";
    try {
        LOGD("%s", method_name);
        vector<Mat> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Mat( objectPoints_mat, objectPoints );
        vector<Mat> imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat_to_vector_Mat( imagePoints_mat, imagePoints );
        vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        double _retval_ = cv::calibrateCamera( objectPoints, imagePoints, imageSize, cameraMatrix, distCoeffs, rvecs, tvecs );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void calibrationMatrixValues(Mat cameraMatrix, Size imageSize, double apertureWidth, double apertureHeight, double& fovx, double& fovy, double& focalLength, Point2d& principalPoint, double& aspectRatio)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_calibrationMatrixValues_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_calibrationMatrixValues_10
  (JNIEnv* env, jclass , jlong cameraMatrix_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jdouble apertureWidth, jdouble apertureHeight, jdoubleArray fovx_out, jdoubleArray fovy_out, jdoubleArray focalLength_out, jdoubleArray principalPoint_out, jdoubleArray aspectRatio_out)
{
    static const char method_name[] = "calib3d::calibrationMatrixValues_10()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        double fovx;
        double fovy;
        double focalLength;
        Point2d principalPoint;
        double aspectRatio;
        cv::calibrationMatrixValues( cameraMatrix, imageSize, (double)apertureWidth, (double)apertureHeight, fovx, fovy, focalLength, principalPoint, aspectRatio );
        jdouble tmp_fovx[1] = {fovx}; env->SetDoubleArrayRegion(fovx_out, 0, 1, tmp_fovx);  jdouble tmp_fovy[1] = {fovy}; env->SetDoubleArrayRegion(fovy_out, 0, 1, tmp_fovy);  jdouble tmp_focalLength[1] = {focalLength}; env->SetDoubleArrayRegion(focalLength_out, 0, 1, tmp_focalLength);  jdouble tmp_principalPoint[2] = {principalPoint.x, principalPoint.y}; env->SetDoubleArrayRegion(principalPoint_out, 0, 2, tmp_principalPoint);  jdouble tmp_aspectRatio[1] = {aspectRatio}; env->SetDoubleArrayRegion(aspectRatio_out, 0, 1, tmp_aspectRatio);
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void composeRT(Mat rvec1, Mat tvec1, Mat rvec2, Mat tvec2, Mat& rvec3, Mat& tvec3, Mat& dr3dr1 = Mat(), Mat& dr3dt1 = Mat(), Mat& dr3dr2 = Mat(), Mat& dr3dt2 = Mat(), Mat& dt3dr1 = Mat(), Mat& dt3dt1 = Mat(), Mat& dt3dr2 = Mat(), Mat& dt3dt2 = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_composeRT_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_composeRT_10
  (JNIEnv* env, jclass , jlong rvec1_nativeObj, jlong tvec1_nativeObj, jlong rvec2_nativeObj, jlong tvec2_nativeObj, jlong rvec3_nativeObj, jlong tvec3_nativeObj, jlong dr3dr1_nativeObj, jlong dr3dt1_nativeObj, jlong dr3dr2_nativeObj, jlong dr3dt2_nativeObj, jlong dt3dr1_nativeObj, jlong dt3dt1_nativeObj, jlong dt3dr2_nativeObj, jlong dt3dt2_nativeObj)
{
    static const char method_name[] = "calib3d::composeRT_10()";
    try {
        LOGD("%s", method_name);
        Mat& rvec1 = *((Mat*)rvec1_nativeObj);
        Mat& tvec1 = *((Mat*)tvec1_nativeObj);
        Mat& rvec2 = *((Mat*)rvec2_nativeObj);
        Mat& tvec2 = *((Mat*)tvec2_nativeObj);
        Mat& rvec3 = *((Mat*)rvec3_nativeObj);
        Mat& tvec3 = *((Mat*)tvec3_nativeObj);
        Mat& dr3dr1 = *((Mat*)dr3dr1_nativeObj);
        Mat& dr3dt1 = *((Mat*)dr3dt1_nativeObj);
        Mat& dr3dr2 = *((Mat*)dr3dr2_nativeObj);
        Mat& dr3dt2 = *((Mat*)dr3dt2_nativeObj);
        Mat& dt3dr1 = *((Mat*)dt3dr1_nativeObj);
        Mat& dt3dt1 = *((Mat*)dt3dt1_nativeObj);
        Mat& dt3dr2 = *((Mat*)dt3dr2_nativeObj);
        Mat& dt3dt2 = *((Mat*)dt3dt2_nativeObj);
        cv::composeRT( rvec1, tvec1, rvec2, tvec2, rvec3, tvec3, dr3dr1, dr3dt1, dr3dr2, dr3dt2, dt3dr1, dt3dt1, dt3dr2, dt3dt2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_composeRT_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_composeRT_11
  (JNIEnv* env, jclass , jlong rvec1_nativeObj, jlong tvec1_nativeObj, jlong rvec2_nativeObj, jlong tvec2_nativeObj, jlong rvec3_nativeObj, jlong tvec3_nativeObj)
{
    static const char method_name[] = "calib3d::composeRT_11()";
    try {
        LOGD("%s", method_name);
        Mat& rvec1 = *((Mat*)rvec1_nativeObj);
        Mat& tvec1 = *((Mat*)tvec1_nativeObj);
        Mat& rvec2 = *((Mat*)rvec2_nativeObj);
        Mat& tvec2 = *((Mat*)tvec2_nativeObj);
        Mat& rvec3 = *((Mat*)rvec3_nativeObj);
        Mat& tvec3 = *((Mat*)tvec3_nativeObj);
        cv::composeRT( rvec1, tvec1, rvec2, tvec2, rvec3, tvec3 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void computeCorrespondEpilines(Mat points, int whichImage, Mat F, Mat& lines)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_computeCorrespondEpilines_10 (JNIEnv*, jclass, jlong, jint, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_computeCorrespondEpilines_10
  (JNIEnv* env, jclass , jlong points_nativeObj, jint whichImage, jlong F_nativeObj, jlong lines_nativeObj)
{
    static const char method_name[] = "calib3d::computeCorrespondEpilines_10()";
    try {
        LOGD("%s", method_name);
        Mat& points = *((Mat*)points_nativeObj);
        Mat& F = *((Mat*)F_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        cv::computeCorrespondEpilines( points, (int)whichImage, F, lines );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void convertPointsFromHomogeneous(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_convertPointsFromHomogeneous_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_convertPointsFromHomogeneous_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "calib3d::convertPointsFromHomogeneous_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::convertPointsFromHomogeneous( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void convertPointsToHomogeneous(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_convertPointsToHomogeneous_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_convertPointsToHomogeneous_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "calib3d::convertPointsToHomogeneous_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::convertPointsToHomogeneous( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void correctMatches(Mat F, Mat points1, Mat points2, Mat& newPoints1, Mat& newPoints2)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_correctMatches_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_correctMatches_10
  (JNIEnv* env, jclass , jlong F_nativeObj, jlong points1_nativeObj, jlong points2_nativeObj, jlong newPoints1_nativeObj, jlong newPoints2_nativeObj)
{
    static const char method_name[] = "calib3d::correctMatches_10()";
    try {
        LOGD("%s", method_name);
        Mat& F = *((Mat*)F_nativeObj);
        Mat& points1 = *((Mat*)points1_nativeObj);
        Mat& points2 = *((Mat*)points2_nativeObj);
        Mat& newPoints1 = *((Mat*)newPoints1_nativeObj);
        Mat& newPoints2 = *((Mat*)newPoints2_nativeObj);
        cv::correctMatches( F, points1, points2, newPoints1, newPoints2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void decomposeProjectionMatrix(Mat projMatrix, Mat& cameraMatrix, Mat& rotMatrix, Mat& transVect, Mat& rotMatrixX = Mat(), Mat& rotMatrixY = Mat(), Mat& rotMatrixZ = Mat(), Mat& eulerAngles = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_decomposeProjectionMatrix_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_decomposeProjectionMatrix_10
  (JNIEnv* env, jclass , jlong projMatrix_nativeObj, jlong cameraMatrix_nativeObj, jlong rotMatrix_nativeObj, jlong transVect_nativeObj, jlong rotMatrixX_nativeObj, jlong rotMatrixY_nativeObj, jlong rotMatrixZ_nativeObj, jlong eulerAngles_nativeObj)
{
    static const char method_name[] = "calib3d::decomposeProjectionMatrix_10()";
    try {
        LOGD("%s", method_name);
        Mat& projMatrix = *((Mat*)projMatrix_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& rotMatrix = *((Mat*)rotMatrix_nativeObj);
        Mat& transVect = *((Mat*)transVect_nativeObj);
        Mat& rotMatrixX = *((Mat*)rotMatrixX_nativeObj);
        Mat& rotMatrixY = *((Mat*)rotMatrixY_nativeObj);
        Mat& rotMatrixZ = *((Mat*)rotMatrixZ_nativeObj);
        Mat& eulerAngles = *((Mat*)eulerAngles_nativeObj);
        cv::decomposeProjectionMatrix( projMatrix, cameraMatrix, rotMatrix, transVect, rotMatrixX, rotMatrixY, rotMatrixZ, eulerAngles );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_decomposeProjectionMatrix_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_decomposeProjectionMatrix_11
  (JNIEnv* env, jclass , jlong projMatrix_nativeObj, jlong cameraMatrix_nativeObj, jlong rotMatrix_nativeObj, jlong transVect_nativeObj)
{
    static const char method_name[] = "calib3d::decomposeProjectionMatrix_11()";
    try {
        LOGD("%s", method_name);
        Mat& projMatrix = *((Mat*)projMatrix_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& rotMatrix = *((Mat*)rotMatrix_nativeObj);
        Mat& transVect = *((Mat*)transVect_nativeObj);
        cv::decomposeProjectionMatrix( projMatrix, cameraMatrix, rotMatrix, transVect );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawChessboardCorners(Mat& image, Size patternSize, vector_Point2f corners, bool patternWasFound)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_drawChessboardCorners_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_drawChessboardCorners_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble patternSize_width, jdouble patternSize_height, jlong corners_mat_nativeObj, jboolean patternWasFound)
{
    static const char method_name[] = "calib3d::drawChessboardCorners_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Point2f( corners_mat, corners );
        Mat& image = *((Mat*)image_nativeObj);
        Size patternSize((int)patternSize_width, (int)patternSize_height);
        cv::drawChessboardCorners( image, patternSize, corners, (bool)patternWasFound );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  int estimateAffine3D(Mat src, Mat dst, Mat& out, Mat& inliers, double ransacThreshold = 3, double confidence = 0.99)
//

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_Calib3d_estimateAffine3D_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_Calib3d_estimateAffine3D_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong out_nativeObj, jlong inliers_nativeObj, jdouble ransacThreshold, jdouble confidence)
{
    static const char method_name[] = "calib3d::estimateAffine3D_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& out = *((Mat*)out_nativeObj);
        Mat& inliers = *((Mat*)inliers_nativeObj);
        int _retval_ = cv::estimateAffine3D( src, dst, out, inliers, (double)ransacThreshold, (double)confidence );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_calib3d_Calib3d_estimateAffine3D_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_calib3d_Calib3d_estimateAffine3D_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong out_nativeObj, jlong inliers_nativeObj)
{
    static const char method_name[] = "calib3d::estimateAffine3D_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& out = *((Mat*)out_nativeObj);
        Mat& inliers = *((Mat*)inliers_nativeObj);
        int _retval_ = cv::estimateAffine3D( src, dst, out, inliers );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void filterSpeckles(Mat& img, double newVal, int maxSpeckleSize, double maxDiff, Mat& buf = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_filterSpeckles_10 (JNIEnv*, jclass, jlong, jdouble, jint, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_filterSpeckles_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble newVal, jint maxSpeckleSize, jdouble maxDiff, jlong buf_nativeObj)
{
    static const char method_name[] = "calib3d::filterSpeckles_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Mat& buf = *((Mat*)buf_nativeObj);
        cv::filterSpeckles( img, (double)newVal, (int)maxSpeckleSize, (double)maxDiff, buf );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_filterSpeckles_11 (JNIEnv*, jclass, jlong, jdouble, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_filterSpeckles_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jdouble newVal, jint maxSpeckleSize, jdouble maxDiff)
{
    static const char method_name[] = "calib3d::filterSpeckles_11()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        cv::filterSpeckles( img, (double)newVal, (int)maxSpeckleSize, (double)maxDiff );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool findChessboardCorners(Mat image, Size patternSize, vector_Point2f& corners, int flags = CALIB_CB_ADAPTIVE_THRESH+CALIB_CB_NORMALIZE_IMAGE)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_findChessboardCorners_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_findChessboardCorners_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble patternSize_width, jdouble patternSize_height, jlong corners_mat_nativeObj, jint flags)
{
    static const char method_name[] = "calib3d::findChessboardCorners_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Size patternSize((int)patternSize_width, (int)patternSize_height);
        bool _retval_ = cv::findChessboardCorners( image, patternSize, corners, (int)flags );
        vector_Point2f_to_Mat( corners, corners_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_findChessboardCorners_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_findChessboardCorners_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble patternSize_width, jdouble patternSize_height, jlong corners_mat_nativeObj)
{
    static const char method_name[] = "calib3d::findChessboardCorners_11()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Size patternSize((int)patternSize_width, (int)patternSize_height);
        bool _retval_ = cv::findChessboardCorners( image, patternSize, corners );
        vector_Point2f_to_Mat( corners, corners_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool findCirclesGridDefault(Mat image, Size patternSize, Mat& centers, int flags = CALIB_CB_SYMMETRIC_GRID)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_findCirclesGridDefault_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_findCirclesGridDefault_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble patternSize_width, jdouble patternSize_height, jlong centers_nativeObj, jint flags)
{
    static const char method_name[] = "calib3d::findCirclesGridDefault_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size patternSize((int)patternSize_width, (int)patternSize_height);
        Mat& centers = *((Mat*)centers_nativeObj);
        bool _retval_ = cv::findCirclesGridDefault( image, patternSize, centers, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_findCirclesGridDefault_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_findCirclesGridDefault_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble patternSize_width, jdouble patternSize_height, jlong centers_nativeObj)
{
    static const char method_name[] = "calib3d::findCirclesGridDefault_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size patternSize((int)patternSize_width, (int)patternSize_height);
        Mat& centers = *((Mat*)centers_nativeObj);
        bool _retval_ = cv::findCirclesGridDefault( image, patternSize, centers );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat findFundamentalMat(vector_Point2f points1, vector_Point2f points2, int method = FM_RANSAC, double param1 = 3., double param2 = 0.99, Mat& mask = Mat())
//

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findFundamentalMat_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findFundamentalMat_10
  (JNIEnv* env, jclass , jlong points1_mat_nativeObj, jlong points2_mat_nativeObj, jint method, jdouble param1, jdouble param2, jlong mask_nativeObj)
{
    static const char method_name[] = "calib3d::findFundamentalMat_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> points1;
        Mat& points1_mat = *((Mat*)points1_mat_nativeObj);
        Mat_to_vector_Point2f( points1_mat, points1 );
        vector<Point2f> points2;
        Mat& points2_mat = *((Mat*)points2_mat_nativeObj);
        Mat_to_vector_Point2f( points2_mat, points2 );
        Mat& mask = *((Mat*)mask_nativeObj);
        Mat _retval_ = cv::findFundamentalMat( points1, points2, (int)method, (double)param1, (double)param2, mask );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findFundamentalMat_11 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findFundamentalMat_11
  (JNIEnv* env, jclass , jlong points1_mat_nativeObj, jlong points2_mat_nativeObj, jint method, jdouble param1, jdouble param2)
{
    static const char method_name[] = "calib3d::findFundamentalMat_11()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> points1;
        Mat& points1_mat = *((Mat*)points1_mat_nativeObj);
        Mat_to_vector_Point2f( points1_mat, points1 );
        vector<Point2f> points2;
        Mat& points2_mat = *((Mat*)points2_mat_nativeObj);
        Mat_to_vector_Point2f( points2_mat, points2 );
        Mat _retval_ = cv::findFundamentalMat( points1, points2, (int)method, (double)param1, (double)param2 );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findFundamentalMat_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findFundamentalMat_12
  (JNIEnv* env, jclass , jlong points1_mat_nativeObj, jlong points2_mat_nativeObj)
{
    static const char method_name[] = "calib3d::findFundamentalMat_12()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> points1;
        Mat& points1_mat = *((Mat*)points1_mat_nativeObj);
        Mat_to_vector_Point2f( points1_mat, points1 );
        vector<Point2f> points2;
        Mat& points2_mat = *((Mat*)points2_mat_nativeObj);
        Mat_to_vector_Point2f( points2_mat, points2 );
        Mat _retval_ = cv::findFundamentalMat( points1, points2 );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat findHomography(vector_Point2f srcPoints, vector_Point2f dstPoints, int method = 0, double ransacReprojThreshold = 3, Mat& mask = Mat())
//

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findHomography_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findHomography_10
  (JNIEnv* env, jclass , jlong srcPoints_mat_nativeObj, jlong dstPoints_mat_nativeObj, jint method, jdouble ransacReprojThreshold, jlong mask_nativeObj)
{
    static const char method_name[] = "calib3d::findHomography_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> srcPoints;
        Mat& srcPoints_mat = *((Mat*)srcPoints_mat_nativeObj);
        Mat_to_vector_Point2f( srcPoints_mat, srcPoints );
        vector<Point2f> dstPoints;
        Mat& dstPoints_mat = *((Mat*)dstPoints_mat_nativeObj);
        Mat_to_vector_Point2f( dstPoints_mat, dstPoints );
        Mat& mask = *((Mat*)mask_nativeObj);
        Mat _retval_ = cv::findHomography( srcPoints, dstPoints, (int)method, (double)ransacReprojThreshold, mask );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findHomography_11 (JNIEnv*, jclass, jlong, jlong, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findHomography_11
  (JNIEnv* env, jclass , jlong srcPoints_mat_nativeObj, jlong dstPoints_mat_nativeObj, jint method, jdouble ransacReprojThreshold)
{
    static const char method_name[] = "calib3d::findHomography_11()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> srcPoints;
        Mat& srcPoints_mat = *((Mat*)srcPoints_mat_nativeObj);
        Mat_to_vector_Point2f( srcPoints_mat, srcPoints );
        vector<Point2f> dstPoints;
        Mat& dstPoints_mat = *((Mat*)dstPoints_mat_nativeObj);
        Mat_to_vector_Point2f( dstPoints_mat, dstPoints );
        Mat _retval_ = cv::findHomography( srcPoints, dstPoints, (int)method, (double)ransacReprojThreshold );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findHomography_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_findHomography_12
  (JNIEnv* env, jclass , jlong srcPoints_mat_nativeObj, jlong dstPoints_mat_nativeObj)
{
    static const char method_name[] = "calib3d::findHomography_12()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> srcPoints;
        Mat& srcPoints_mat = *((Mat*)srcPoints_mat_nativeObj);
        Mat_to_vector_Point2f( srcPoints_mat, srcPoints );
        vector<Point2f> dstPoints;
        Mat& dstPoints_mat = *((Mat*)dstPoints_mat_nativeObj);
        Mat_to_vector_Point2f( dstPoints_mat, dstPoints );
        Mat _retval_ = cv::findHomography( srcPoints, dstPoints );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getOptimalNewCameraMatrix(Mat cameraMatrix, Mat distCoeffs, Size imageSize, double alpha, Size newImgSize = Size(), Rect* validPixROI = 0, bool centerPrincipalPoint = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_getOptimalNewCameraMatrix_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdoubleArray, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_getOptimalNewCameraMatrix_10
  (JNIEnv* env, jclass , jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jdouble alpha, jdouble newImgSize_width, jdouble newImgSize_height, jdoubleArray validPixROI_out, jboolean centerPrincipalPoint)
{
    static const char method_name[] = "calib3d::getOptimalNewCameraMatrix_10()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Size newImgSize((int)newImgSize_width, (int)newImgSize_height);
        Rect validPixROI;
        Mat _retval_ = cv::getOptimalNewCameraMatrix( cameraMatrix, distCoeffs, imageSize, (double)alpha, newImgSize, &validPixROI, (bool)centerPrincipalPoint );
        jdouble tmp_validPixROI[4] = {validPixROI.x, validPixROI.y, validPixROI.width, validPixROI.height}; env->SetDoubleArrayRegion(validPixROI_out, 0, 4, tmp_validPixROI);
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_getOptimalNewCameraMatrix_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_getOptimalNewCameraMatrix_11
  (JNIEnv* env, jclass , jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jdouble alpha)
{
    static const char method_name[] = "calib3d::getOptimalNewCameraMatrix_11()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat _retval_ = cv::getOptimalNewCameraMatrix( cameraMatrix, distCoeffs, imageSize, (double)alpha );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Rect getValidDisparityROI(Rect roi1, Rect roi2, int minDisparity, int numberOfDisparities, int SADWindowSize)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_calib3d_Calib3d_getValidDisparityROI_10 (JNIEnv*, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_calib3d_Calib3d_getValidDisparityROI_10
  (JNIEnv* env, jclass , jint roi1_x, jint roi1_y, jint roi1_width, jint roi1_height, jint roi2_x, jint roi2_y, jint roi2_width, jint roi2_height, jint minDisparity, jint numberOfDisparities, jint SADWindowSize)
{
    static const char method_name[] = "calib3d::getValidDisparityROI_10()";
    try {
        LOGD("%s", method_name);
        Rect roi1(roi1_x, roi1_y, roi1_width, roi1_height);
        Rect roi2(roi2_x, roi2_y, roi2_width, roi2_height);
        Rect _retval_ = cv::getValidDisparityROI( roi1, roi2, (int)minDisparity, (int)numberOfDisparities, (int)SADWindowSize );
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {_retval_.x, _retval_.y, _retval_.width, _retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat initCameraMatrix2D(vector_vector_Point3f objectPoints, vector_vector_Point2f imagePoints, Size imageSize, double aspectRatio = 1.)
//

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_initCameraMatrix2D_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_initCameraMatrix2D_10
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints_mat_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jdouble aspectRatio)
{
    static const char method_name[] = "calib3d::initCameraMatrix2D_10()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point3f> > objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_vector_Point3f( objectPoints_mat, objectPoints );
        vector< vector<Point2f> > imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat_to_vector_vector_Point2f( imagePoints_mat, imagePoints );
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat _retval_ = cv::initCameraMatrix2D( objectPoints, imagePoints, imageSize, (double)aspectRatio );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_initCameraMatrix2D_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_calib3d_Calib3d_initCameraMatrix2D_11
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints_mat_nativeObj, jdouble imageSize_width, jdouble imageSize_height)
{
    static const char method_name[] = "calib3d::initCameraMatrix2D_11()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point3f> > objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_vector_Point3f( objectPoints_mat, objectPoints );
        vector< vector<Point2f> > imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat_to_vector_vector_Point2f( imagePoints_mat, imagePoints );
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat _retval_ = cv::initCameraMatrix2D( objectPoints, imagePoints, imageSize );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void matMulDeriv(Mat A, Mat B, Mat& dABdA, Mat& dABdB)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_matMulDeriv_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_matMulDeriv_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong dABdA_nativeObj, jlong dABdB_nativeObj)
{
    static const char method_name[] = "calib3d::matMulDeriv_10()";
    try {
        LOGD("%s", method_name);
        Mat& A = *((Mat*)A_nativeObj);
        Mat& B = *((Mat*)B_nativeObj);
        Mat& dABdA = *((Mat*)dABdA_nativeObj);
        Mat& dABdB = *((Mat*)dABdB_nativeObj);
        cv::matMulDeriv( A, B, dABdA, dABdB );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void projectPoints(vector_Point3f objectPoints, Mat rvec, Mat tvec, Mat cameraMatrix, vector_double distCoeffs, vector_Point2f& imagePoints, Mat& jacobian = Mat(), double aspectRatio = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_projectPoints_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_projectPoints_10
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_mat_nativeObj, jlong imagePoints_mat_nativeObj, jlong jacobian_nativeObj, jdouble aspectRatio)
{
    static const char method_name[] = "calib3d::projectPoints_10()";
    try {
        LOGD("%s", method_name);
        vector<Point3f> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Point3f( objectPoints_mat, objectPoints );
        vector<double> distCoeffs;
        Mat& distCoeffs_mat = *((Mat*)distCoeffs_mat_nativeObj);
        Mat_to_vector_double( distCoeffs_mat, distCoeffs );
        vector<Point2f> imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& jacobian = *((Mat*)jacobian_nativeObj);
        cv::projectPoints( objectPoints, rvec, tvec, cameraMatrix, distCoeffs, imagePoints, jacobian, (double)aspectRatio );
        vector_Point2f_to_Mat( imagePoints, imagePoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_projectPoints_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_projectPoints_11
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_mat_nativeObj, jlong imagePoints_mat_nativeObj)
{
    static const char method_name[] = "calib3d::projectPoints_11()";
    try {
        LOGD("%s", method_name);
        vector<Point3f> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Point3f( objectPoints_mat, objectPoints );
        vector<double> distCoeffs;
        Mat& distCoeffs_mat = *((Mat*)distCoeffs_mat_nativeObj);
        Mat_to_vector_double( distCoeffs_mat, distCoeffs );
        vector<Point2f> imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        cv::projectPoints( objectPoints, rvec, tvec, cameraMatrix, distCoeffs, imagePoints );
        vector_Point2f_to_Mat( imagePoints, imagePoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  float rectify3Collinear(Mat cameraMatrix1, Mat distCoeffs1, Mat cameraMatrix2, Mat distCoeffs2, Mat cameraMatrix3, Mat distCoeffs3, vector_Mat imgpt1, vector_Mat imgpt3, Size imageSize, Mat R12, Mat T12, Mat R13, Mat T13, Mat& R1, Mat& R2, Mat& R3, Mat& P1, Mat& P2, Mat& P3, Mat& Q, double alpha, Size newImgSize, Rect* roi1, Rect* roi2, int flags)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_calib3d_Calib3d_rectify3Collinear_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdoubleArray, jdoubleArray, jint);

JNIEXPORT jfloat JNICALL Java_org_opencv_calib3d_Calib3d_rectify3Collinear_10
  (JNIEnv* env, jclass , jlong cameraMatrix1_nativeObj, jlong distCoeffs1_nativeObj, jlong cameraMatrix2_nativeObj, jlong distCoeffs2_nativeObj, jlong cameraMatrix3_nativeObj, jlong distCoeffs3_nativeObj, jlong imgpt1_mat_nativeObj, jlong imgpt3_mat_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong R12_nativeObj, jlong T12_nativeObj, jlong R13_nativeObj, jlong T13_nativeObj, jlong R1_nativeObj, jlong R2_nativeObj, jlong R3_nativeObj, jlong P1_nativeObj, jlong P2_nativeObj, jlong P3_nativeObj, jlong Q_nativeObj, jdouble alpha, jdouble newImgSize_width, jdouble newImgSize_height, jdoubleArray roi1_out, jdoubleArray roi2_out, jint flags)
{
    static const char method_name[] = "calib3d::rectify3Collinear_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> imgpt1;
        Mat& imgpt1_mat = *((Mat*)imgpt1_mat_nativeObj);
        Mat_to_vector_Mat( imgpt1_mat, imgpt1 );
        vector<Mat> imgpt3;
        Mat& imgpt3_mat = *((Mat*)imgpt3_mat_nativeObj);
        Mat_to_vector_Mat( imgpt3_mat, imgpt3 );
        Mat& cameraMatrix1 = *((Mat*)cameraMatrix1_nativeObj);
        Mat& distCoeffs1 = *((Mat*)distCoeffs1_nativeObj);
        Mat& cameraMatrix2 = *((Mat*)cameraMatrix2_nativeObj);
        Mat& distCoeffs2 = *((Mat*)distCoeffs2_nativeObj);
        Mat& cameraMatrix3 = *((Mat*)cameraMatrix3_nativeObj);
        Mat& distCoeffs3 = *((Mat*)distCoeffs3_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& R12 = *((Mat*)R12_nativeObj);
        Mat& T12 = *((Mat*)T12_nativeObj);
        Mat& R13 = *((Mat*)R13_nativeObj);
        Mat& T13 = *((Mat*)T13_nativeObj);
        Mat& R1 = *((Mat*)R1_nativeObj);
        Mat& R2 = *((Mat*)R2_nativeObj);
        Mat& R3 = *((Mat*)R3_nativeObj);
        Mat& P1 = *((Mat*)P1_nativeObj);
        Mat& P2 = *((Mat*)P2_nativeObj);
        Mat& P3 = *((Mat*)P3_nativeObj);
        Mat& Q = *((Mat*)Q_nativeObj);
        Size newImgSize((int)newImgSize_width, (int)newImgSize_height);
        Rect roi1;
        Rect roi2;
        float _retval_ = cv::rectify3Collinear( cameraMatrix1, distCoeffs1, cameraMatrix2, distCoeffs2, cameraMatrix3, distCoeffs3, imgpt1, imgpt3, imageSize, R12, T12, R13, T13, R1, R2, R3, P1, P2, P3, Q, (double)alpha, newImgSize, &roi1, &roi2, (int)flags );
        jdouble tmp_roi1[4] = {roi1.x, roi1.y, roi1.width, roi1.height}; env->SetDoubleArrayRegion(roi1_out, 0, 4, tmp_roi1);  jdouble tmp_roi2[4] = {roi2.x, roi2.y, roi2.width, roi2.height}; env->SetDoubleArrayRegion(roi2_out, 0, 4, tmp_roi2);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void reprojectImageTo3D(Mat disparity, Mat& _3dImage, Mat Q, bool handleMissingValues = false, int ddepth = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_reprojectImageTo3D_10 (JNIEnv*, jclass, jlong, jlong, jlong, jboolean, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_reprojectImageTo3D_10
  (JNIEnv* env, jclass , jlong disparity_nativeObj, jlong _3dImage_nativeObj, jlong Q_nativeObj, jboolean handleMissingValues, jint ddepth)
{
    static const char method_name[] = "calib3d::reprojectImageTo3D_10()";
    try {
        LOGD("%s", method_name);
        Mat& disparity = *((Mat*)disparity_nativeObj);
        Mat& _3dImage = *((Mat*)_3dImage_nativeObj);
        Mat& Q = *((Mat*)Q_nativeObj);
        cv::reprojectImageTo3D( disparity, _3dImage, Q, (bool)handleMissingValues, (int)ddepth );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_reprojectImageTo3D_11 (JNIEnv*, jclass, jlong, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_reprojectImageTo3D_11
  (JNIEnv* env, jclass , jlong disparity_nativeObj, jlong _3dImage_nativeObj, jlong Q_nativeObj, jboolean handleMissingValues)
{
    static const char method_name[] = "calib3d::reprojectImageTo3D_11()";
    try {
        LOGD("%s", method_name);
        Mat& disparity = *((Mat*)disparity_nativeObj);
        Mat& _3dImage = *((Mat*)_3dImage_nativeObj);
        Mat& Q = *((Mat*)Q_nativeObj);
        cv::reprojectImageTo3D( disparity, _3dImage, Q, (bool)handleMissingValues );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_reprojectImageTo3D_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_reprojectImageTo3D_12
  (JNIEnv* env, jclass , jlong disparity_nativeObj, jlong _3dImage_nativeObj, jlong Q_nativeObj)
{
    static const char method_name[] = "calib3d::reprojectImageTo3D_12()";
    try {
        LOGD("%s", method_name);
        Mat& disparity = *((Mat*)disparity_nativeObj);
        Mat& _3dImage = *((Mat*)_3dImage_nativeObj);
        Mat& Q = *((Mat*)Q_nativeObj);
        cv::reprojectImageTo3D( disparity, _3dImage, Q );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool solvePnP(vector_Point3f objectPoints, vector_Point2f imagePoints, Mat cameraMatrix, vector_double distCoeffs, Mat& rvec, Mat& tvec, bool useExtrinsicGuess = false, int flags = ITERATIVE)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_solvePnP_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jboolean, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_solvePnP_10
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_mat_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj, jboolean useExtrinsicGuess, jint flags)
{
    static const char method_name[] = "calib3d::solvePnP_10()";
    try {
        LOGD("%s", method_name);
        vector<Point3f> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Point3f( objectPoints_mat, objectPoints );
        vector<Point2f> imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat_to_vector_Point2f( imagePoints_mat, imagePoints );
        vector<double> distCoeffs;
        Mat& distCoeffs_mat = *((Mat*)distCoeffs_mat_nativeObj);
        Mat_to_vector_double( distCoeffs_mat, distCoeffs );
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        bool _retval_ = cv::solvePnP( objectPoints, imagePoints, cameraMatrix, distCoeffs, rvec, tvec, (bool)useExtrinsicGuess, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_solvePnP_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_solvePnP_11
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_mat_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj)
{
    static const char method_name[] = "calib3d::solvePnP_11()";
    try {
        LOGD("%s", method_name);
        vector<Point3f> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Point3f( objectPoints_mat, objectPoints );
        vector<Point2f> imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat_to_vector_Point2f( imagePoints_mat, imagePoints );
        vector<double> distCoeffs;
        Mat& distCoeffs_mat = *((Mat*)distCoeffs_mat_nativeObj);
        Mat_to_vector_double( distCoeffs_mat, distCoeffs );
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        bool _retval_ = cv::solvePnP( objectPoints, imagePoints, cameraMatrix, distCoeffs, rvec, tvec );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void solvePnPRansac(vector_Point3f objectPoints, vector_Point2f imagePoints, Mat cameraMatrix, vector_double distCoeffs, Mat& rvec, Mat& tvec, bool useExtrinsicGuess = false, int iterationsCount = 100, float reprojectionError = 8.0, int minInliersCount = 100, Mat& inliers = Mat(), int flags = ITERATIVE)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_solvePnPRansac_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jboolean, jint, jfloat, jint, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_solvePnPRansac_10
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_mat_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj, jboolean useExtrinsicGuess, jint iterationsCount, jfloat reprojectionError, jint minInliersCount, jlong inliers_nativeObj, jint flags)
{
    static const char method_name[] = "calib3d::solvePnPRansac_10()";
    try {
        LOGD("%s", method_name);
        vector<Point3f> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Point3f( objectPoints_mat, objectPoints );
        vector<Point2f> imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat_to_vector_Point2f( imagePoints_mat, imagePoints );
        vector<double> distCoeffs;
        Mat& distCoeffs_mat = *((Mat*)distCoeffs_mat_nativeObj);
        Mat_to_vector_double( distCoeffs_mat, distCoeffs );
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        Mat& inliers = *((Mat*)inliers_nativeObj);
        cv::solvePnPRansac( objectPoints, imagePoints, cameraMatrix, distCoeffs, rvec, tvec, (bool)useExtrinsicGuess, (int)iterationsCount, (float)reprojectionError, (int)minInliersCount, inliers, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_solvePnPRansac_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_solvePnPRansac_11
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_mat_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj)
{
    static const char method_name[] = "calib3d::solvePnPRansac_11()";
    try {
        LOGD("%s", method_name);
        vector<Point3f> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Point3f( objectPoints_mat, objectPoints );
        vector<Point2f> imagePoints;
        Mat& imagePoints_mat = *((Mat*)imagePoints_mat_nativeObj);
        Mat_to_vector_Point2f( imagePoints_mat, imagePoints );
        vector<double> distCoeffs;
        Mat& distCoeffs_mat = *((Mat*)distCoeffs_mat_nativeObj);
        Mat_to_vector_double( distCoeffs_mat, distCoeffs );
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        cv::solvePnPRansac( objectPoints, imagePoints, cameraMatrix, distCoeffs, rvec, tvec );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double stereoCalibrate(vector_Mat objectPoints, vector_Mat imagePoints1, vector_Mat imagePoints2, Mat& cameraMatrix1, Mat& distCoeffs1, Mat& cameraMatrix2, Mat& distCoeffs2, Size imageSize, Mat& R, Mat& T, Mat& E, Mat& F, TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6), int flags = CALIB_FIX_INTRINSIC)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_stereoCalibrate_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jint, jint, jdouble, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_stereoCalibrate_10
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints1_mat_nativeObj, jlong imagePoints2_mat_nativeObj, jlong cameraMatrix1_nativeObj, jlong distCoeffs1_nativeObj, jlong cameraMatrix2_nativeObj, jlong distCoeffs2_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong R_nativeObj, jlong T_nativeObj, jlong E_nativeObj, jlong F_nativeObj, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jint flags)
{
    static const char method_name[] = "calib3d::stereoCalibrate_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Mat( objectPoints_mat, objectPoints );
        vector<Mat> imagePoints1;
        Mat& imagePoints1_mat = *((Mat*)imagePoints1_mat_nativeObj);
        Mat_to_vector_Mat( imagePoints1_mat, imagePoints1 );
        vector<Mat> imagePoints2;
        Mat& imagePoints2_mat = *((Mat*)imagePoints2_mat_nativeObj);
        Mat_to_vector_Mat( imagePoints2_mat, imagePoints2 );
        Mat& cameraMatrix1 = *((Mat*)cameraMatrix1_nativeObj);
        Mat& distCoeffs1 = *((Mat*)distCoeffs1_nativeObj);
        Mat& cameraMatrix2 = *((Mat*)cameraMatrix2_nativeObj);
        Mat& distCoeffs2 = *((Mat*)distCoeffs2_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& R = *((Mat*)R_nativeObj);
        Mat& T = *((Mat*)T_nativeObj);
        Mat& E = *((Mat*)E_nativeObj);
        Mat& F = *((Mat*)F_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        double _retval_ = cv::stereoCalibrate( objectPoints, imagePoints1, imagePoints2, cameraMatrix1, distCoeffs1, cameraMatrix2, distCoeffs2, imageSize, R, T, E, F, criteria, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_stereoCalibrate_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_calib3d_Calib3d_stereoCalibrate_11
  (JNIEnv* env, jclass , jlong objectPoints_mat_nativeObj, jlong imagePoints1_mat_nativeObj, jlong imagePoints2_mat_nativeObj, jlong cameraMatrix1_nativeObj, jlong distCoeffs1_nativeObj, jlong cameraMatrix2_nativeObj, jlong distCoeffs2_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong R_nativeObj, jlong T_nativeObj, jlong E_nativeObj, jlong F_nativeObj)
{
    static const char method_name[] = "calib3d::stereoCalibrate_11()";
    try {
        LOGD("%s", method_name);
        vector<Mat> objectPoints;
        Mat& objectPoints_mat = *((Mat*)objectPoints_mat_nativeObj);
        Mat_to_vector_Mat( objectPoints_mat, objectPoints );
        vector<Mat> imagePoints1;
        Mat& imagePoints1_mat = *((Mat*)imagePoints1_mat_nativeObj);
        Mat_to_vector_Mat( imagePoints1_mat, imagePoints1 );
        vector<Mat> imagePoints2;
        Mat& imagePoints2_mat = *((Mat*)imagePoints2_mat_nativeObj);
        Mat_to_vector_Mat( imagePoints2_mat, imagePoints2 );
        Mat& cameraMatrix1 = *((Mat*)cameraMatrix1_nativeObj);
        Mat& distCoeffs1 = *((Mat*)distCoeffs1_nativeObj);
        Mat& cameraMatrix2 = *((Mat*)cameraMatrix2_nativeObj);
        Mat& distCoeffs2 = *((Mat*)distCoeffs2_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& R = *((Mat*)R_nativeObj);
        Mat& T = *((Mat*)T_nativeObj);
        Mat& E = *((Mat*)E_nativeObj);
        Mat& F = *((Mat*)F_nativeObj);
        double _retval_ = cv::stereoCalibrate( objectPoints, imagePoints1, imagePoints2, cameraMatrix1, distCoeffs1, cameraMatrix2, distCoeffs2, imageSize, R, T, E, F );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void stereoRectify(Mat cameraMatrix1, Mat distCoeffs1, Mat cameraMatrix2, Mat distCoeffs2, Size imageSize, Mat R, Mat T, Mat& R1, Mat& R2, Mat& P1, Mat& P2, Mat& Q, int flags = CALIB_ZERO_DISPARITY, double alpha = -1, Size newImageSize = Size(), Rect* validPixROI1 = 0, Rect* validPixROI2 = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_stereoRectify_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jint, jdouble, jdouble, jdouble, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_stereoRectify_10
  (JNIEnv* env, jclass , jlong cameraMatrix1_nativeObj, jlong distCoeffs1_nativeObj, jlong cameraMatrix2_nativeObj, jlong distCoeffs2_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong R_nativeObj, jlong T_nativeObj, jlong R1_nativeObj, jlong R2_nativeObj, jlong P1_nativeObj, jlong P2_nativeObj, jlong Q_nativeObj, jint flags, jdouble alpha, jdouble newImageSize_width, jdouble newImageSize_height, jdoubleArray validPixROI1_out, jdoubleArray validPixROI2_out)
{
    static const char method_name[] = "calib3d::stereoRectify_10()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix1 = *((Mat*)cameraMatrix1_nativeObj);
        Mat& distCoeffs1 = *((Mat*)distCoeffs1_nativeObj);
        Mat& cameraMatrix2 = *((Mat*)cameraMatrix2_nativeObj);
        Mat& distCoeffs2 = *((Mat*)distCoeffs2_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& R = *((Mat*)R_nativeObj);
        Mat& T = *((Mat*)T_nativeObj);
        Mat& R1 = *((Mat*)R1_nativeObj);
        Mat& R2 = *((Mat*)R2_nativeObj);
        Mat& P1 = *((Mat*)P1_nativeObj);
        Mat& P2 = *((Mat*)P2_nativeObj);
        Mat& Q = *((Mat*)Q_nativeObj);
        Size newImageSize((int)newImageSize_width, (int)newImageSize_height);
        Rect validPixROI1;
        Rect validPixROI2;
        cv::stereoRectify( cameraMatrix1, distCoeffs1, cameraMatrix2, distCoeffs2, imageSize, R, T, R1, R2, P1, P2, Q, (int)flags, (double)alpha, newImageSize, &validPixROI1, &validPixROI2 );
        jdouble tmp_validPixROI1[4] = {validPixROI1.x, validPixROI1.y, validPixROI1.width, validPixROI1.height}; env->SetDoubleArrayRegion(validPixROI1_out, 0, 4, tmp_validPixROI1);  jdouble tmp_validPixROI2[4] = {validPixROI2.x, validPixROI2.y, validPixROI2.width, validPixROI2.height}; env->SetDoubleArrayRegion(validPixROI2_out, 0, 4, tmp_validPixROI2);
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_stereoRectify_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_stereoRectify_11
  (JNIEnv* env, jclass , jlong cameraMatrix1_nativeObj, jlong distCoeffs1_nativeObj, jlong cameraMatrix2_nativeObj, jlong distCoeffs2_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong R_nativeObj, jlong T_nativeObj, jlong R1_nativeObj, jlong R2_nativeObj, jlong P1_nativeObj, jlong P2_nativeObj, jlong Q_nativeObj)
{
    static const char method_name[] = "calib3d::stereoRectify_11()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix1 = *((Mat*)cameraMatrix1_nativeObj);
        Mat& distCoeffs1 = *((Mat*)distCoeffs1_nativeObj);
        Mat& cameraMatrix2 = *((Mat*)cameraMatrix2_nativeObj);
        Mat& distCoeffs2 = *((Mat*)distCoeffs2_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& R = *((Mat*)R_nativeObj);
        Mat& T = *((Mat*)T_nativeObj);
        Mat& R1 = *((Mat*)R1_nativeObj);
        Mat& R2 = *((Mat*)R2_nativeObj);
        Mat& P1 = *((Mat*)P1_nativeObj);
        Mat& P2 = *((Mat*)P2_nativeObj);
        Mat& Q = *((Mat*)Q_nativeObj);
        cv::stereoRectify( cameraMatrix1, distCoeffs1, cameraMatrix2, distCoeffs2, imageSize, R, T, R1, R2, P1, P2, Q );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool stereoRectifyUncalibrated(Mat points1, Mat points2, Mat F, Size imgSize, Mat& H1, Mat& H2, double threshold = 5)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_stereoRectifyUncalibrated_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_stereoRectifyUncalibrated_10
  (JNIEnv* env, jclass , jlong points1_nativeObj, jlong points2_nativeObj, jlong F_nativeObj, jdouble imgSize_width, jdouble imgSize_height, jlong H1_nativeObj, jlong H2_nativeObj, jdouble threshold)
{
    static const char method_name[] = "calib3d::stereoRectifyUncalibrated_10()";
    try {
        LOGD("%s", method_name);
        Mat& points1 = *((Mat*)points1_nativeObj);
        Mat& points2 = *((Mat*)points2_nativeObj);
        Mat& F = *((Mat*)F_nativeObj);
        Size imgSize((int)imgSize_width, (int)imgSize_height);
        Mat& H1 = *((Mat*)H1_nativeObj);
        Mat& H2 = *((Mat*)H2_nativeObj);
        bool _retval_ = cv::stereoRectifyUncalibrated( points1, points2, F, imgSize, H1, H2, (double)threshold );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_stereoRectifyUncalibrated_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_calib3d_Calib3d_stereoRectifyUncalibrated_11
  (JNIEnv* env, jclass , jlong points1_nativeObj, jlong points2_nativeObj, jlong F_nativeObj, jdouble imgSize_width, jdouble imgSize_height, jlong H1_nativeObj, jlong H2_nativeObj)
{
    static const char method_name[] = "calib3d::stereoRectifyUncalibrated_11()";
    try {
        LOGD("%s", method_name);
        Mat& points1 = *((Mat*)points1_nativeObj);
        Mat& points2 = *((Mat*)points2_nativeObj);
        Mat& F = *((Mat*)F_nativeObj);
        Size imgSize((int)imgSize_width, (int)imgSize_height);
        Mat& H1 = *((Mat*)H1_nativeObj);
        Mat& H2 = *((Mat*)H2_nativeObj);
        bool _retval_ = cv::stereoRectifyUncalibrated( points1, points2, F, imgSize, H1, H2 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void triangulatePoints(Mat projMatr1, Mat projMatr2, Mat projPoints1, Mat projPoints2, Mat& points4D)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_triangulatePoints_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_triangulatePoints_10
  (JNIEnv* env, jclass , jlong projMatr1_nativeObj, jlong projMatr2_nativeObj, jlong projPoints1_nativeObj, jlong projPoints2_nativeObj, jlong points4D_nativeObj)
{
    static const char method_name[] = "calib3d::triangulatePoints_10()";
    try {
        LOGD("%s", method_name);
        Mat& projMatr1 = *((Mat*)projMatr1_nativeObj);
        Mat& projMatr2 = *((Mat*)projMatr2_nativeObj);
        Mat& projPoints1 = *((Mat*)projPoints1_nativeObj);
        Mat& projPoints2 = *((Mat*)projPoints2_nativeObj);
        Mat& points4D = *((Mat*)points4D_nativeObj);
        cv::triangulatePoints( projMatr1, projMatr2, projPoints1, projPoints2, points4D );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void validateDisparity(Mat& disparity, Mat cost, int minDisparity, int numberOfDisparities, int disp12MaxDisp = 1)
//

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_validateDisparity_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_validateDisparity_10
  (JNIEnv* env, jclass , jlong disparity_nativeObj, jlong cost_nativeObj, jint minDisparity, jint numberOfDisparities, jint disp12MaxDisp)
{
    static const char method_name[] = "calib3d::validateDisparity_10()";
    try {
        LOGD("%s", method_name);
        Mat& disparity = *((Mat*)disparity_nativeObj);
        Mat& cost = *((Mat*)cost_nativeObj);
        cv::validateDisparity( disparity, cost, (int)minDisparity, (int)numberOfDisparities, (int)disp12MaxDisp );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_validateDisparity_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_calib3d_Calib3d_validateDisparity_11
  (JNIEnv* env, jclass , jlong disparity_nativeObj, jlong cost_nativeObj, jint minDisparity, jint numberOfDisparities)
{
    static const char method_name[] = "calib3d::validateDisparity_11()";
    try {
        LOGD("%s", method_name);
        Mat& disparity = *((Mat*)disparity_nativeObj);
        Mat& cost = *((Mat*)cost_nativeObj);
        cv::validateDisparity( disparity, cost, (int)minDisparity, (int)numberOfDisparities );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



} // extern "C"

#endif // HAVE_OPENCV_CALIB3D
