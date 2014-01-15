
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.contrib"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_CONTRIB
#include "opencv2/contrib/contrib.hpp"

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
//  void applyColorMap(Mat src, Mat& dst, int colormap)
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_Contrib_applyColorMap_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_contrib_Contrib_applyColorMap_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint colormap)
{
    static const char method_name[] = "contrib::applyColorMap_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::applyColorMap( src, dst, (int)colormap );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  int chamerMatching(Mat img, Mat templ, vector_vector_Point& results, vector_float& cost, double templScale = 1, int maxMatches = 20, double minMatchDistance = 1.0, int padX = 3, int padY = 3, int scales = 5, double minScale = 0.6, double maxScale = 1.6, double orientationWeight = 0.5, double truncate = 20)
//

JNIEXPORT jint JNICALL Java_org_opencv_contrib_Contrib_chamerMatching_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jint, jdouble, jint, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_Contrib_chamerMatching_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong templ_nativeObj, jlong results_mat_nativeObj, jlong cost_mat_nativeObj, jdouble templScale, jint maxMatches, jdouble minMatchDistance, jint padX, jint padY, jint scales, jdouble minScale, jdouble maxScale, jdouble orientationWeight, jdouble truncate)
{
    static const char method_name[] = "contrib::chamerMatching_10()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > results;
        Mat& results_mat = *((Mat*)results_mat_nativeObj);
        vector<float> cost;
        Mat& cost_mat = *((Mat*)cost_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Mat& templ = *((Mat*)templ_nativeObj);
        int _retval_ = cv::chamerMatching( img, templ, results, cost, (double)templScale, (int)maxMatches, (double)minMatchDistance, (int)padX, (int)padY, (int)scales, (double)minScale, (double)maxScale, (double)orientationWeight, (double)truncate );
        vector_vector_Point_to_Mat( results, results_mat );  vector_float_to_Mat( cost, cost_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_contrib_Contrib_chamerMatching_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_Contrib_chamerMatching_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong templ_nativeObj, jlong results_mat_nativeObj, jlong cost_mat_nativeObj)
{
    static const char method_name[] = "contrib::chamerMatching_11()";
    try {
        LOGD("%s", method_name);
        vector< vector<Point> > results;
        Mat& results_mat = *((Mat*)results_mat_nativeObj);
        vector<float> cost;
        Mat& cost_mat = *((Mat*)cost_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Mat& templ = *((Mat*)templ_nativeObj);
        int _retval_ = cv::chamerMatching( img, templ, results, cost );
        vector_vector_Point_to_Mat( results, results_mat );  vector_float_to_Mat( cost, cost_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void FaceRecognizer::load(string filename)
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_load_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_load_10
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    static const char method_name[] = "contrib::load_10()";
    try {
        LOGD("%s", method_name);
        FaceRecognizer* me = (FaceRecognizer*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        me->load( n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void FaceRecognizer::predict(Mat src, int& label, double& confidence)
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_predict_10 (JNIEnv*, jclass, jlong, jlong, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_predict_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jdoubleArray label_out, jdoubleArray confidence_out)
{
    static const char method_name[] = "contrib::predict_10()";
    try {
        LOGD("%s", method_name);
        FaceRecognizer* me = (FaceRecognizer*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        int label;
        double confidence;
        me->predict( src, label, confidence );
        jdouble tmp_label[1] = {label}; env->SetDoubleArrayRegion(label_out, 0, 1, tmp_label);  jdouble tmp_confidence[1] = {confidence}; env->SetDoubleArrayRegion(confidence_out, 0, 1, tmp_confidence);
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void FaceRecognizer::save(string filename)
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_save_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_save_10
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    static const char method_name[] = "contrib::save_10()";
    try {
        LOGD("%s", method_name);
        FaceRecognizer* me = (FaceRecognizer*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        me->save( n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void FaceRecognizer::train(vector_Mat src, Mat labels)
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_train_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_train_10
  (JNIEnv* env, jclass , jlong self, jlong src_mat_nativeObj, jlong labels_nativeObj)
{
    static const char method_name[] = "contrib::train_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Mat( src_mat, src );
        FaceRecognizer* me = (FaceRecognizer*) self; //TODO: check for NULL
        Mat& labels = *((Mat*)labels_nativeObj);
        me->train( src, labels );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void FaceRecognizer::update(vector_Mat src, Mat labels)
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_update_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_update_10
  (JNIEnv* env, jclass , jlong self, jlong src_mat_nativeObj, jlong labels_nativeObj)
{
    static const char method_name[] = "contrib::update_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> src;
        Mat& src_mat = *((Mat*)src_mat_nativeObj);
        Mat_to_vector_Mat( src_mat, src );
        FaceRecognizer* me = (FaceRecognizer*) self; //TODO: check for NULL
        Mat& labels = *((Mat*)labels_nativeObj);
        me->update( src, labels );
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
//  static void FaceRecognizer::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_contrib_FaceRecognizer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (FaceRecognizer*) self;
}


//
//   StereoVar::StereoVar()
//

JNIEXPORT jlong JNICALL Java_org_opencv_contrib_StereoVar_StereoVar_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_contrib_StereoVar_StereoVar_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "contrib::StereoVar_10()";
    try {
        LOGD("%s", method_name);
        
        StereoVar* _retval_ = new StereoVar(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   StereoVar::StereoVar(int levels, double pyrScale, int nIt, int minDisp, int maxDisp, int poly_n, double poly_sigma, float fi, float lambda, int penalization, int cycle, int flags)
//

JNIEXPORT jlong JNICALL Java_org_opencv_contrib_StereoVar_StereoVar_11 (JNIEnv*, jclass, jint, jdouble, jint, jint, jint, jint, jdouble, jfloat, jfloat, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_contrib_StereoVar_StereoVar_11
  (JNIEnv* env, jclass , jint levels, jdouble pyrScale, jint nIt, jint minDisp, jint maxDisp, jint poly_n, jdouble poly_sigma, jfloat fi, jfloat lambda, jint penalization, jint cycle, jint flags)
{
    static const char method_name[] = "contrib::StereoVar_11()";
    try {
        LOGD("%s", method_name);
        
        StereoVar* _retval_ = new StereoVar( (int)levels, (double)pyrScale, (int)nIt, (int)minDisp, (int)maxDisp, (int)poly_n, (double)poly_sigma, (float)fi, (float)lambda, (int)penalization, (int)cycle, (int)flags );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void StereoVar::operator ()(Mat left, Mat right, Mat& disp)
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_compute_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_compute_10
  (JNIEnv* env, jclass , jlong self, jlong left_nativeObj, jlong right_nativeObj, jlong disp_nativeObj)
{
    static const char method_name[] = "contrib::compute_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
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
// int StereoVar::levels
//

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1levels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1levels_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1levels_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        int _retval_ = me->levels;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::levels
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1levels_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1levels_10
  (JNIEnv* env, jclass , jlong self, jint levels)
{
    static const char method_name[] = "contrib::set_1levels_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->levels = ( (int)levels );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double StereoVar::pyrScale
//

JNIEXPORT jdouble JNICALL Java_org_opencv_contrib_StereoVar_get_1pyrScale_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_contrib_StereoVar_get_1pyrScale_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1pyrScale_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        double _retval_ = me->pyrScale;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::pyrScale
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1pyrScale_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1pyrScale_10
  (JNIEnv* env, jclass , jlong self, jdouble pyrScale)
{
    static const char method_name[] = "contrib::set_1pyrScale_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->pyrScale = ( (double)pyrScale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoVar::nIt
//

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1nIt_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1nIt_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1nIt_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        int _retval_ = me->nIt;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::nIt
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1nIt_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1nIt_10
  (JNIEnv* env, jclass , jlong self, jint nIt)
{
    static const char method_name[] = "contrib::set_1nIt_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->nIt = ( (int)nIt );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoVar::minDisp
//

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1minDisp_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1minDisp_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1minDisp_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        int _retval_ = me->minDisp;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::minDisp
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1minDisp_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1minDisp_10
  (JNIEnv* env, jclass , jlong self, jint minDisp)
{
    static const char method_name[] = "contrib::set_1minDisp_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->minDisp = ( (int)minDisp );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoVar::maxDisp
//

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1maxDisp_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1maxDisp_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1maxDisp_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        int _retval_ = me->maxDisp;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::maxDisp
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1maxDisp_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1maxDisp_10
  (JNIEnv* env, jclass , jlong self, jint maxDisp)
{
    static const char method_name[] = "contrib::set_1maxDisp_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->maxDisp = ( (int)maxDisp );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoVar::poly_n
//

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1poly_1n_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1poly_1n_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1poly_1n_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        int _retval_ = me->poly_n;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::poly_n
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1poly_1n_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1poly_1n_10
  (JNIEnv* env, jclass , jlong self, jint poly_n)
{
    static const char method_name[] = "contrib::set_1poly_1n_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->poly_n = ( (int)poly_n );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double StereoVar::poly_sigma
//

JNIEXPORT jdouble JNICALL Java_org_opencv_contrib_StereoVar_get_1poly_1sigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_contrib_StereoVar_get_1poly_1sigma_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1poly_1sigma_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        double _retval_ = me->poly_sigma;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::poly_sigma
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1poly_1sigma_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1poly_1sigma_10
  (JNIEnv* env, jclass , jlong self, jdouble poly_sigma)
{
    static const char method_name[] = "contrib::set_1poly_1sigma_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->poly_sigma = ( (double)poly_sigma );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// float StereoVar::fi
//

JNIEXPORT jfloat JNICALL Java_org_opencv_contrib_StereoVar_get_1fi_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_contrib_StereoVar_get_1fi_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1fi_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        float _retval_ = me->fi;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::fi
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1fi_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1fi_10
  (JNIEnv* env, jclass , jlong self, jfloat fi)
{
    static const char method_name[] = "contrib::set_1fi_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->fi = ( (float)fi );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// float StereoVar::lambda
//

JNIEXPORT jfloat JNICALL Java_org_opencv_contrib_StereoVar_get_1lambda_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_contrib_StereoVar_get_1lambda_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1lambda_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        float _retval_ = me->lambda;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::lambda
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1lambda_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1lambda_10
  (JNIEnv* env, jclass , jlong self, jfloat lambda)
{
    static const char method_name[] = "contrib::set_1lambda_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->lambda = ( (float)lambda );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoVar::penalization
//

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1penalization_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1penalization_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1penalization_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        int _retval_ = me->penalization;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::penalization
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1penalization_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1penalization_10
  (JNIEnv* env, jclass , jlong self, jint penalization)
{
    static const char method_name[] = "contrib::set_1penalization_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->penalization = ( (int)penalization );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoVar::cycle
//

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1cycle_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1cycle_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1cycle_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        int _retval_ = me->cycle;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::cycle
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1cycle_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1cycle_10
  (JNIEnv* env, jclass , jlong self, jint cycle)
{
    static const char method_name[] = "contrib::set_1cycle_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->cycle = ( (int)cycle );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int StereoVar::flags
//

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1flags_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_contrib_StereoVar_get_1flags_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "contrib::get_1flags_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        int _retval_ = me->flags;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void StereoVar::flags
//

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1flags_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_set_1flags_10
  (JNIEnv* env, jclass , jlong self, jint flags)
{
    static const char method_name[] = "contrib::set_1flags_10()";
    try {
        LOGD("%s", method_name);
        StereoVar* me = (StereoVar*) self; //TODO: check for NULL
        me->flags = ( (int)flags );
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
//  static void StereoVar::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_contrib_StereoVar_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (StereoVar*) self;
}


} // extern "C"

#endif // HAVE_OPENCV_CONTRIB
