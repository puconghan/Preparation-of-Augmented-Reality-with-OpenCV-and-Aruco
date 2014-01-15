
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.highgui"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_HIGHGUI
#include "opencv2/highgui/highgui.hpp"

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
//  Mat imdecode(Mat buf, int flags)
//

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imdecode_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imdecode_10
  (JNIEnv* env, jclass , jlong buf_nativeObj, jint flags)
{
    static const char method_name[] = "highgui::imdecode_10()";
    try {
        LOGD("%s", method_name);
        Mat& buf = *((Mat*)buf_nativeObj);
        Mat _retval_ = cv::imdecode( buf, (int)flags );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool imencode(string ext, Mat img, vector_uchar& buf, vector_int params = vector<int>())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imencode_10 (JNIEnv*, jclass, jstring, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imencode_10
  (JNIEnv* env, jclass , jstring ext, jlong img_nativeObj, jlong buf_mat_nativeObj, jlong params_mat_nativeObj)
{
    static const char method_name[] = "highgui::imencode_10()";
    try {
        LOGD("%s", method_name);
        vector<uchar> buf;
        Mat& buf_mat = *((Mat*)buf_mat_nativeObj);
        vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_ext = env->GetStringUTFChars(ext, 0); std::string n_ext( utf_ext ? utf_ext : "" ); env->ReleaseStringUTFChars(ext, utf_ext);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imencode( n_ext, img, buf, params );
        vector_uchar_to_Mat( buf, buf_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imencode_11 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imencode_11
  (JNIEnv* env, jclass , jstring ext, jlong img_nativeObj, jlong buf_mat_nativeObj)
{
    static const char method_name[] = "highgui::imencode_11()";
    try {
        LOGD("%s", method_name);
        vector<uchar> buf;
        Mat& buf_mat = *((Mat*)buf_mat_nativeObj);
        const char* utf_ext = env->GetStringUTFChars(ext, 0); std::string n_ext( utf_ext ? utf_ext : "" ); env->ReleaseStringUTFChars(ext, utf_ext);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imencode( n_ext, img, buf );
        vector_uchar_to_Mat( buf, buf_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat imread(string filename, int flags = 1)
//

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imread_10 (JNIEnv*, jclass, jstring, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imread_10
  (JNIEnv* env, jclass , jstring filename, jint flags)
{
    static const char method_name[] = "highgui::imread_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat _retval_ = cv::imread( n_filename, (int)flags );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imread_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imread_11
  (JNIEnv* env, jclass , jstring filename)
{
    static const char method_name[] = "highgui::imread_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat _retval_ = cv::imread( n_filename );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool imwrite(string filename, Mat img, vector_int params = vector<int>())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imwrite_10 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imwrite_10
  (JNIEnv* env, jclass , jstring filename, jlong img_nativeObj, jlong params_mat_nativeObj)
{
    static const char method_name[] = "highgui::imwrite_10()";
    try {
        LOGD("%s", method_name);
        vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imwrite( n_filename, img, params );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imwrite_11 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imwrite_11
  (JNIEnv* env, jclass , jstring filename, jlong img_nativeObj)
{
    static const char method_name[] = "highgui::imwrite_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imwrite( n_filename, img );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   VideoCapture::VideoCapture()
//

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_VideoCapture_VideoCapture_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_VideoCapture_VideoCapture_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "highgui::VideoCapture_10()";
    try {
        LOGD("%s", method_name);
        
        VideoCapture* _retval_ = new VideoCapture(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   VideoCapture::VideoCapture(string filename)
//

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_VideoCapture_VideoCapture_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_VideoCapture_VideoCapture_11
  (JNIEnv* env, jclass , jstring filename)
{
    static const char method_name[] = "highgui::VideoCapture_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VideoCapture* _retval_ = new VideoCapture( n_filename );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   VideoCapture::VideoCapture(int device)
//

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_VideoCapture_VideoCapture_12 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_VideoCapture_VideoCapture_12
  (JNIEnv* env, jclass , jint device)
{
    static const char method_name[] = "highgui::VideoCapture_12()";
    try {
        LOGD("%s", method_name);
        
        VideoCapture* _retval_ = new VideoCapture( (int)device );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double VideoCapture::get(int propId)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_highgui_VideoCapture_get_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_highgui_VideoCapture_get_10
  (JNIEnv* env, jclass , jlong self, jint propId)
{
    static const char method_name[] = "highgui::get_10()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        double _retval_ = me->get( (int)propId );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool VideoCapture::grab()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_grab_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_grab_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "highgui::grab_10()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        bool _retval_ = me->grab(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool VideoCapture::isOpened()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_isOpened_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_isOpened_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "highgui::isOpened_10()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        bool _retval_ = me->isOpened(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool VideoCapture::open(string filename)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_open_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_open_10
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    static const char method_name[] = "highgui::open_10()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = me->open( n_filename );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool VideoCapture::open(int device)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_open_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_open_11
  (JNIEnv* env, jclass , jlong self, jint device)
{
    static const char method_name[] = "highgui::open_11()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        bool _retval_ = me->open( (int)device );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool VideoCapture::read(Mat& image)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_read_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_read_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    static const char method_name[] = "highgui::read_10()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        bool _retval_ = me->read( image );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void VideoCapture::release()
//

JNIEXPORT void JNICALL Java_org_opencv_highgui_VideoCapture_release_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_highgui_VideoCapture_release_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "highgui::release_10()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        me->release(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool VideoCapture::retrieve(Mat& image, int channel = 0)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_retrieve_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_retrieve_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint channel)
{
    static const char method_name[] = "highgui::retrieve_10()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        bool _retval_ = me->retrieve( image, (int)channel );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_retrieve_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_retrieve_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    static const char method_name[] = "highgui::retrieve_11()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        bool _retval_ = me->retrieve( image );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool VideoCapture::set(int propId, double value)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_set_10 (JNIEnv*, jclass, jlong, jint, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_VideoCapture_set_10
  (JNIEnv* env, jclass , jlong self, jint propId, jdouble value)
{
    static const char method_name[] = "highgui::set_10()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        bool _retval_ = me->set( (int)propId, (double)value );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jstring JNICALL Java_org_opencv_highgui_VideoCapture_getSupportedPreviewSizes_10
  (JNIEnv *env, jclass, jlong self);

JNIEXPORT jstring JNICALL Java_org_opencv_highgui_VideoCapture_getSupportedPreviewSizes_10
  (JNIEnv *env, jclass, jlong self)
{
    static const char method_name[] = "highgui::VideoCapture_getSupportedPreviewSizes_10()";
    try {
        LOGD("%s", method_name);
        VideoCapture* me = (VideoCapture*) self; //TODO: check for NULL
        union {double prop; const char* name;} u;
        u.prop = me->get(CV_CAP_PROP_SUPPORTED_PREVIEW_SIZES_STRING);
        return env->NewStringUTF(u.name);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}


//
//  native support for java finalize()
//  static void VideoCapture::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_highgui_VideoCapture_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_highgui_VideoCapture_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (VideoCapture*) self;
}


} // extern "C"

#endif // HAVE_OPENCV_HIGHGUI
