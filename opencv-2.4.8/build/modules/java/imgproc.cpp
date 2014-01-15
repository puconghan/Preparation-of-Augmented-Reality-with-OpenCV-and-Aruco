
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.imgproc"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_IMGPROC
#include "opencv2/imgproc/imgproc.hpp"

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
//   Moments::Moments()
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Moments_Moments_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Moments_Moments_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "imgproc::Moments_10()";
    try {
        LOGD("%s", method_name);
        
        Moments* _retval_ = new Moments(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// double Moments::m00
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m00_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m00_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m00_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m00;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m00
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m00_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m00_10
  (JNIEnv* env, jclass , jlong self, jdouble m00)
{
    static const char method_name[] = "imgproc::set_1m00_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m00 = ( (double)m00 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::m10
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m10_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m10_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m10_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m10;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m10
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m10_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m10_10
  (JNIEnv* env, jclass , jlong self, jdouble m10)
{
    static const char method_name[] = "imgproc::set_1m10_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m10 = ( (double)m10 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::m01
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m01_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m01_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m01_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m01;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m01
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m01_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m01_10
  (JNIEnv* env, jclass , jlong self, jdouble m01)
{
    static const char method_name[] = "imgproc::set_1m01_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m01 = ( (double)m01 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::m20
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m20_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m20_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m20_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m20;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m20
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m20_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m20_10
  (JNIEnv* env, jclass , jlong self, jdouble m20)
{
    static const char method_name[] = "imgproc::set_1m20_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m20 = ( (double)m20 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::m11
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m11_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m11_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m11_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m11;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m11
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m11_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m11_10
  (JNIEnv* env, jclass , jlong self, jdouble m11)
{
    static const char method_name[] = "imgproc::set_1m11_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m11 = ( (double)m11 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::m02
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m02_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m02_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m02_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m02;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m02
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m02_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m02_10
  (JNIEnv* env, jclass , jlong self, jdouble m02)
{
    static const char method_name[] = "imgproc::set_1m02_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m02 = ( (double)m02 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::m30
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m30_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m30_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m30_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m30;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m30
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m30_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m30_10
  (JNIEnv* env, jclass , jlong self, jdouble m30)
{
    static const char method_name[] = "imgproc::set_1m30_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m30 = ( (double)m30 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::m21
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m21_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m21_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m21_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m21;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m21
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m21_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m21_10
  (JNIEnv* env, jclass , jlong self, jdouble m21)
{
    static const char method_name[] = "imgproc::set_1m21_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m21 = ( (double)m21 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::m12
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m12_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m12_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m12_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m12;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m12
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m12_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m12_10
  (JNIEnv* env, jclass , jlong self, jdouble m12)
{
    static const char method_name[] = "imgproc::set_1m12_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m12 = ( (double)m12 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::m03
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m03_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1m03_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1m03_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->m03;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::m03
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m03_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1m03_10
  (JNIEnv* env, jclass , jlong self, jdouble m03)
{
    static const char method_name[] = "imgproc::set_1m03_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->m03 = ( (double)m03 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::mu20
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu20_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu20_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1mu20_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->mu20;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::mu20
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu20_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu20_10
  (JNIEnv* env, jclass , jlong self, jdouble mu20)
{
    static const char method_name[] = "imgproc::set_1mu20_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->mu20 = ( (double)mu20 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::mu11
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu11_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu11_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1mu11_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->mu11;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::mu11
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu11_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu11_10
  (JNIEnv* env, jclass , jlong self, jdouble mu11)
{
    static const char method_name[] = "imgproc::set_1mu11_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->mu11 = ( (double)mu11 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::mu02
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu02_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu02_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1mu02_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->mu02;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::mu02
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu02_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu02_10
  (JNIEnv* env, jclass , jlong self, jdouble mu02)
{
    static const char method_name[] = "imgproc::set_1mu02_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->mu02 = ( (double)mu02 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::mu30
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu30_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu30_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1mu30_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->mu30;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::mu30
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu30_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu30_10
  (JNIEnv* env, jclass , jlong self, jdouble mu30)
{
    static const char method_name[] = "imgproc::set_1mu30_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->mu30 = ( (double)mu30 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::mu21
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu21_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu21_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1mu21_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->mu21;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::mu21
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu21_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu21_10
  (JNIEnv* env, jclass , jlong self, jdouble mu21)
{
    static const char method_name[] = "imgproc::set_1mu21_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->mu21 = ( (double)mu21 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::mu12
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu12_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu12_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1mu12_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->mu12;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::mu12
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu12_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu12_10
  (JNIEnv* env, jclass , jlong self, jdouble mu12)
{
    static const char method_name[] = "imgproc::set_1mu12_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->mu12 = ( (double)mu12 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::mu03
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu03_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1mu03_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1mu03_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->mu03;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::mu03
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu03_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1mu03_10
  (JNIEnv* env, jclass , jlong self, jdouble mu03)
{
    static const char method_name[] = "imgproc::set_1mu03_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->mu03 = ( (double)mu03 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::nu20
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu20_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu20_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1nu20_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->nu20;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::nu20
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu20_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu20_10
  (JNIEnv* env, jclass , jlong self, jdouble nu20)
{
    static const char method_name[] = "imgproc::set_1nu20_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->nu20 = ( (double)nu20 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::nu11
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu11_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu11_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1nu11_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->nu11;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::nu11
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu11_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu11_10
  (JNIEnv* env, jclass , jlong self, jdouble nu11)
{
    static const char method_name[] = "imgproc::set_1nu11_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->nu11 = ( (double)nu11 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::nu02
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu02_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu02_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1nu02_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->nu02;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::nu02
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu02_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu02_10
  (JNIEnv* env, jclass , jlong self, jdouble nu02)
{
    static const char method_name[] = "imgproc::set_1nu02_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->nu02 = ( (double)nu02 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::nu30
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu30_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu30_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1nu30_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->nu30;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::nu30
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu30_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu30_10
  (JNIEnv* env, jclass , jlong self, jdouble nu30)
{
    static const char method_name[] = "imgproc::set_1nu30_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->nu30 = ( (double)nu30 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::nu21
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu21_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu21_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1nu21_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->nu21;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::nu21
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu21_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu21_10
  (JNIEnv* env, jclass , jlong self, jdouble nu21)
{
    static const char method_name[] = "imgproc::set_1nu21_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->nu21 = ( (double)nu21 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::nu12
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu12_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu12_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1nu12_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->nu12;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::nu12
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu12_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu12_10
  (JNIEnv* env, jclass , jlong self, jdouble nu12)
{
    static const char method_name[] = "imgproc::set_1nu12_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->nu12 = ( (double)nu12 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double Moments::nu03
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu03_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Moments_get_1nu03_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "imgproc::get_1nu03_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        double _retval_ = me->nu03;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Moments::nu03
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu03_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_set_1nu03_10
  (JNIEnv* env, jclass , jlong self, jdouble nu03)
{
    static const char method_name[] = "imgproc::set_1nu03_10()";
    try {
        LOGD("%s", method_name);
        Moments* me = (Moments*) self; //TODO: check for NULL
        me->nu03 = ( (double)nu03 );
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
//  static void Moments::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Moments_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Moments*) self;
}


//
//   Subdiv2D::Subdiv2D()
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Subdiv2D_Subdiv2D_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Subdiv2D_Subdiv2D_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "imgproc::Subdiv2D_10()";
    try {
        LOGD("%s", method_name);
        
        Subdiv2D* _retval_ = new Subdiv2D(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   Subdiv2D::Subdiv2D(Rect rect)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Subdiv2D_Subdiv2D_11 (JNIEnv*, jclass, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Subdiv2D_Subdiv2D_11
  (JNIEnv* env, jclass , jint rect_x, jint rect_y, jint rect_width, jint rect_height)
{
    static const char method_name[] = "imgproc::Subdiv2D_11()";
    try {
        LOGD("%s", method_name);
        Rect rect(rect_x, rect_y, rect_width, rect_height);
        Subdiv2D* _retval_ = new Subdiv2D( rect );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int Subdiv2D::edgeDst(int edge, Point2f* dstpt = 0)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_edgeDst_10 (JNIEnv*, jclass, jlong, jint, jdoubleArray);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_edgeDst_10
  (JNIEnv* env, jclass , jlong self, jint edge, jdoubleArray dstpt_out)
{
    static const char method_name[] = "imgproc::edgeDst_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        Point2f dstpt;
        int _retval_ = me->edgeDst( (int)edge, &dstpt );
        jdouble tmp_dstpt[2] = {dstpt.x, dstpt.y}; env->SetDoubleArrayRegion(dstpt_out, 0, 2, tmp_dstpt);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_edgeDst_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_edgeDst_11
  (JNIEnv* env, jclass , jlong self, jint edge)
{
    static const char method_name[] = "imgproc::edgeDst_11()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        int _retval_ = me->edgeDst( (int)edge );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int Subdiv2D::edgeOrg(int edge, Point2f* orgpt = 0)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_edgeOrg_10 (JNIEnv*, jclass, jlong, jint, jdoubleArray);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_edgeOrg_10
  (JNIEnv* env, jclass , jlong self, jint edge, jdoubleArray orgpt_out)
{
    static const char method_name[] = "imgproc::edgeOrg_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        Point2f orgpt;
        int _retval_ = me->edgeOrg( (int)edge, &orgpt );
        jdouble tmp_orgpt[2] = {orgpt.x, orgpt.y}; env->SetDoubleArrayRegion(orgpt_out, 0, 2, tmp_orgpt);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_edgeOrg_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_edgeOrg_11
  (JNIEnv* env, jclass , jlong self, jint edge)
{
    static const char method_name[] = "imgproc::edgeOrg_11()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        int _retval_ = me->edgeOrg( (int)edge );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int Subdiv2D::findNearest(Point2f pt, Point2f* nearestPt = 0)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_findNearest_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdoubleArray);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_findNearest_10
  (JNIEnv* env, jclass , jlong self, jdouble pt_x, jdouble pt_y, jdoubleArray nearestPt_out)
{
    static const char method_name[] = "imgproc::findNearest_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        Point2f pt((float)pt_x, (float)pt_y);
        Point2f nearestPt;
        int _retval_ = me->findNearest( pt, &nearestPt );
        jdouble tmp_nearestPt[2] = {nearestPt.x, nearestPt.y}; env->SetDoubleArrayRegion(nearestPt_out, 0, 2, tmp_nearestPt);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_findNearest_11 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_findNearest_11
  (JNIEnv* env, jclass , jlong self, jdouble pt_x, jdouble pt_y)
{
    static const char method_name[] = "imgproc::findNearest_11()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        Point2f pt((float)pt_x, (float)pt_y);
        int _retval_ = me->findNearest( pt );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int Subdiv2D::getEdge(int edge, int nextEdgeType)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_getEdge_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_getEdge_10
  (JNIEnv* env, jclass , jlong self, jint edge, jint nextEdgeType)
{
    static const char method_name[] = "imgproc::getEdge_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        int _retval_ = me->getEdge( (int)edge, (int)nextEdgeType );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void Subdiv2D::getEdgeList(vector_Vec4f& edgeList)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_getEdgeList_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_getEdgeList_10
  (JNIEnv* env, jclass , jlong self, jlong edgeList_mat_nativeObj)
{
    static const char method_name[] = "imgproc::getEdgeList_10()";
    try {
        LOGD("%s", method_name);
        vector<Vec4f> edgeList;
        Mat& edgeList_mat = *((Mat*)edgeList_mat_nativeObj);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        me->getEdgeList( edgeList );
        vector_Vec4f_to_Mat( edgeList, edgeList_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void Subdiv2D::getTriangleList(vector_Vec6f& triangleList)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_getTriangleList_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_getTriangleList_10
  (JNIEnv* env, jclass , jlong self, jlong triangleList_mat_nativeObj)
{
    static const char method_name[] = "imgproc::getTriangleList_10()";
    try {
        LOGD("%s", method_name);
        vector<Vec6f> triangleList;
        Mat& triangleList_mat = *((Mat*)triangleList_mat_nativeObj);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        me->getTriangleList( triangleList );
        vector_Vec6f_to_Mat( triangleList, triangleList_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  Point2f Subdiv2D::getVertex(int vertex, int* firstEdge = 0)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Subdiv2D_getVertex_10 (JNIEnv*, jclass, jlong, jint, jdoubleArray);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Subdiv2D_getVertex_10
  (JNIEnv* env, jclass , jlong self, jint vertex, jdoubleArray firstEdge_out)
{
    static const char method_name[] = "imgproc::getVertex_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        int firstEdge;
        Point2f _retval_ = me->getVertex( (int)vertex, &firstEdge );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.x, _retval_.y}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);  jdouble tmp_firstEdge[1] = {firstEdge}; env->SetDoubleArrayRegion(firstEdge_out, 0, 1, tmp_firstEdge);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Subdiv2D_getVertex_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Subdiv2D_getVertex_11
  (JNIEnv* env, jclass , jlong self, jint vertex)
{
    static const char method_name[] = "imgproc::getVertex_11()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        Point2f _retval_ = me->getVertex( (int)vertex );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.x, _retval_.y}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void Subdiv2D::getVoronoiFacetList(vector_int idx, vector_vector_Point2f& facetList, vector_Point2f& facetCenters)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_getVoronoiFacetList_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_getVoronoiFacetList_10
  (JNIEnv* env, jclass , jlong self, jlong idx_mat_nativeObj, jlong facetList_mat_nativeObj, jlong facetCenters_mat_nativeObj)
{
    static const char method_name[] = "imgproc::getVoronoiFacetList_10()";
    try {
        LOGD("%s", method_name);
        vector<int> idx;
        Mat& idx_mat = *((Mat*)idx_mat_nativeObj);
        Mat_to_vector_int( idx_mat, idx );
        vector< vector<Point2f> > facetList;
        Mat& facetList_mat = *((Mat*)facetList_mat_nativeObj);
        vector<Point2f> facetCenters;
        Mat& facetCenters_mat = *((Mat*)facetCenters_mat_nativeObj);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        me->getVoronoiFacetList( idx, facetList, facetCenters );
        vector_vector_Point2f_to_Mat( facetList, facetList_mat );  vector_Point2f_to_Mat( facetCenters, facetCenters_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void Subdiv2D::initDelaunay(Rect rect)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_initDelaunay_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_initDelaunay_10
  (JNIEnv* env, jclass , jlong self, jint rect_x, jint rect_y, jint rect_width, jint rect_height)
{
    static const char method_name[] = "imgproc::initDelaunay_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        Rect rect(rect_x, rect_y, rect_width, rect_height);
        me->initDelaunay( rect );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  int Subdiv2D::insert(Point2f pt)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_insert_10 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_insert_10
  (JNIEnv* env, jclass , jlong self, jdouble pt_x, jdouble pt_y)
{
    static const char method_name[] = "imgproc::insert_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        Point2f pt((float)pt_x, (float)pt_y);
        int _retval_ = me->insert( pt );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void Subdiv2D::insert(vector_Point2f ptvec)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_insert_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_insert_11
  (JNIEnv* env, jclass , jlong self, jlong ptvec_mat_nativeObj)
{
    static const char method_name[] = "imgproc::insert_11()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> ptvec;
        Mat& ptvec_mat = *((Mat*)ptvec_mat_nativeObj);
        Mat_to_vector_Point2f( ptvec_mat, ptvec );
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        me->insert( ptvec );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  int Subdiv2D::locate(Point2f pt, int& edge, int& vertex)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_locate_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdoubleArray, jdoubleArray);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_locate_10
  (JNIEnv* env, jclass , jlong self, jdouble pt_x, jdouble pt_y, jdoubleArray edge_out, jdoubleArray vertex_out)
{
    static const char method_name[] = "imgproc::locate_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        Point2f pt((float)pt_x, (float)pt_y);
        int edge;
        int vertex;
        int _retval_ = me->locate( pt, edge, vertex );
        jdouble tmp_edge[1] = {edge}; env->SetDoubleArrayRegion(edge_out, 0, 1, tmp_edge);  jdouble tmp_vertex[1] = {vertex}; env->SetDoubleArrayRegion(vertex_out, 0, 1, tmp_vertex);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int Subdiv2D::nextEdge(int edge)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_nextEdge_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_nextEdge_10
  (JNIEnv* env, jclass , jlong self, jint edge)
{
    static const char method_name[] = "imgproc::nextEdge_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        int _retval_ = me->nextEdge( (int)edge );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int Subdiv2D::rotateEdge(int edge, int rotate)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_rotateEdge_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_rotateEdge_10
  (JNIEnv* env, jclass , jlong self, jint edge, jint rotate)
{
    static const char method_name[] = "imgproc::rotateEdge_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        int _retval_ = me->rotateEdge( (int)edge, (int)rotate );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int Subdiv2D::symEdge(int edge)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_symEdge_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Subdiv2D_symEdge_10
  (JNIEnv* env, jclass , jlong self, jint edge)
{
    static const char method_name[] = "imgproc::symEdge_10()";
    try {
        LOGD("%s", method_name);
        Subdiv2D* me = (Subdiv2D*) self; //TODO: check for NULL
        int _retval_ = me->symEdge( (int)edge );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Subdiv2D::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Subdiv2D_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Subdiv2D*) self;
}


//
//  void Canny(Mat image, Mat& edges, double threshold1, double threshold2, int apertureSize = 3, bool L2gradient = false)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Canny_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Canny_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong edges_nativeObj, jdouble threshold1, jdouble threshold2, jint apertureSize, jboolean L2gradient)
{
    static const char method_name[] = "imgproc::Canny_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& edges = *((Mat*)edges_nativeObj);
        cv::Canny( image, edges, (double)threshold1, (double)threshold2, (int)apertureSize, (bool)L2gradient );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Canny_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Canny_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong edges_nativeObj, jdouble threshold1, jdouble threshold2)
{
    static const char method_name[] = "imgproc::Canny_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& edges = *((Mat*)edges_nativeObj);
        cv::Canny( image, edges, (double)threshold1, (double)threshold2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void GaussianBlur(Mat src, Mat& dst, Size ksize, double sigmaX, double sigmaY = 0, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_GaussianBlur_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_GaussianBlur_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble ksize_width, jdouble ksize_height, jdouble sigmaX, jdouble sigmaY, jint borderType)
{
    static const char method_name[] = "imgproc::GaussianBlur_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        cv::GaussianBlur( src, dst, ksize, (double)sigmaX, (double)sigmaY, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_GaussianBlur_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_GaussianBlur_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble ksize_width, jdouble ksize_height, jdouble sigmaX, jdouble sigmaY)
{
    static const char method_name[] = "imgproc::GaussianBlur_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        cv::GaussianBlur( src, dst, ksize, (double)sigmaX, (double)sigmaY );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_GaussianBlur_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_GaussianBlur_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble ksize_width, jdouble ksize_height, jdouble sigmaX)
{
    static const char method_name[] = "imgproc::GaussianBlur_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        cv::GaussianBlur( src, dst, ksize, (double)sigmaX );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void HoughCircles(Mat image, Mat& circles, int method, double dp, double minDist, double param1 = 100, double param2 = 100, int minRadius = 0, int maxRadius = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughCircles_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jdouble, jdouble, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughCircles_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong circles_nativeObj, jint method, jdouble dp, jdouble minDist, jdouble param1, jdouble param2, jint minRadius, jint maxRadius)
{
    static const char method_name[] = "imgproc::HoughCircles_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& circles = *((Mat*)circles_nativeObj);
        cv::HoughCircles( image, circles, (int)method, (double)dp, (double)minDist, (double)param1, (double)param2, (int)minRadius, (int)maxRadius );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughCircles_11 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughCircles_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong circles_nativeObj, jint method, jdouble dp, jdouble minDist)
{
    static const char method_name[] = "imgproc::HoughCircles_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& circles = *((Mat*)circles_nativeObj);
        cv::HoughCircles( image, circles, (int)method, (double)dp, (double)minDist );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void HoughLines(Mat image, Mat& lines, double rho, double theta, int threshold, double srn = 0, double stn = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughLines_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughLines_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong lines_nativeObj, jdouble rho, jdouble theta, jint threshold, jdouble srn, jdouble stn)
{
    static const char method_name[] = "imgproc::HoughLines_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        cv::HoughLines( image, lines, (double)rho, (double)theta, (int)threshold, (double)srn, (double)stn );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughLines_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughLines_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong lines_nativeObj, jdouble rho, jdouble theta, jint threshold)
{
    static const char method_name[] = "imgproc::HoughLines_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        cv::HoughLines( image, lines, (double)rho, (double)theta, (int)threshold );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void HoughLinesP(Mat image, Mat& lines, double rho, double theta, int threshold, double minLineLength = 0, double maxLineGap = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughLinesP_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughLinesP_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong lines_nativeObj, jdouble rho, jdouble theta, jint threshold, jdouble minLineLength, jdouble maxLineGap)
{
    static const char method_name[] = "imgproc::HoughLinesP_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        cv::HoughLinesP( image, lines, (double)rho, (double)theta, (int)threshold, (double)minLineLength, (double)maxLineGap );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughLinesP_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HoughLinesP_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong lines_nativeObj, jdouble rho, jdouble theta, jint threshold)
{
    static const char method_name[] = "imgproc::HoughLinesP_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        cv::HoughLinesP( image, lines, (double)rho, (double)theta, (int)threshold );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void HuMoments(Moments m, Mat& hu)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HuMoments_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_HuMoments_10
  (JNIEnv* env, jclass , jlong m_nativeObj, jlong hu_nativeObj)
{
    static const char method_name[] = "imgproc::HuMoments_10()";
    try {
        LOGD("%s", method_name);
        Mat& hu = *((Mat*)hu_nativeObj);
        cv::HuMoments( (*(Moments*)m_nativeObj), hu );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void Laplacian(Mat src, Mat& dst, int ddepth, int ksize = 1, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Laplacian_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Laplacian_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jint ksize, jdouble scale, jdouble delta, jint borderType)
{
    static const char method_name[] = "imgproc::Laplacian_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Laplacian( src, dst, (int)ddepth, (int)ksize, (double)scale, (double)delta, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Laplacian_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Laplacian_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jint ksize, jdouble scale, jdouble delta)
{
    static const char method_name[] = "imgproc::Laplacian_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Laplacian( src, dst, (int)ddepth, (int)ksize, (double)scale, (double)delta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Laplacian_12 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Laplacian_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth)
{
    static const char method_name[] = "imgproc::Laplacian_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Laplacian( src, dst, (int)ddepth );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double PSNR(Mat src1, Mat src2)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_PSNR_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_PSNR_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj)
{
    static const char method_name[] = "imgproc::PSNR_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        double _retval_ = cv::PSNR( src1, src2 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void Scharr(Mat src, Mat& dst, int ddepth, int dx, int dy, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Scharr_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Scharr_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jint dx, jint dy, jdouble scale, jdouble delta, jint borderType)
{
    static const char method_name[] = "imgproc::Scharr_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Scharr( src, dst, (int)ddepth, (int)dx, (int)dy, (double)scale, (double)delta, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Scharr_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Scharr_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jint dx, jint dy, jdouble scale, jdouble delta)
{
    static const char method_name[] = "imgproc::Scharr_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Scharr( src, dst, (int)ddepth, (int)dx, (int)dy, (double)scale, (double)delta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Scharr_12 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Scharr_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jint dx, jint dy)
{
    static const char method_name[] = "imgproc::Scharr_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Scharr( src, dst, (int)ddepth, (int)dx, (int)dy );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void Sobel(Mat src, Mat& dst, int ddepth, int dx, int dy, int ksize = 3, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Sobel_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Sobel_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jint dx, jint dy, jint ksize, jdouble scale, jdouble delta, jint borderType)
{
    static const char method_name[] = "imgproc::Sobel_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Sobel( src, dst, (int)ddepth, (int)dx, (int)dy, (int)ksize, (double)scale, (double)delta, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Sobel_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Sobel_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jint dx, jint dy, jint ksize, jdouble scale, jdouble delta)
{
    static const char method_name[] = "imgproc::Sobel_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Sobel( src, dst, (int)ddepth, (int)dx, (int)dy, (int)ksize, (double)scale, (double)delta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Sobel_12 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_Sobel_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jint dx, jint dy)
{
    static const char method_name[] = "imgproc::Sobel_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::Sobel( src, dst, (int)ddepth, (int)dx, (int)dy );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void accumulate(Mat src, Mat& dst, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulate_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulate_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "imgproc::accumulate_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::accumulate( src, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulate_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulate_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "imgproc::accumulate_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::accumulate( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void accumulateProduct(Mat src1, Mat src2, Mat& dst, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateProduct_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateProduct_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "imgproc::accumulateProduct_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::accumulateProduct( src1, src2, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateProduct_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateProduct_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "imgproc::accumulateProduct_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::accumulateProduct( src1, src2, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void accumulateSquare(Mat src, Mat& dst, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateSquare_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateSquare_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "imgproc::accumulateSquare_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::accumulateSquare( src, dst, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateSquare_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateSquare_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "imgproc::accumulateSquare_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::accumulateSquare( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void accumulateWeighted(Mat src, Mat& dst, double alpha, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateWeighted_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateWeighted_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble alpha, jlong mask_nativeObj)
{
    static const char method_name[] = "imgproc::accumulateWeighted_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::accumulateWeighted( src, dst, (double)alpha, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateWeighted_11 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_accumulateWeighted_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble alpha)
{
    static const char method_name[] = "imgproc::accumulateWeighted_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::accumulateWeighted( src, dst, (double)alpha );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void adaptiveBilateralFilter(Mat src, Mat& dst, Size ksize, double sigmaSpace, double maxSigmaColor = 20.0, Point anchor = Point(-1, -1), int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_adaptiveBilateralFilter_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_adaptiveBilateralFilter_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble ksize_width, jdouble ksize_height, jdouble sigmaSpace, jdouble maxSigmaColor, jdouble anchor_x, jdouble anchor_y, jint borderType)
{
    static const char method_name[] = "imgproc::adaptiveBilateralFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::adaptiveBilateralFilter( src, dst, ksize, (double)sigmaSpace, (double)maxSigmaColor, anchor, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_adaptiveBilateralFilter_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_adaptiveBilateralFilter_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble ksize_width, jdouble ksize_height, jdouble sigmaSpace, jdouble maxSigmaColor, jdouble anchor_x, jdouble anchor_y)
{
    static const char method_name[] = "imgproc::adaptiveBilateralFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::adaptiveBilateralFilter( src, dst, ksize, (double)sigmaSpace, (double)maxSigmaColor, anchor );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_adaptiveBilateralFilter_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_adaptiveBilateralFilter_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble ksize_width, jdouble ksize_height, jdouble sigmaSpace)
{
    static const char method_name[] = "imgproc::adaptiveBilateralFilter_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        cv::adaptiveBilateralFilter( src, dst, ksize, (double)sigmaSpace );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void adaptiveThreshold(Mat src, Mat& dst, double maxValue, int adaptiveMethod, int thresholdType, int blockSize, double C)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_adaptiveThreshold_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jint, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_adaptiveThreshold_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble maxValue, jint adaptiveMethod, jint thresholdType, jint blockSize, jdouble C)
{
    static const char method_name[] = "imgproc::adaptiveThreshold_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::adaptiveThreshold( src, dst, (double)maxValue, (int)adaptiveMethod, (int)thresholdType, (int)blockSize, (double)C );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void approxPolyDP(vector_Point2f curve, vector_Point2f& approxCurve, double epsilon, bool closed)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_approxPolyDP_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_approxPolyDP_10
  (JNIEnv* env, jclass , jlong curve_mat_nativeObj, jlong approxCurve_mat_nativeObj, jdouble epsilon, jboolean closed)
{
    static const char method_name[] = "imgproc::approxPolyDP_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> curve;
        Mat& curve_mat = *((Mat*)curve_mat_nativeObj);
        Mat_to_vector_Point2f( curve_mat, curve );
        vector<Point2f> approxCurve;
        Mat& approxCurve_mat = *((Mat*)approxCurve_mat_nativeObj);
        cv::approxPolyDP( curve, approxCurve, (double)epsilon, (bool)closed );
        vector_Point2f_to_Mat( approxCurve, approxCurve_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double arcLength(vector_Point2f curve, bool closed)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_arcLength_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_arcLength_10
  (JNIEnv* env, jclass , jlong curve_mat_nativeObj, jboolean closed)
{
    static const char method_name[] = "imgproc::arcLength_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> curve;
        Mat& curve_mat = *((Mat*)curve_mat_nativeObj);
        Mat_to_vector_Point2f( curve_mat, curve );
        double _retval_ = cv::arcLength( curve, (bool)closed );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void bilateralFilter(Mat src, Mat& dst, int d, double sigmaColor, double sigmaSpace, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_bilateralFilter_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_bilateralFilter_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint d, jdouble sigmaColor, jdouble sigmaSpace, jint borderType)
{
    static const char method_name[] = "imgproc::bilateralFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::bilateralFilter( src, dst, (int)d, (double)sigmaColor, (double)sigmaSpace, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_bilateralFilter_11 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_bilateralFilter_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint d, jdouble sigmaColor, jdouble sigmaSpace)
{
    static const char method_name[] = "imgproc::bilateralFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::bilateralFilter( src, dst, (int)d, (double)sigmaColor, (double)sigmaSpace );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void blur(Mat src, Mat& dst, Size ksize, Point anchor = Point(-1,-1), int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_blur_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_blur_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble ksize_width, jdouble ksize_height, jdouble anchor_x, jdouble anchor_y, jint borderType)
{
    static const char method_name[] = "imgproc::blur_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::blur( src, dst, ksize, anchor, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_blur_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_blur_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble ksize_width, jdouble ksize_height, jdouble anchor_x, jdouble anchor_y)
{
    static const char method_name[] = "imgproc::blur_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::blur( src, dst, ksize, anchor );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_blur_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_blur_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble ksize_width, jdouble ksize_height)
{
    static const char method_name[] = "imgproc::blur_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        cv::blur( src, dst, ksize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  int borderInterpolate(int p, int len, int borderType)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Imgproc_borderInterpolate_10 (JNIEnv*, jclass, jint, jint, jint);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Imgproc_borderInterpolate_10
  (JNIEnv* env, jclass , jint p, jint len, jint borderType)
{
    static const char method_name[] = "imgproc::borderInterpolate_10()";
    try {
        LOGD("%s", method_name);
        
        int _retval_ = cv::borderInterpolate( (int)p, (int)len, (int)borderType );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Rect boundingRect(vector_Point points)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_boundingRect_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_boundingRect_10
  (JNIEnv* env, jclass , jlong points_mat_nativeObj)
{
    static const char method_name[] = "imgproc::boundingRect_10()";
    try {
        LOGD("%s", method_name);
        vector<Point> points;
        Mat& points_mat = *((Mat*)points_mat_nativeObj);
        Mat_to_vector_Point( points_mat, points );
        Rect _retval_ = cv::boundingRect( points );
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
//  void boxFilter(Mat src, Mat& dst, int ddepth, Size ksize, Point anchor = Point(-1,-1), bool normalize = true, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_boxFilter_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jdouble, jdouble, jboolean, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_boxFilter_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jdouble ksize_width, jdouble ksize_height, jdouble anchor_x, jdouble anchor_y, jboolean normalize, jint borderType)
{
    static const char method_name[] = "imgproc::boxFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::boxFilter( src, dst, (int)ddepth, ksize, anchor, (bool)normalize, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_boxFilter_11 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_boxFilter_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jdouble ksize_width, jdouble ksize_height, jdouble anchor_x, jdouble anchor_y, jboolean normalize)
{
    static const char method_name[] = "imgproc::boxFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::boxFilter( src, dst, (int)ddepth, ksize, anchor, (bool)normalize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_boxFilter_12 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_boxFilter_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jdouble ksize_width, jdouble ksize_height)
{
    static const char method_name[] = "imgproc::boxFilter_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size ksize((int)ksize_width, (int)ksize_height);
        cv::boxFilter( src, dst, (int)ddepth, ksize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void calcBackProject(vector_Mat images, vector_int channels, Mat hist, Mat& dst, vector_float ranges, double scale)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_calcBackProject_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_calcBackProject_10
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jlong channels_mat_nativeObj, jlong hist_nativeObj, jlong dst_nativeObj, jlong ranges_mat_nativeObj, jdouble scale)
{
    static const char method_name[] = "imgproc::calcBackProject_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        vector<int> channels;
        Mat& channels_mat = *((Mat*)channels_mat_nativeObj);
        Mat_to_vector_int( channels_mat, channels );
        vector<float> ranges;
        Mat& ranges_mat = *((Mat*)ranges_mat_nativeObj);
        Mat_to_vector_float( ranges_mat, ranges );
        Mat& hist = *((Mat*)hist_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::calcBackProject( images, channels, hist, dst, ranges, (double)scale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void calcHist(vector_Mat images, vector_int channels, Mat mask, Mat& hist, vector_int histSize, vector_float ranges, bool accumulate = false)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_calcHist_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_calcHist_10
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jlong channels_mat_nativeObj, jlong mask_nativeObj, jlong hist_nativeObj, jlong histSize_mat_nativeObj, jlong ranges_mat_nativeObj, jboolean accumulate)
{
    static const char method_name[] = "imgproc::calcHist_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        vector<int> channels;
        Mat& channels_mat = *((Mat*)channels_mat_nativeObj);
        Mat_to_vector_int( channels_mat, channels );
        vector<int> histSize;
        Mat& histSize_mat = *((Mat*)histSize_mat_nativeObj);
        Mat_to_vector_int( histSize_mat, histSize );
        vector<float> ranges;
        Mat& ranges_mat = *((Mat*)ranges_mat_nativeObj);
        Mat_to_vector_float( ranges_mat, ranges );
        Mat& mask = *((Mat*)mask_nativeObj);
        Mat& hist = *((Mat*)hist_nativeObj);
        cv::calcHist( images, channels, mask, hist, histSize, ranges, (bool)accumulate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_calcHist_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_calcHist_11
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jlong channels_mat_nativeObj, jlong mask_nativeObj, jlong hist_nativeObj, jlong histSize_mat_nativeObj, jlong ranges_mat_nativeObj)
{
    static const char method_name[] = "imgproc::calcHist_11()";
    try {
        LOGD("%s", method_name);
        vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        vector<int> channels;
        Mat& channels_mat = *((Mat*)channels_mat_nativeObj);
        Mat_to_vector_int( channels_mat, channels );
        vector<int> histSize;
        Mat& histSize_mat = *((Mat*)histSize_mat_nativeObj);
        Mat_to_vector_int( histSize_mat, histSize );
        vector<float> ranges;
        Mat& ranges_mat = *((Mat*)ranges_mat_nativeObj);
        Mat_to_vector_float( ranges_mat, ranges );
        Mat& mask = *((Mat*)mask_nativeObj);
        Mat& hist = *((Mat*)hist_nativeObj);
        cv::calcHist( images, channels, mask, hist, histSize, ranges );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double compareHist(Mat H1, Mat H2, int method)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_compareHist_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_compareHist_10
  (JNIEnv* env, jclass , jlong H1_nativeObj, jlong H2_nativeObj, jint method)
{
    static const char method_name[] = "imgproc::compareHist_10()";
    try {
        LOGD("%s", method_name);
        Mat& H1 = *((Mat*)H1_nativeObj);
        Mat& H2 = *((Mat*)H2_nativeObj);
        double _retval_ = cv::compareHist( H1, H2, (int)method );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double contourArea(Mat contour, bool oriented = false)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_contourArea_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_contourArea_10
  (JNIEnv* env, jclass , jlong contour_nativeObj, jboolean oriented)
{
    static const char method_name[] = "imgproc::contourArea_10()";
    try {
        LOGD("%s", method_name);
        Mat& contour = *((Mat*)contour_nativeObj);
        double _retval_ = cv::contourArea( contour, (bool)oriented );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_contourArea_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_contourArea_11
  (JNIEnv* env, jclass , jlong contour_nativeObj)
{
    static const char method_name[] = "imgproc::contourArea_11()";
    try {
        LOGD("%s", method_name);
        Mat& contour = *((Mat*)contour_nativeObj);
        double _retval_ = cv::contourArea( contour );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void convertMaps(Mat map1, Mat map2, Mat& dstmap1, Mat& dstmap2, int dstmap1type, bool nninterpolation = false)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convertMaps_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convertMaps_10
  (JNIEnv* env, jclass , jlong map1_nativeObj, jlong map2_nativeObj, jlong dstmap1_nativeObj, jlong dstmap2_nativeObj, jint dstmap1type, jboolean nninterpolation)
{
    static const char method_name[] = "imgproc::convertMaps_10()";
    try {
        LOGD("%s", method_name);
        Mat& map1 = *((Mat*)map1_nativeObj);
        Mat& map2 = *((Mat*)map2_nativeObj);
        Mat& dstmap1 = *((Mat*)dstmap1_nativeObj);
        Mat& dstmap2 = *((Mat*)dstmap2_nativeObj);
        cv::convertMaps( map1, map2, dstmap1, dstmap2, (int)dstmap1type, (bool)nninterpolation );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convertMaps_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convertMaps_11
  (JNIEnv* env, jclass , jlong map1_nativeObj, jlong map2_nativeObj, jlong dstmap1_nativeObj, jlong dstmap2_nativeObj, jint dstmap1type)
{
    static const char method_name[] = "imgproc::convertMaps_11()";
    try {
        LOGD("%s", method_name);
        Mat& map1 = *((Mat*)map1_nativeObj);
        Mat& map2 = *((Mat*)map2_nativeObj);
        Mat& dstmap1 = *((Mat*)dstmap1_nativeObj);
        Mat& dstmap2 = *((Mat*)dstmap2_nativeObj);
        cv::convertMaps( map1, map2, dstmap1, dstmap2, (int)dstmap1type );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void convexHull(vector_Point points, vector_int& hull, bool clockwise = false,  _hidden_  returnPoints = true)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convexHull_10 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convexHull_10
  (JNIEnv* env, jclass , jlong points_mat_nativeObj, jlong hull_mat_nativeObj, jboolean clockwise)
{
    static const char method_name[] = "imgproc::convexHull_10()";
    try {
        LOGD("%s", method_name);
        vector<Point> points;
        Mat& points_mat = *((Mat*)points_mat_nativeObj);
        Mat_to_vector_Point( points_mat, points );
        vector<int> hull;
        Mat& hull_mat = *((Mat*)hull_mat_nativeObj);
        cv::convexHull( points, hull, (bool)clockwise, true );
        vector_int_to_Mat( hull, hull_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convexHull_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convexHull_11
  (JNIEnv* env, jclass , jlong points_mat_nativeObj, jlong hull_mat_nativeObj)
{
    static const char method_name[] = "imgproc::convexHull_11()";
    try {
        LOGD("%s", method_name);
        vector<Point> points;
        Mat& points_mat = *((Mat*)points_mat_nativeObj);
        Mat_to_vector_Point( points_mat, points );
        vector<int> hull;
        Mat& hull_mat = *((Mat*)hull_mat_nativeObj);
        cv::convexHull( points, hull );
        vector_int_to_Mat( hull, hull_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void convexityDefects(vector_Point contour, vector_int convexhull, vector_Vec4i& convexityDefects)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convexityDefects_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_convexityDefects_10
  (JNIEnv* env, jclass , jlong contour_mat_nativeObj, jlong convexhull_mat_nativeObj, jlong convexityDefects_mat_nativeObj)
{
    static const char method_name[] = "imgproc::convexityDefects_10()";
    try {
        LOGD("%s", method_name);
        vector<Point> contour;
        Mat& contour_mat = *((Mat*)contour_mat_nativeObj);
        Mat_to_vector_Point( contour_mat, contour );
        vector<int> convexhull;
        Mat& convexhull_mat = *((Mat*)convexhull_mat_nativeObj);
        Mat_to_vector_int( convexhull_mat, convexhull );
        vector<Vec4i> convexityDefects;
        Mat& convexityDefects_mat = *((Mat*)convexityDefects_mat_nativeObj);
        cv::convexityDefects( contour, convexhull, convexityDefects );
        vector_Vec4i_to_Mat( convexityDefects, convexityDefects_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void copyMakeBorder(Mat src, Mat& dst, int top, int bottom, int left, int right, int borderType, Scalar value = Scalar())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_copyMakeBorder_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_copyMakeBorder_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint top, jint bottom, jint left, jint right, jint borderType, jdouble value_val0, jdouble value_val1, jdouble value_val2, jdouble value_val3)
{
    static const char method_name[] = "imgproc::copyMakeBorder_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Scalar value(value_val0, value_val1, value_val2, value_val3);
        cv::copyMakeBorder( src, dst, (int)top, (int)bottom, (int)left, (int)right, (int)borderType, value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_copyMakeBorder_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_copyMakeBorder_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint top, jint bottom, jint left, jint right, jint borderType)
{
    static const char method_name[] = "imgproc::copyMakeBorder_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::copyMakeBorder( src, dst, (int)top, (int)bottom, (int)left, (int)right, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void cornerEigenValsAndVecs(Mat src, Mat& dst, int blockSize, int ksize, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerEigenValsAndVecs_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerEigenValsAndVecs_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint blockSize, jint ksize, jint borderType)
{
    static const char method_name[] = "imgproc::cornerEigenValsAndVecs_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::cornerEigenValsAndVecs( src, dst, (int)blockSize, (int)ksize, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerEigenValsAndVecs_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerEigenValsAndVecs_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint blockSize, jint ksize)
{
    static const char method_name[] = "imgproc::cornerEigenValsAndVecs_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::cornerEigenValsAndVecs( src, dst, (int)blockSize, (int)ksize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void cornerHarris(Mat src, Mat& dst, int blockSize, int ksize, double k, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerHarris_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerHarris_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint blockSize, jint ksize, jdouble k, jint borderType)
{
    static const char method_name[] = "imgproc::cornerHarris_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::cornerHarris( src, dst, (int)blockSize, (int)ksize, (double)k, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerHarris_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerHarris_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint blockSize, jint ksize, jdouble k)
{
    static const char method_name[] = "imgproc::cornerHarris_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::cornerHarris( src, dst, (int)blockSize, (int)ksize, (double)k );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void cornerMinEigenVal(Mat src, Mat& dst, int blockSize, int ksize = 3, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerMinEigenVal_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerMinEigenVal_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint blockSize, jint ksize, jint borderType)
{
    static const char method_name[] = "imgproc::cornerMinEigenVal_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::cornerMinEigenVal( src, dst, (int)blockSize, (int)ksize, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerMinEigenVal_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerMinEigenVal_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint blockSize, jint ksize)
{
    static const char method_name[] = "imgproc::cornerMinEigenVal_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::cornerMinEigenVal( src, dst, (int)blockSize, (int)ksize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerMinEigenVal_12 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerMinEigenVal_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint blockSize)
{
    static const char method_name[] = "imgproc::cornerMinEigenVal_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::cornerMinEigenVal( src, dst, (int)blockSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void cornerSubPix(Mat image, vector_Point2f& corners, Size winSize, Size zeroZone, TermCriteria criteria)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerSubPix_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cornerSubPix_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong corners_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jdouble zeroZone_width, jdouble zeroZone_height, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "imgproc::cornerSubPix_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Point2f( corners_mat, corners );
        Mat& image = *((Mat*)image_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        Size zeroZone((int)zeroZone_width, (int)zeroZone_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        cv::cornerSubPix( image, corners, winSize, zeroZone, criteria );
        vector_Point2f_to_Mat( corners, corners_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void createHanningWindow(Mat& dst, Size winSize, int type)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_createHanningWindow_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_createHanningWindow_10
  (JNIEnv* env, jclass , jlong dst_nativeObj, jdouble winSize_width, jdouble winSize_height, jint type)
{
    static const char method_name[] = "imgproc::createHanningWindow_10()";
    try {
        LOGD("%s", method_name);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        cv::createHanningWindow( dst, winSize, (int)type );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void cvtColor(Mat src, Mat& dst, int code, int dstCn = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cvtColor_10 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cvtColor_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint code, jint dstCn)
{
    static const char method_name[] = "imgproc::cvtColor_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::cvtColor( src, dst, (int)code, (int)dstCn );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cvtColor_11 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_cvtColor_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint code)
{
    static const char method_name[] = "imgproc::cvtColor_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::cvtColor( src, dst, (int)code );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void dilate(Mat src, Mat& dst, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, int borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_dilate_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_dilate_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong kernel_nativeObj, jdouble anchor_x, jdouble anchor_y, jint iterations, jint borderType, jdouble borderValue_val0, jdouble borderValue_val1, jdouble borderValue_val2, jdouble borderValue_val3)
{
    static const char method_name[] = "imgproc::dilate_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        Scalar borderValue(borderValue_val0, borderValue_val1, borderValue_val2, borderValue_val3);
        cv::dilate( src, dst, kernel, anchor, (int)iterations, (int)borderType, borderValue );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_dilate_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_dilate_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong kernel_nativeObj, jdouble anchor_x, jdouble anchor_y, jint iterations)
{
    static const char method_name[] = "imgproc::dilate_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::dilate( src, dst, kernel, anchor, (int)iterations );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_dilate_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_dilate_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong kernel_nativeObj)
{
    static const char method_name[] = "imgproc::dilate_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        cv::dilate( src, dst, kernel );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void distanceTransform(Mat src, Mat& dst, int distanceType, int maskSize)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_distanceTransform_10 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_distanceTransform_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint distanceType, jint maskSize)
{
    static const char method_name[] = "imgproc::distanceTransform_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::distanceTransform( src, dst, (int)distanceType, (int)maskSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void distanceTransform(Mat src, Mat& dst, Mat& labels, int distanceType, int maskSize, int labelType = DIST_LABEL_CCOMP)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_distanceTransformWithLabels_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_distanceTransformWithLabels_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong labels_nativeObj, jint distanceType, jint maskSize, jint labelType)
{
    static const char method_name[] = "imgproc::distanceTransformWithLabels_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& labels = *((Mat*)labels_nativeObj);
        cv::distanceTransform( src, dst, labels, (int)distanceType, (int)maskSize, (int)labelType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_distanceTransformWithLabels_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_distanceTransformWithLabels_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong labels_nativeObj, jint distanceType, jint maskSize)
{
    static const char method_name[] = "imgproc::distanceTransformWithLabels_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& labels = *((Mat*)labels_nativeObj);
        cv::distanceTransform( src, dst, labels, (int)distanceType, (int)maskSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawContours(Mat& image, vector_vector_Point contours, int contourIdx, Scalar color, int thickness = 1, int lineType = 8, Mat hierarchy = Mat(), int maxLevel = INT_MAX, Point offset = Point())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_drawContours_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jdouble, jdouble, jint, jint, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_drawContours_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong contours_mat_nativeObj, jint contourIdx, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness, jint lineType, jlong hierarchy_nativeObj, jint maxLevel, jdouble offset_x, jdouble offset_y)
{
    static const char method_name[] = "imgproc::drawContours_10()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > contours;
        Mat& contours_mat = *((Mat*)contours_mat_nativeObj);
        Mat_to_vector_vector_Point( contours_mat, contours );
        Mat& image = *((Mat*)image_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        Mat& hierarchy = *((Mat*)hierarchy_nativeObj);
        Point offset((int)offset_x, (int)offset_y);
        cv::drawContours( image, contours, (int)contourIdx, color, (int)thickness, (int)lineType, hierarchy, (int)maxLevel, offset );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_drawContours_11 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_drawContours_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong contours_mat_nativeObj, jint contourIdx, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint thickness)
{
    static const char method_name[] = "imgproc::drawContours_11()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > contours;
        Mat& contours_mat = *((Mat*)contours_mat_nativeObj);
        Mat_to_vector_vector_Point( contours_mat, contours );
        Mat& image = *((Mat*)image_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::drawContours( image, contours, (int)contourIdx, color, (int)thickness );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_drawContours_12 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_drawContours_12
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong contours_mat_nativeObj, jint contourIdx, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3)
{
    static const char method_name[] = "imgproc::drawContours_12()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > contours;
        Mat& contours_mat = *((Mat*)contours_mat_nativeObj);
        Mat_to_vector_vector_Point( contours_mat, contours );
        Mat& image = *((Mat*)image_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::drawContours( image, contours, (int)contourIdx, color );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void equalizeHist(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_equalizeHist_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_equalizeHist_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "imgproc::equalizeHist_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::equalizeHist( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void erode(Mat src, Mat& dst, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, int borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_erode_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_erode_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong kernel_nativeObj, jdouble anchor_x, jdouble anchor_y, jint iterations, jint borderType, jdouble borderValue_val0, jdouble borderValue_val1, jdouble borderValue_val2, jdouble borderValue_val3)
{
    static const char method_name[] = "imgproc::erode_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        Scalar borderValue(borderValue_val0, borderValue_val1, borderValue_val2, borderValue_val3);
        cv::erode( src, dst, kernel, anchor, (int)iterations, (int)borderType, borderValue );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_erode_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_erode_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong kernel_nativeObj, jdouble anchor_x, jdouble anchor_y, jint iterations)
{
    static const char method_name[] = "imgproc::erode_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::erode( src, dst, kernel, anchor, (int)iterations );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_erode_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_erode_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong kernel_nativeObj)
{
    static const char method_name[] = "imgproc::erode_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        cv::erode( src, dst, kernel );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void filter2D(Mat src, Mat& dst, int ddepth, Mat kernel, Point anchor = Point(-1,-1), double delta = 0, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_filter2D_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_filter2D_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jlong kernel_nativeObj, jdouble anchor_x, jdouble anchor_y, jdouble delta, jint borderType)
{
    static const char method_name[] = "imgproc::filter2D_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::filter2D( src, dst, (int)ddepth, kernel, anchor, (double)delta, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_filter2D_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_filter2D_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jlong kernel_nativeObj, jdouble anchor_x, jdouble anchor_y, jdouble delta)
{
    static const char method_name[] = "imgproc::filter2D_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::filter2D( src, dst, (int)ddepth, kernel, anchor, (double)delta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_filter2D_12 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_filter2D_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jlong kernel_nativeObj)
{
    static const char method_name[] = "imgproc::filter2D_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        cv::filter2D( src, dst, (int)ddepth, kernel );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void findContours(Mat& image, vector_vector_Point& contours, Mat& hierarchy, int mode, int method, Point offset = Point())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_findContours_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_findContours_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong contours_mat_nativeObj, jlong hierarchy_nativeObj, jint mode, jint method, jdouble offset_x, jdouble offset_y)
{
    static const char method_name[] = "imgproc::findContours_10()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > contours;
        Mat& contours_mat = *((Mat*)contours_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& hierarchy = *((Mat*)hierarchy_nativeObj);
        Point offset((int)offset_x, (int)offset_y);
        cv::findContours( image, contours, hierarchy, (int)mode, (int)method, offset );
        vector_vector_Point_to_Mat( contours, contours_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_findContours_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_findContours_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong contours_mat_nativeObj, jlong hierarchy_nativeObj, jint mode, jint method)
{
    static const char method_name[] = "imgproc::findContours_11()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > contours;
        Mat& contours_mat = *((Mat*)contours_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& hierarchy = *((Mat*)hierarchy_nativeObj);
        cv::findContours( image, contours, hierarchy, (int)mode, (int)method );
        vector_vector_Point_to_Mat( contours, contours_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  RotatedRect fitEllipse(vector_Point2f points)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_fitEllipse_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_fitEllipse_10
  (JNIEnv* env, jclass , jlong points_mat_nativeObj)
{
    static const char method_name[] = "imgproc::fitEllipse_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> points;
        Mat& points_mat = *((Mat*)points_mat_nativeObj);
        Mat_to_vector_Point2f( points_mat, points );
        RotatedRect _retval_ = cv::fitEllipse( points );
        jdoubleArray _da_retval_ = env->NewDoubleArray(5);  jdouble _tmp_retval_[5] = {_retval_.center.x, _retval_.center.y, _retval_.size.width, _retval_.size.height, _retval_.angle}; env->SetDoubleArrayRegion(_da_retval_, 0, 5, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void fitLine(Mat points, Mat& line, int distType, double param, double reps, double aeps)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_fitLine_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_fitLine_10
  (JNIEnv* env, jclass , jlong points_nativeObj, jlong line_nativeObj, jint distType, jdouble param, jdouble reps, jdouble aeps)
{
    static const char method_name[] = "imgproc::fitLine_10()";
    try {
        LOGD("%s", method_name);
        Mat& points = *((Mat*)points_nativeObj);
        Mat& line = *((Mat*)line_nativeObj);
        cv::fitLine( points, line, (int)distType, (double)param, (double)reps, (double)aeps );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  int floodFill(Mat& image, Mat& mask, Point seedPoint, Scalar newVal, Rect* rect = 0, Scalar loDiff = Scalar(), Scalar upDiff = Scalar(), int flags = 4)
//

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Imgproc_floodFill_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdoubleArray, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Imgproc_floodFill_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong mask_nativeObj, jdouble seedPoint_x, jdouble seedPoint_y, jdouble newVal_val0, jdouble newVal_val1, jdouble newVal_val2, jdouble newVal_val3, jdoubleArray rect_out, jdouble loDiff_val0, jdouble loDiff_val1, jdouble loDiff_val2, jdouble loDiff_val3, jdouble upDiff_val0, jdouble upDiff_val1, jdouble upDiff_val2, jdouble upDiff_val3, jint flags)
{
    static const char method_name[] = "imgproc::floodFill_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        Point seedPoint((int)seedPoint_x, (int)seedPoint_y);
        Scalar newVal(newVal_val0, newVal_val1, newVal_val2, newVal_val3);
        Rect rect;
        Scalar loDiff(loDiff_val0, loDiff_val1, loDiff_val2, loDiff_val3);
        Scalar upDiff(upDiff_val0, upDiff_val1, upDiff_val2, upDiff_val3);
        int _retval_ = cv::floodFill( image, mask, seedPoint, newVal, &rect, loDiff, upDiff, (int)flags );
        jdouble tmp_rect[4] = {rect.x, rect.y, rect.width, rect.height}; env->SetDoubleArrayRegion(rect_out, 0, 4, tmp_rect);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Imgproc_floodFill_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jint JNICALL Java_org_opencv_imgproc_Imgproc_floodFill_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong mask_nativeObj, jdouble seedPoint_x, jdouble seedPoint_y, jdouble newVal_val0, jdouble newVal_val1, jdouble newVal_val2, jdouble newVal_val3)
{
    static const char method_name[] = "imgproc::floodFill_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        Point seedPoint((int)seedPoint_x, (int)seedPoint_y);
        Scalar newVal(newVal_val0, newVal_val1, newVal_val2, newVal_val3);
        int _retval_ = cv::floodFill( image, mask, seedPoint, newVal );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getAffineTransform(vector_Point2f src, vector_Point2f dst)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getAffineTransform_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getAffineTransform_10
  (JNIEnv* env, jclass , jlong src_mat_nativeObj, jlong dst_mat_nativeObj)
{
    static const char method_name[] = "imgproc::getAffineTransform_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Point2f( src_mat, src );
        vector<Point2f> dst;
        Mat& dst_mat = *((Mat*)dst_mat_nativeObj);
        Mat_to_vector_Point2f( dst_mat, dst );
        Mat _retval_ = cv::getAffineTransform( src, dst );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getDefaultNewCameraMatrix(Mat cameraMatrix, Size imgsize = Size(), bool centerPrincipalPoint = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getDefaultNewCameraMatrix_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getDefaultNewCameraMatrix_10
  (JNIEnv* env, jclass , jlong cameraMatrix_nativeObj, jdouble imgsize_width, jdouble imgsize_height, jboolean centerPrincipalPoint)
{
    static const char method_name[] = "imgproc::getDefaultNewCameraMatrix_10()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Size imgsize((int)imgsize_width, (int)imgsize_height);
        Mat _retval_ = cv::getDefaultNewCameraMatrix( cameraMatrix, imgsize, (bool)centerPrincipalPoint );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getDefaultNewCameraMatrix_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getDefaultNewCameraMatrix_11
  (JNIEnv* env, jclass , jlong cameraMatrix_nativeObj)
{
    static const char method_name[] = "imgproc::getDefaultNewCameraMatrix_11()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat _retval_ = cv::getDefaultNewCameraMatrix( cameraMatrix );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void getDerivKernels(Mat& kx, Mat& ky, int dx, int dy, int ksize, bool normalize = false, int ktype = CV_32F)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_getDerivKernels_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jboolean, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_getDerivKernels_10
  (JNIEnv* env, jclass , jlong kx_nativeObj, jlong ky_nativeObj, jint dx, jint dy, jint ksize, jboolean normalize, jint ktype)
{
    static const char method_name[] = "imgproc::getDerivKernels_10()";
    try {
        LOGD("%s", method_name);
        Mat& kx = *((Mat*)kx_nativeObj);
        Mat& ky = *((Mat*)ky_nativeObj);
        cv::getDerivKernels( kx, ky, (int)dx, (int)dy, (int)ksize, (bool)normalize, (int)ktype );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_getDerivKernels_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_getDerivKernels_11
  (JNIEnv* env, jclass , jlong kx_nativeObj, jlong ky_nativeObj, jint dx, jint dy, jint ksize)
{
    static const char method_name[] = "imgproc::getDerivKernels_11()";
    try {
        LOGD("%s", method_name);
        Mat& kx = *((Mat*)kx_nativeObj);
        Mat& ky = *((Mat*)ky_nativeObj);
        cv::getDerivKernels( kx, ky, (int)dx, (int)dy, (int)ksize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  Mat getGaborKernel(Size ksize, double sigma, double theta, double lambd, double gamma, double psi = CV_PI*0.5, int ktype = CV_64F)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getGaborKernel_10 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getGaborKernel_10
  (JNIEnv* env, jclass , jdouble ksize_width, jdouble ksize_height, jdouble sigma, jdouble theta, jdouble lambd, jdouble gamma, jdouble psi, jint ktype)
{
    static const char method_name[] = "imgproc::getGaborKernel_10()";
    try {
        LOGD("%s", method_name);
        Size ksize((int)ksize_width, (int)ksize_height);
        Mat _retval_ = cv::getGaborKernel( ksize, (double)sigma, (double)theta, (double)lambd, (double)gamma, (double)psi, (int)ktype );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getGaborKernel_11 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getGaborKernel_11
  (JNIEnv* env, jclass , jdouble ksize_width, jdouble ksize_height, jdouble sigma, jdouble theta, jdouble lambd, jdouble gamma)
{
    static const char method_name[] = "imgproc::getGaborKernel_11()";
    try {
        LOGD("%s", method_name);
        Size ksize((int)ksize_width, (int)ksize_height);
        Mat _retval_ = cv::getGaborKernel( ksize, (double)sigma, (double)theta, (double)lambd, (double)gamma );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getGaussianKernel(int ksize, double sigma, int ktype = CV_64F)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getGaussianKernel_10 (JNIEnv*, jclass, jint, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getGaussianKernel_10
  (JNIEnv* env, jclass , jint ksize, jdouble sigma, jint ktype)
{
    static const char method_name[] = "imgproc::getGaussianKernel_10()";
    try {
        LOGD("%s", method_name);
        
        Mat _retval_ = cv::getGaussianKernel( (int)ksize, (double)sigma, (int)ktype );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getGaussianKernel_11 (JNIEnv*, jclass, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getGaussianKernel_11
  (JNIEnv* env, jclass , jint ksize, jdouble sigma)
{
    static const char method_name[] = "imgproc::getGaussianKernel_11()";
    try {
        LOGD("%s", method_name);
        
        Mat _retval_ = cv::getGaussianKernel( (int)ksize, (double)sigma );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getPerspectiveTransform(Mat src, Mat dst)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getPerspectiveTransform_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getPerspectiveTransform_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "imgproc::getPerspectiveTransform_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat _retval_ = cv::getPerspectiveTransform( src, dst );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void getRectSubPix(Mat image, Size patchSize, Point2f center, Mat& patch, int patchType = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_getRectSubPix_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_getRectSubPix_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble patchSize_width, jdouble patchSize_height, jdouble center_x, jdouble center_y, jlong patch_nativeObj, jint patchType)
{
    static const char method_name[] = "imgproc::getRectSubPix_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size patchSize((int)patchSize_width, (int)patchSize_height);
        Point2f center((float)center_x, (float)center_y);
        Mat& patch = *((Mat*)patch_nativeObj);
        cv::getRectSubPix( image, patchSize, center, patch, (int)patchType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_getRectSubPix_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_getRectSubPix_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble patchSize_width, jdouble patchSize_height, jdouble center_x, jdouble center_y, jlong patch_nativeObj)
{
    static const char method_name[] = "imgproc::getRectSubPix_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size patchSize((int)patchSize_width, (int)patchSize_height);
        Point2f center((float)center_x, (float)center_y);
        Mat& patch = *((Mat*)patch_nativeObj);
        cv::getRectSubPix( image, patchSize, center, patch );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  Mat getRotationMatrix2D(Point2f center, double angle, double scale)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getRotationMatrix2D_10 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getRotationMatrix2D_10
  (JNIEnv* env, jclass , jdouble center_x, jdouble center_y, jdouble angle, jdouble scale)
{
    static const char method_name[] = "imgproc::getRotationMatrix2D_10()";
    try {
        LOGD("%s", method_name);
        Point2f center((float)center_x, (float)center_y);
        Mat _retval_ = cv::getRotationMatrix2D( center, (double)angle, (double)scale );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getStructuringElement(int shape, Size ksize, Point anchor = Point(-1,-1))
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getStructuringElement_10 (JNIEnv*, jclass, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getStructuringElement_10
  (JNIEnv* env, jclass , jint shape, jdouble ksize_width, jdouble ksize_height, jdouble anchor_x, jdouble anchor_y)
{
    static const char method_name[] = "imgproc::getStructuringElement_10()";
    try {
        LOGD("%s", method_name);
        Size ksize((int)ksize_width, (int)ksize_height);
        Point anchor((int)anchor_x, (int)anchor_y);
        Mat _retval_ = cv::getStructuringElement( (int)shape, ksize, anchor );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getStructuringElement_11 (JNIEnv*, jclass, jint, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_getStructuringElement_11
  (JNIEnv* env, jclass , jint shape, jdouble ksize_width, jdouble ksize_height)
{
    static const char method_name[] = "imgproc::getStructuringElement_11()";
    try {
        LOGD("%s", method_name);
        Size ksize((int)ksize_width, (int)ksize_height);
        Mat _retval_ = cv::getStructuringElement( (int)shape, ksize );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void goodFeaturesToTrack(Mat image, vector_Point& corners, int maxCorners, double qualityLevel, double minDistance, Mat mask = Mat(), int blockSize = 3, bool useHarrisDetector = false, double k = 0.04)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_goodFeaturesToTrack_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jlong, jint, jboolean, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_goodFeaturesToTrack_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong corners_mat_nativeObj, jint maxCorners, jdouble qualityLevel, jdouble minDistance, jlong mask_nativeObj, jint blockSize, jboolean useHarrisDetector, jdouble k)
{
    static const char method_name[] = "imgproc::goodFeaturesToTrack_10()";
    try {
        LOGD("%s", method_name);
        vector<Point> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::goodFeaturesToTrack( image, corners, (int)maxCorners, (double)qualityLevel, (double)minDistance, mask, (int)blockSize, (bool)useHarrisDetector, (double)k );
        vector_Point_to_Mat( corners, corners_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_goodFeaturesToTrack_11 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_goodFeaturesToTrack_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong corners_mat_nativeObj, jint maxCorners, jdouble qualityLevel, jdouble minDistance)
{
    static const char method_name[] = "imgproc::goodFeaturesToTrack_11()";
    try {
        LOGD("%s", method_name);
        vector<Point> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        cv::goodFeaturesToTrack( image, corners, (int)maxCorners, (double)qualityLevel, (double)minDistance );
        vector_Point_to_Mat( corners, corners_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void grabCut(Mat img, Mat& mask, Rect rect, Mat& bgdModel, Mat& fgdModel, int iterCount, int mode = GC_EVAL)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_grabCut_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_grabCut_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong mask_nativeObj, jint rect_x, jint rect_y, jint rect_width, jint rect_height, jlong bgdModel_nativeObj, jlong fgdModel_nativeObj, jint iterCount, jint mode)
{
    static const char method_name[] = "imgproc::grabCut_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        Rect rect(rect_x, rect_y, rect_width, rect_height);
        Mat& bgdModel = *((Mat*)bgdModel_nativeObj);
        Mat& fgdModel = *((Mat*)fgdModel_nativeObj);
        cv::grabCut( img, mask, rect, bgdModel, fgdModel, (int)iterCount, (int)mode );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_grabCut_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_grabCut_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong mask_nativeObj, jint rect_x, jint rect_y, jint rect_width, jint rect_height, jlong bgdModel_nativeObj, jlong fgdModel_nativeObj, jint iterCount)
{
    static const char method_name[] = "imgproc::grabCut_11()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        Rect rect(rect_x, rect_y, rect_width, rect_height);
        Mat& bgdModel = *((Mat*)bgdModel_nativeObj);
        Mat& fgdModel = *((Mat*)fgdModel_nativeObj);
        cv::grabCut( img, mask, rect, bgdModel, fgdModel, (int)iterCount );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void initUndistortRectifyMap(Mat cameraMatrix, Mat distCoeffs, Mat R, Mat newCameraMatrix, Size size, int m1type, Mat& map1, Mat& map2)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_initUndistortRectifyMap_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jint, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_initUndistortRectifyMap_10
  (JNIEnv* env, jclass , jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong R_nativeObj, jlong newCameraMatrix_nativeObj, jdouble size_width, jdouble size_height, jint m1type, jlong map1_nativeObj, jlong map2_nativeObj)
{
    static const char method_name[] = "imgproc::initUndistortRectifyMap_10()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& R = *((Mat*)R_nativeObj);
        Mat& newCameraMatrix = *((Mat*)newCameraMatrix_nativeObj);
        Size size((int)size_width, (int)size_height);
        Mat& map1 = *((Mat*)map1_nativeObj);
        Mat& map2 = *((Mat*)map2_nativeObj);
        cv::initUndistortRectifyMap( cameraMatrix, distCoeffs, R, newCameraMatrix, size, (int)m1type, map1, map2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  float initWideAngleProjMap(Mat cameraMatrix, Mat distCoeffs, Size imageSize, int destImageWidth, int m1type, Mat& map1, Mat& map2, int projType = PROJ_SPHERICAL_EQRECT, double alpha = 0)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_imgproc_Imgproc_initWideAngleProjMap_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jint, jlong, jlong, jint, jdouble);

JNIEXPORT jfloat JNICALL Java_org_opencv_imgproc_Imgproc_initWideAngleProjMap_10
  (JNIEnv* env, jclass , jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jint destImageWidth, jint m1type, jlong map1_nativeObj, jlong map2_nativeObj, jint projType, jdouble alpha)
{
    static const char method_name[] = "imgproc::initWideAngleProjMap_10()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& map1 = *((Mat*)map1_nativeObj);
        Mat& map2 = *((Mat*)map2_nativeObj);
        float _retval_ = cv::initWideAngleProjMap( cameraMatrix, distCoeffs, imageSize, (int)destImageWidth, (int)m1type, map1, map2, (int)projType, (double)alpha );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jfloat JNICALL Java_org_opencv_imgproc_Imgproc_initWideAngleProjMap_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jint, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_imgproc_Imgproc_initWideAngleProjMap_11
  (JNIEnv* env, jclass , jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jint destImageWidth, jint m1type, jlong map1_nativeObj, jlong map2_nativeObj)
{
    static const char method_name[] = "imgproc::initWideAngleProjMap_11()";
    try {
        LOGD("%s", method_name);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& map1 = *((Mat*)map1_nativeObj);
        Mat& map2 = *((Mat*)map2_nativeObj);
        float _retval_ = cv::initWideAngleProjMap( cameraMatrix, distCoeffs, imageSize, (int)destImageWidth, (int)m1type, map1, map2 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void integral(Mat src, Mat& sum, int sdepth = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong sum_nativeObj, jint sdepth)
{
    static const char method_name[] = "imgproc::integral_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& sum = *((Mat*)sum_nativeObj);
        cv::integral( src, sum, (int)sdepth );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong sum_nativeObj)
{
    static const char method_name[] = "imgproc::integral_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& sum = *((Mat*)sum_nativeObj);
        cv::integral( src, sum );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void integral(Mat src, Mat& sum, Mat& sqsum, int sdepth = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral2_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral2_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong sum_nativeObj, jlong sqsum_nativeObj, jint sdepth)
{
    static const char method_name[] = "imgproc::integral2_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& sum = *((Mat*)sum_nativeObj);
        Mat& sqsum = *((Mat*)sqsum_nativeObj);
        cv::integral( src, sum, sqsum, (int)sdepth );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral2_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral2_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong sum_nativeObj, jlong sqsum_nativeObj)
{
    static const char method_name[] = "imgproc::integral2_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& sum = *((Mat*)sum_nativeObj);
        Mat& sqsum = *((Mat*)sqsum_nativeObj);
        cv::integral( src, sum, sqsum );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void integral(Mat src, Mat& sum, Mat& sqsum, Mat& tilted, int sdepth = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral3_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral3_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong sum_nativeObj, jlong sqsum_nativeObj, jlong tilted_nativeObj, jint sdepth)
{
    static const char method_name[] = "imgproc::integral3_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& sum = *((Mat*)sum_nativeObj);
        Mat& sqsum = *((Mat*)sqsum_nativeObj);
        Mat& tilted = *((Mat*)tilted_nativeObj);
        cv::integral( src, sum, sqsum, tilted, (int)sdepth );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral3_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_integral3_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong sum_nativeObj, jlong sqsum_nativeObj, jlong tilted_nativeObj)
{
    static const char method_name[] = "imgproc::integral3_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& sum = *((Mat*)sum_nativeObj);
        Mat& sqsum = *((Mat*)sqsum_nativeObj);
        Mat& tilted = *((Mat*)tilted_nativeObj);
        cv::integral( src, sum, sqsum, tilted );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  float intersectConvexConvex(Mat _p1, Mat _p2, Mat& _p12, bool handleNested = true)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_imgproc_Imgproc_intersectConvexConvex_10 (JNIEnv*, jclass, jlong, jlong, jlong, jboolean);

JNIEXPORT jfloat JNICALL Java_org_opencv_imgproc_Imgproc_intersectConvexConvex_10
  (JNIEnv* env, jclass , jlong _p1_nativeObj, jlong _p2_nativeObj, jlong _p12_nativeObj, jboolean handleNested)
{
    static const char method_name[] = "imgproc::intersectConvexConvex_10()";
    try {
        LOGD("%s", method_name);
        Mat& _p1 = *((Mat*)_p1_nativeObj);
        Mat& _p2 = *((Mat*)_p2_nativeObj);
        Mat& _p12 = *((Mat*)_p12_nativeObj);
        float _retval_ = cv::intersectConvexConvex( _p1, _p2, _p12, (bool)handleNested );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jfloat JNICALL Java_org_opencv_imgproc_Imgproc_intersectConvexConvex_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_imgproc_Imgproc_intersectConvexConvex_11
  (JNIEnv* env, jclass , jlong _p1_nativeObj, jlong _p2_nativeObj, jlong _p12_nativeObj)
{
    static const char method_name[] = "imgproc::intersectConvexConvex_11()";
    try {
        LOGD("%s", method_name);
        Mat& _p1 = *((Mat*)_p1_nativeObj);
        Mat& _p2 = *((Mat*)_p2_nativeObj);
        Mat& _p12 = *((Mat*)_p12_nativeObj);
        float _retval_ = cv::intersectConvexConvex( _p1, _p2, _p12 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void invertAffineTransform(Mat M, Mat& iM)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_invertAffineTransform_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_invertAffineTransform_10
  (JNIEnv* env, jclass , jlong M_nativeObj, jlong iM_nativeObj)
{
    static const char method_name[] = "imgproc::invertAffineTransform_10()";
    try {
        LOGD("%s", method_name);
        Mat& M = *((Mat*)M_nativeObj);
        Mat& iM = *((Mat*)iM_nativeObj);
        cv::invertAffineTransform( M, iM );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool isContourConvex(vector_Point contour)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_imgproc_Imgproc_isContourConvex_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgproc_Imgproc_isContourConvex_10
  (JNIEnv* env, jclass , jlong contour_mat_nativeObj)
{
    static const char method_name[] = "imgproc::isContourConvex_10()";
    try {
        LOGD("%s", method_name);
        vector<Point> contour;
        Mat& contour_mat = *((Mat*)contour_mat_nativeObj);
        Mat_to_vector_Point( contour_mat, contour );
        bool _retval_ = cv::isContourConvex( contour );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double matchShapes(Mat contour1, Mat contour2, int method, double parameter)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_matchShapes_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_matchShapes_10
  (JNIEnv* env, jclass , jlong contour1_nativeObj, jlong contour2_nativeObj, jint method, jdouble parameter)
{
    static const char method_name[] = "imgproc::matchShapes_10()";
    try {
        LOGD("%s", method_name);
        Mat& contour1 = *((Mat*)contour1_nativeObj);
        Mat& contour2 = *((Mat*)contour2_nativeObj);
        double _retval_ = cv::matchShapes( contour1, contour2, (int)method, (double)parameter );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void matchTemplate(Mat image, Mat templ, Mat& result, int method)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_matchTemplate_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_matchTemplate_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong templ_nativeObj, jlong result_nativeObj, jint method)
{
    static const char method_name[] = "imgproc::matchTemplate_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& templ = *((Mat*)templ_nativeObj);
        Mat& result = *((Mat*)result_nativeObj);
        cv::matchTemplate( image, templ, result, (int)method );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void medianBlur(Mat src, Mat& dst, int ksize)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_medianBlur_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_medianBlur_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ksize)
{
    static const char method_name[] = "imgproc::medianBlur_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::medianBlur( src, dst, (int)ksize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  RotatedRect minAreaRect(vector_Point2f points)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_minAreaRect_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_minAreaRect_10
  (JNIEnv* env, jclass , jlong points_mat_nativeObj)
{
    static const char method_name[] = "imgproc::minAreaRect_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> points;
        Mat& points_mat = *((Mat*)points_mat_nativeObj);
        Mat_to_vector_Point2f( points_mat, points );
        RotatedRect _retval_ = cv::minAreaRect( points );
        jdoubleArray _da_retval_ = env->NewDoubleArray(5);  jdouble _tmp_retval_[5] = {_retval_.center.x, _retval_.center.y, _retval_.size.width, _retval_.size.height, _retval_.angle}; env->SetDoubleArrayRegion(_da_retval_, 0, 5, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void minEnclosingCircle(vector_Point2f points, Point2f& center, float& radius)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_minEnclosingCircle_10 (JNIEnv*, jclass, jlong, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_minEnclosingCircle_10
  (JNIEnv* env, jclass , jlong points_mat_nativeObj, jdoubleArray center_out, jdoubleArray radius_out)
{
    static const char method_name[] = "imgproc::minEnclosingCircle_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> points;
        Mat& points_mat = *((Mat*)points_mat_nativeObj);
        Mat_to_vector_Point2f( points_mat, points );
        Point2f center;
        float radius;
        cv::minEnclosingCircle( points, center, radius );
        jdouble tmp_center[2] = {center.x, center.y}; env->SetDoubleArrayRegion(center_out, 0, 2, tmp_center);  jdouble tmp_radius[1] = {radius}; env->SetDoubleArrayRegion(radius_out, 0, 1, tmp_radius);
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  Moments moments(Mat array, bool binaryImage = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_moments_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_moments_10
  (JNIEnv* env, jclass , jlong array_nativeObj, jboolean binaryImage)
{
    static const char method_name[] = "imgproc::moments_10()";
    try {
        LOGD("%s", method_name);
        Mat& array = *((Mat*)array_nativeObj);
        Moments _retval_ = cv::moments( array, (bool)binaryImage );
        return (jlong) new Moments(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_moments_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_imgproc_Imgproc_moments_11
  (JNIEnv* env, jclass , jlong array_nativeObj)
{
    static const char method_name[] = "imgproc::moments_11()";
    try {
        LOGD("%s", method_name);
        Mat& array = *((Mat*)array_nativeObj);
        Moments _retval_ = cv::moments( array );
        return (jlong) new Moments(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void morphologyEx(Mat src, Mat& dst, int op, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, int borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_morphologyEx_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jdouble, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_morphologyEx_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint op, jlong kernel_nativeObj, jdouble anchor_x, jdouble anchor_y, jint iterations, jint borderType, jdouble borderValue_val0, jdouble borderValue_val1, jdouble borderValue_val2, jdouble borderValue_val3)
{
    static const char method_name[] = "imgproc::morphologyEx_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        Scalar borderValue(borderValue_val0, borderValue_val1, borderValue_val2, borderValue_val3);
        cv::morphologyEx( src, dst, (int)op, kernel, anchor, (int)iterations, (int)borderType, borderValue );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_morphologyEx_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_morphologyEx_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint op, jlong kernel_nativeObj, jdouble anchor_x, jdouble anchor_y, jint iterations)
{
    static const char method_name[] = "imgproc::morphologyEx_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::morphologyEx( src, dst, (int)op, kernel, anchor, (int)iterations );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_morphologyEx_12 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_morphologyEx_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint op, jlong kernel_nativeObj)
{
    static const char method_name[] = "imgproc::morphologyEx_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernel = *((Mat*)kernel_nativeObj);
        cv::morphologyEx( src, dst, (int)op, kernel );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  Point2d phaseCorrelate(Mat src1, Mat src2, Mat window = Mat())
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_phaseCorrelate_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_phaseCorrelate_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong window_nativeObj)
{
    static const char method_name[] = "imgproc::phaseCorrelate_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& window = *((Mat*)window_nativeObj);
        Point2d _retval_ = cv::phaseCorrelate( src1, src2, window );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.x, _retval_.y}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_phaseCorrelate_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_phaseCorrelate_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj)
{
    static const char method_name[] = "imgproc::phaseCorrelate_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Point2d _retval_ = cv::phaseCorrelate( src1, src2 );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.x, _retval_.y}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Point2d phaseCorrelateRes(Mat src1, Mat src2, Mat window, double* response = 0)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_phaseCorrelateRes_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdoubleArray);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_phaseCorrelateRes_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong window_nativeObj, jdoubleArray response_out)
{
    static const char method_name[] = "imgproc::phaseCorrelateRes_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& window = *((Mat*)window_nativeObj);
        double response;
        Point2d _retval_ = cv::phaseCorrelateRes( src1, src2, window, &response );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.x, _retval_.y}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);  jdouble tmp_response[1] = {response}; env->SetDoubleArrayRegion(response_out, 0, 1, tmp_response);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_phaseCorrelateRes_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_imgproc_Imgproc_phaseCorrelateRes_11
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong window_nativeObj)
{
    static const char method_name[] = "imgproc::phaseCorrelateRes_11()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& window = *((Mat*)window_nativeObj);
        Point2d _retval_ = cv::phaseCorrelateRes( src1, src2, window );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.x, _retval_.y}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double pointPolygonTest(vector_Point2f contour, Point2f pt, bool measureDist)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_pointPolygonTest_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jboolean);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_pointPolygonTest_10
  (JNIEnv* env, jclass , jlong contour_mat_nativeObj, jdouble pt_x, jdouble pt_y, jboolean measureDist)
{
    static const char method_name[] = "imgproc::pointPolygonTest_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> contour;
        Mat& contour_mat = *((Mat*)contour_mat_nativeObj);
        Mat_to_vector_Point2f( contour_mat, contour );
        Point2f pt((float)pt_x, (float)pt_y);
        double _retval_ = cv::pointPolygonTest( contour, pt, (bool)measureDist );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void preCornerDetect(Mat src, Mat& dst, int ksize, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_preCornerDetect_10 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_preCornerDetect_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ksize, jint borderType)
{
    static const char method_name[] = "imgproc::preCornerDetect_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::preCornerDetect( src, dst, (int)ksize, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_preCornerDetect_11 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_preCornerDetect_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ksize)
{
    static const char method_name[] = "imgproc::preCornerDetect_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::preCornerDetect( src, dst, (int)ksize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void pyrDown(Mat src, Mat& dst, Size dstsize = Size(), int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrDown_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrDown_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble dstsize_width, jdouble dstsize_height, jint borderType)
{
    static const char method_name[] = "imgproc::pyrDown_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size dstsize((int)dstsize_width, (int)dstsize_height);
        cv::pyrDown( src, dst, dstsize, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrDown_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrDown_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble dstsize_width, jdouble dstsize_height)
{
    static const char method_name[] = "imgproc::pyrDown_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size dstsize((int)dstsize_width, (int)dstsize_height);
        cv::pyrDown( src, dst, dstsize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrDown_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrDown_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "imgproc::pyrDown_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::pyrDown( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void pyrMeanShiftFiltering(Mat src, Mat& dst, double sp, double sr, int maxLevel = 1, TermCriteria termcrit = TermCriteria( TermCriteria::MAX_ITER+TermCriteria::EPS,5,1))
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrMeanShiftFiltering_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrMeanShiftFiltering_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble sp, jdouble sr, jint maxLevel, jint termcrit_type, jint termcrit_maxCount, jdouble termcrit_epsilon)
{
    static const char method_name[] = "imgproc::pyrMeanShiftFiltering_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        TermCriteria termcrit(termcrit_type, termcrit_maxCount, termcrit_epsilon);
        cv::pyrMeanShiftFiltering( src, dst, (double)sp, (double)sr, (int)maxLevel, termcrit );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrMeanShiftFiltering_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrMeanShiftFiltering_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble sp, jdouble sr)
{
    static const char method_name[] = "imgproc::pyrMeanShiftFiltering_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::pyrMeanShiftFiltering( src, dst, (double)sp, (double)sr );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void pyrUp(Mat src, Mat& dst, Size dstsize = Size(), int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrUp_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrUp_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble dstsize_width, jdouble dstsize_height, jint borderType)
{
    static const char method_name[] = "imgproc::pyrUp_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size dstsize((int)dstsize_width, (int)dstsize_height);
        cv::pyrUp( src, dst, dstsize, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrUp_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrUp_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble dstsize_width, jdouble dstsize_height)
{
    static const char method_name[] = "imgproc::pyrUp_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size dstsize((int)dstsize_width, (int)dstsize_height);
        cv::pyrUp( src, dst, dstsize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrUp_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_pyrUp_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "imgproc::pyrUp_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::pyrUp( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void remap(Mat src, Mat& dst, Mat map1, Mat map2, int interpolation, int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_remap_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_remap_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong map1_nativeObj, jlong map2_nativeObj, jint interpolation, jint borderMode, jdouble borderValue_val0, jdouble borderValue_val1, jdouble borderValue_val2, jdouble borderValue_val3)
{
    static const char method_name[] = "imgproc::remap_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& map1 = *((Mat*)map1_nativeObj);
        Mat& map2 = *((Mat*)map2_nativeObj);
        Scalar borderValue(borderValue_val0, borderValue_val1, borderValue_val2, borderValue_val3);
        cv::remap( src, dst, map1, map2, (int)interpolation, (int)borderMode, borderValue );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_remap_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_remap_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong map1_nativeObj, jlong map2_nativeObj, jint interpolation)
{
    static const char method_name[] = "imgproc::remap_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& map1 = *((Mat*)map1_nativeObj);
        Mat& map2 = *((Mat*)map2_nativeObj);
        cv::remap( src, dst, map1, map2, (int)interpolation );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void resize(Mat src, Mat& dst, Size dsize, double fx = 0, double fy = 0, int interpolation = INTER_LINEAR)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_resize_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_resize_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble dsize_width, jdouble dsize_height, jdouble fx, jdouble fy, jint interpolation)
{
    static const char method_name[] = "imgproc::resize_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size dsize((int)dsize_width, (int)dsize_height);
        cv::resize( src, dst, dsize, (double)fx, (double)fy, (int)interpolation );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_resize_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_resize_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble dsize_width, jdouble dsize_height)
{
    static const char method_name[] = "imgproc::resize_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Size dsize((int)dsize_width, (int)dsize_height);
        cv::resize( src, dst, dsize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void sepFilter2D(Mat src, Mat& dst, int ddepth, Mat kernelX, Mat kernelY, Point anchor = Point(-1,-1), double delta = 0, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_sepFilter2D_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_sepFilter2D_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jlong kernelX_nativeObj, jlong kernelY_nativeObj, jdouble anchor_x, jdouble anchor_y, jdouble delta, jint borderType)
{
    static const char method_name[] = "imgproc::sepFilter2D_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernelX = *((Mat*)kernelX_nativeObj);
        Mat& kernelY = *((Mat*)kernelY_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::sepFilter2D( src, dst, (int)ddepth, kernelX, kernelY, anchor, (double)delta, (int)borderType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_sepFilter2D_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_sepFilter2D_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jlong kernelX_nativeObj, jlong kernelY_nativeObj, jdouble anchor_x, jdouble anchor_y, jdouble delta)
{
    static const char method_name[] = "imgproc::sepFilter2D_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernelX = *((Mat*)kernelX_nativeObj);
        Mat& kernelY = *((Mat*)kernelY_nativeObj);
        Point anchor((int)anchor_x, (int)anchor_y);
        cv::sepFilter2D( src, dst, (int)ddepth, kernelX, kernelY, anchor, (double)delta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_sepFilter2D_12 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_sepFilter2D_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint ddepth, jlong kernelX_nativeObj, jlong kernelY_nativeObj)
{
    static const char method_name[] = "imgproc::sepFilter2D_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& kernelX = *((Mat*)kernelX_nativeObj);
        Mat& kernelY = *((Mat*)kernelY_nativeObj);
        cv::sepFilter2D( src, dst, (int)ddepth, kernelX, kernelY );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  double threshold(Mat src, Mat& dst, double thresh, double maxval, int type)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_threshold_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_imgproc_Imgproc_threshold_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble thresh, jdouble maxval, jint type)
{
    static const char method_name[] = "imgproc::threshold_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        double _retval_ = cv::threshold( src, dst, (double)thresh, (double)maxval, (int)type );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void undistort(Mat src, Mat& dst, Mat cameraMatrix, Mat distCoeffs, Mat newCameraMatrix = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_undistort_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_undistort_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong newCameraMatrix_nativeObj)
{
    static const char method_name[] = "imgproc::undistort_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& newCameraMatrix = *((Mat*)newCameraMatrix_nativeObj);
        cv::undistort( src, dst, cameraMatrix, distCoeffs, newCameraMatrix );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_undistort_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_undistort_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj)
{
    static const char method_name[] = "imgproc::undistort_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        cv::undistort( src, dst, cameraMatrix, distCoeffs );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void undistortPoints(vector_Point2f src, vector_Point2f& dst, Mat cameraMatrix, Mat distCoeffs, Mat R = Mat(), Mat P = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_undistortPoints_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_undistortPoints_10
  (JNIEnv* env, jclass , jlong src_mat_nativeObj, jlong dst_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong R_nativeObj, jlong P_nativeObj)
{
    static const char method_name[] = "imgproc::undistortPoints_10()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Point2f( src_mat, src );
        vector<Point2f> dst;
        Mat& dst_mat = *((Mat*)dst_mat_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& R = *((Mat*)R_nativeObj);
        Mat& P = *((Mat*)P_nativeObj);
        cv::undistortPoints( src, dst, cameraMatrix, distCoeffs, R, P );
        vector_Point2f_to_Mat( dst, dst_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_undistortPoints_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_undistortPoints_11
  (JNIEnv* env, jclass , jlong src_mat_nativeObj, jlong dst_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj)
{
    static const char method_name[] = "imgproc::undistortPoints_11()";
    try {
        LOGD("%s", method_name);
        vector<Point2f> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Point2f( src_mat, src );
        vector<Point2f> dst;
        Mat& dst_mat = *((Mat*)dst_mat_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        cv::undistortPoints( src, dst, cameraMatrix, distCoeffs );
        vector_Point2f_to_Mat( dst, dst_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void warpAffine(Mat src, Mat& dst, Mat M, Size dsize, int flags = INTER_LINEAR, int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpAffine_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpAffine_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong M_nativeObj, jdouble dsize_width, jdouble dsize_height, jint flags, jint borderMode, jdouble borderValue_val0, jdouble borderValue_val1, jdouble borderValue_val2, jdouble borderValue_val3)
{
    static const char method_name[] = "imgproc::warpAffine_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& M = *((Mat*)M_nativeObj);
        Size dsize((int)dsize_width, (int)dsize_height);
        Scalar borderValue(borderValue_val0, borderValue_val1, borderValue_val2, borderValue_val3);
        cv::warpAffine( src, dst, M, dsize, (int)flags, (int)borderMode, borderValue );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpAffine_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpAffine_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong M_nativeObj, jdouble dsize_width, jdouble dsize_height, jint flags)
{
    static const char method_name[] = "imgproc::warpAffine_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& M = *((Mat*)M_nativeObj);
        Size dsize((int)dsize_width, (int)dsize_height);
        cv::warpAffine( src, dst, M, dsize, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpAffine_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpAffine_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong M_nativeObj, jdouble dsize_width, jdouble dsize_height)
{
    static const char method_name[] = "imgproc::warpAffine_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& M = *((Mat*)M_nativeObj);
        Size dsize((int)dsize_width, (int)dsize_height);
        cv::warpAffine( src, dst, M, dsize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void warpPerspective(Mat src, Mat& dst, Mat M, Size dsize, int flags = INTER_LINEAR, int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpPerspective_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpPerspective_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong M_nativeObj, jdouble dsize_width, jdouble dsize_height, jint flags, jint borderMode, jdouble borderValue_val0, jdouble borderValue_val1, jdouble borderValue_val2, jdouble borderValue_val3)
{
    static const char method_name[] = "imgproc::warpPerspective_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& M = *((Mat*)M_nativeObj);
        Size dsize((int)dsize_width, (int)dsize_height);
        Scalar borderValue(borderValue_val0, borderValue_val1, borderValue_val2, borderValue_val3);
        cv::warpPerspective( src, dst, M, dsize, (int)flags, (int)borderMode, borderValue );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpPerspective_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpPerspective_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong M_nativeObj, jdouble dsize_width, jdouble dsize_height, jint flags)
{
    static const char method_name[] = "imgproc::warpPerspective_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& M = *((Mat*)M_nativeObj);
        Size dsize((int)dsize_width, (int)dsize_height);
        cv::warpPerspective( src, dst, M, dsize, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpPerspective_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_warpPerspective_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jlong M_nativeObj, jdouble dsize_width, jdouble dsize_height)
{
    static const char method_name[] = "imgproc::warpPerspective_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& M = *((Mat*)M_nativeObj);
        Size dsize((int)dsize_width, (int)dsize_height);
        cv::warpPerspective( src, dst, M, dsize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void watershed(Mat image, Mat& markers)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_watershed_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_Imgproc_watershed_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong markers_nativeObj)
{
    static const char method_name[] = "imgproc::watershed_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& markers = *((Mat*)markers_nativeObj);
        cv::watershed( image, markers );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void CLAHE::apply(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_CLAHE_apply_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_CLAHE_apply_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "imgproc::apply_10()";
    try {
        LOGD("%s", method_name);
        CLAHE* me = (CLAHE*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        me->apply( src, dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void CLAHE::setClipLimit(double clipLimit)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_CLAHE_setClipLimit_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_CLAHE_setClipLimit_10
  (JNIEnv* env, jclass , jlong self, jdouble clipLimit)
{
    static const char method_name[] = "imgproc::setClipLimit_10()";
    try {
        LOGD("%s", method_name);
        CLAHE* me = (CLAHE*) self; //TODO: check for NULL
        me->setClipLimit( (double)clipLimit );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void CLAHE::setTilesGridSize(Size tileGridSize)
//

JNIEXPORT void JNICALL Java_org_opencv_imgproc_CLAHE_setTilesGridSize_10 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_CLAHE_setTilesGridSize_10
  (JNIEnv* env, jclass , jlong self, jdouble tileGridSize_width, jdouble tileGridSize_height)
{
    static const char method_name[] = "imgproc::setTilesGridSize_10()";
    try {
        LOGD("%s", method_name);
        CLAHE* me = (CLAHE*) self; //TODO: check for NULL
        Size tileGridSize((int)tileGridSize_width, (int)tileGridSize_height);
        me->setTilesGridSize( tileGridSize );
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
//  static void CLAHE::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_imgproc_CLAHE_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgproc_CLAHE_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CLAHE*) self;
}


} // extern "C"

#endif // HAVE_OPENCV_IMGPROC
