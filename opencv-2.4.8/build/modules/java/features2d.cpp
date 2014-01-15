
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.features2d"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_FEATURES2D
#include "opencv2/features2d/features2d.hpp"

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
// static javaFeatureDetector* javaFeatureDetector::create(int detectorType)
//

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_FeatureDetector_create_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_FeatureDetector_create_10
  (JNIEnv* env, jclass , jint detectorType)
{
    static const char method_name[] = "features2d::create_10()";
    try {
        LOGD("%s", method_name);
        
        javaFeatureDetector* _retval_ = javaFeatureDetector::create( (int)detectorType );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void javaFeatureDetector::detect(Mat image, vector_KeyPoint& keypoints, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_detect_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong keypoints_mat_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "features2d::detect_10()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        javaFeatureDetector* me = (javaFeatureDetector*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        me->detect( image, keypoints, mask );
        vector_KeyPoint_to_Mat( keypoints, keypoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_detect_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_detect_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong keypoints_mat_nativeObj)
{
    static const char method_name[] = "features2d::detect_11()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        javaFeatureDetector* me = (javaFeatureDetector*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        me->detect( image, keypoints );
        vector_KeyPoint_to_Mat( keypoints, keypoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaFeatureDetector::detect(vector_Mat images, vector_vector_KeyPoint& keypoints, vector_Mat masks = vector<Mat>())
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_detect_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_detect_12
  (JNIEnv* env, jclass , jlong self, jlong images_mat_nativeObj, jlong keypoints_mat_nativeObj, jlong masks_mat_nativeObj)
{
    static const char method_name[] = "features2d::detect_12()";
    try {
        LOGD("%s", method_name);
        vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        vector< vector<KeyPoint> > keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        vector<Mat> masks;
        Mat& masks_mat = *((Mat*)masks_mat_nativeObj);
        Mat_to_vector_Mat( masks_mat, masks );
        javaFeatureDetector* me = (javaFeatureDetector*) self; //TODO: check for NULL
        me->detect( images, keypoints, masks );
        vector_vector_KeyPoint_to_Mat( keypoints, keypoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_detect_13 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_detect_13
  (JNIEnv* env, jclass , jlong self, jlong images_mat_nativeObj, jlong keypoints_mat_nativeObj)
{
    static const char method_name[] = "features2d::detect_13()";
    try {
        LOGD("%s", method_name);
        vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        vector< vector<KeyPoint> > keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        javaFeatureDetector* me = (javaFeatureDetector*) self; //TODO: check for NULL
        me->detect( images, keypoints );
        vector_vector_KeyPoint_to_Mat( keypoints, keypoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool javaFeatureDetector::empty()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_FeatureDetector_empty_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_FeatureDetector_empty_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::empty_10()";
    try {
        LOGD("%s", method_name);
        javaFeatureDetector* me = (javaFeatureDetector*) self; //TODO: check for NULL
        bool _retval_ = me->empty(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void javaFeatureDetector::read(string fileName)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_read_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_read_10
  (JNIEnv* env, jclass , jlong self, jstring fileName)
{
    static const char method_name[] = "features2d::read_10()";
    try {
        LOGD("%s", method_name);
        javaFeatureDetector* me = (javaFeatureDetector*) self; //TODO: check for NULL
        const char* utf_fileName = env->GetStringUTFChars(fileName, 0); std::string n_fileName( utf_fileName ? utf_fileName : "" ); env->ReleaseStringUTFChars(fileName, utf_fileName);
        me->read( n_fileName );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaFeatureDetector::write(string fileName)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_write_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_write_10
  (JNIEnv* env, jclass , jlong self, jstring fileName)
{
    static const char method_name[] = "features2d::write_10()";
    try {
        LOGD("%s", method_name);
        javaFeatureDetector* me = (javaFeatureDetector*) self; //TODO: check for NULL
        const char* utf_fileName = env->GetStringUTFChars(fileName, 0); std::string n_fileName( utf_fileName ? utf_fileName : "" ); env->ReleaseStringUTFChars(fileName, utf_fileName);
        me->write( n_fileName );
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
//  static void javaFeatureDetector::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_FeatureDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (javaFeatureDetector*) self;
}


//
//  void javaDescriptorMatcher::add(vector_Mat descriptors)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_add_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_add_10
  (JNIEnv* env, jclass , jlong self, jlong descriptors_mat_nativeObj)
{
    static const char method_name[] = "features2d::add_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> descriptors;
        Mat& descriptors_mat = *((Mat*)descriptors_mat_nativeObj);
        Mat_to_vector_Mat( descriptors_mat, descriptors );
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        me->add( descriptors );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorMatcher::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::clear_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        me->clear(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  javaDescriptorMatcher* javaDescriptorMatcher::jclone(bool emptyTrainData = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorMatcher_clone_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorMatcher_clone_10
  (JNIEnv* env, jclass , jlong self, jboolean emptyTrainData)
{
    static const char method_name[] = "features2d::clone_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        javaDescriptorMatcher* _retval_ = me->jclone( (bool)emptyTrainData );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorMatcher_clone_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorMatcher_clone_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::clone_11()";
    try {
        LOGD("%s", method_name);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        javaDescriptorMatcher* _retval_ = me->jclone(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static javaDescriptorMatcher* javaDescriptorMatcher::create(int matcherType)
//

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorMatcher_create_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorMatcher_create_10
  (JNIEnv* env, jclass , jint matcherType)
{
    static const char method_name[] = "features2d::create_10()";
    try {
        LOGD("%s", method_name);
        
        javaDescriptorMatcher* _retval_ = javaDescriptorMatcher::create( (int)matcherType );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool javaDescriptorMatcher::empty()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_DescriptorMatcher_empty_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_DescriptorMatcher_empty_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::empty_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        bool _retval_ = me->empty(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_Mat javaDescriptorMatcher::getTrainDescriptors()
//

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorMatcher_getTrainDescriptors_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorMatcher_getTrainDescriptors_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::getTrainDescriptors_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        vector<Mat> _ret_val_vector_ = me->getTrainDescriptors(  );
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
//  bool javaDescriptorMatcher::isMaskSupported()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_DescriptorMatcher_isMaskSupported_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_DescriptorMatcher_isMaskSupported_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::isMaskSupported_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        bool _retval_ = me->isMaskSupported(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void javaDescriptorMatcher::knnMatch(Mat queryDescriptors, Mat trainDescriptors, vector_vector_DMatch& matches, int k, Mat mask = Mat(), bool compactResult = false)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_knnMatch_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_knnMatch_10
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong trainDescriptors_nativeObj, jlong matches_mat_nativeObj, jint k, jlong mask_nativeObj, jboolean compactResult)
{
    static const char method_name[] = "features2d::knnMatch_10()";
    try {
        LOGD("%s", method_name);
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        Mat& trainDescriptors = *((Mat*)trainDescriptors_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        me->knnMatch( queryDescriptors, trainDescriptors, matches, (int)k, mask, (bool)compactResult );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_knnMatch_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_knnMatch_11
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong trainDescriptors_nativeObj, jlong matches_mat_nativeObj, jint k)
{
    static const char method_name[] = "features2d::knnMatch_11()";
    try {
        LOGD("%s", method_name);
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        Mat& trainDescriptors = *((Mat*)trainDescriptors_nativeObj);
        me->knnMatch( queryDescriptors, trainDescriptors, matches, (int)k );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorMatcher::knnMatch(Mat queryDescriptors, vector_vector_DMatch& matches, int k, vector_Mat masks = vector<Mat>(), bool compactResult = false)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_knnMatch_12 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_knnMatch_12
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong matches_mat_nativeObj, jint k, jlong masks_mat_nativeObj, jboolean compactResult)
{
    static const char method_name[] = "features2d::knnMatch_12()";
    try {
        LOGD("%s", method_name);
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        vector<Mat> masks;
        Mat& masks_mat = *((Mat*)masks_mat_nativeObj);
        Mat_to_vector_Mat( masks_mat, masks );
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        me->knnMatch( queryDescriptors, matches, (int)k, masks, (bool)compactResult );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_knnMatch_13 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_knnMatch_13
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong matches_mat_nativeObj, jint k)
{
    static const char method_name[] = "features2d::knnMatch_13()";
    try {
        LOGD("%s", method_name);
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        me->knnMatch( queryDescriptors, matches, (int)k );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorMatcher::match(Mat queryDescriptors, Mat trainDescriptors, vector_DMatch& matches, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_match_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_match_10
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong trainDescriptors_nativeObj, jlong matches_mat_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "features2d::match_10()";
    try {
        LOGD("%s", method_name);
        vector<DMatch> matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        Mat& trainDescriptors = *((Mat*)trainDescriptors_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        me->match( queryDescriptors, trainDescriptors, matches, mask );
        vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_match_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_match_11
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong trainDescriptors_nativeObj, jlong matches_mat_nativeObj)
{
    static const char method_name[] = "features2d::match_11()";
    try {
        LOGD("%s", method_name);
        vector<DMatch> matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        Mat& trainDescriptors = *((Mat*)trainDescriptors_nativeObj);
        me->match( queryDescriptors, trainDescriptors, matches );
        vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorMatcher::match(Mat queryDescriptors, vector_DMatch& matches, vector_Mat masks = vector<Mat>())
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_match_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_match_12
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong matches_mat_nativeObj, jlong masks_mat_nativeObj)
{
    static const char method_name[] = "features2d::match_12()";
    try {
        LOGD("%s", method_name);
        vector<DMatch> matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        vector<Mat> masks;
        Mat& masks_mat = *((Mat*)masks_mat_nativeObj);
        Mat_to_vector_Mat( masks_mat, masks );
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        me->match( queryDescriptors, matches, masks );
        vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_match_13 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_match_13
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong matches_mat_nativeObj)
{
    static const char method_name[] = "features2d::match_13()";
    try {
        LOGD("%s", method_name);
        vector<DMatch> matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        me->match( queryDescriptors, matches );
        vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorMatcher::radiusMatch(Mat queryDescriptors, Mat trainDescriptors, vector_vector_DMatch& matches, float maxDistance, Mat mask = Mat(), bool compactResult = false)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_radiusMatch_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jfloat, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_radiusMatch_10
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong trainDescriptors_nativeObj, jlong matches_mat_nativeObj, jfloat maxDistance, jlong mask_nativeObj, jboolean compactResult)
{
    static const char method_name[] = "features2d::radiusMatch_10()";
    try {
        LOGD("%s", method_name);
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        Mat& trainDescriptors = *((Mat*)trainDescriptors_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        me->radiusMatch( queryDescriptors, trainDescriptors, matches, (float)maxDistance, mask, (bool)compactResult );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_radiusMatch_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_radiusMatch_11
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong trainDescriptors_nativeObj, jlong matches_mat_nativeObj, jfloat maxDistance)
{
    static const char method_name[] = "features2d::radiusMatch_11()";
    try {
        LOGD("%s", method_name);
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        Mat& trainDescriptors = *((Mat*)trainDescriptors_nativeObj);
        me->radiusMatch( queryDescriptors, trainDescriptors, matches, (float)maxDistance );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorMatcher::radiusMatch(Mat queryDescriptors, vector_vector_DMatch& matches, float maxDistance, vector_Mat masks = vector<Mat>(), bool compactResult = false)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_radiusMatch_12 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_radiusMatch_12
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong matches_mat_nativeObj, jfloat maxDistance, jlong masks_mat_nativeObj, jboolean compactResult)
{
    static const char method_name[] = "features2d::radiusMatch_12()";
    try {
        LOGD("%s", method_name);
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        vector<Mat> masks;
        Mat& masks_mat = *((Mat*)masks_mat_nativeObj);
        Mat_to_vector_Mat( masks_mat, masks );
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        me->radiusMatch( queryDescriptors, matches, (float)maxDistance, masks, (bool)compactResult );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_radiusMatch_13 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_radiusMatch_13
  (JNIEnv* env, jclass , jlong self, jlong queryDescriptors_nativeObj, jlong matches_mat_nativeObj, jfloat maxDistance)
{
    static const char method_name[] = "features2d::radiusMatch_13()";
    try {
        LOGD("%s", method_name);
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryDescriptors = *((Mat*)queryDescriptors_nativeObj);
        me->radiusMatch( queryDescriptors, matches, (float)maxDistance );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorMatcher::read(string fileName)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_read_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_read_10
  (JNIEnv* env, jclass , jlong self, jstring fileName)
{
    static const char method_name[] = "features2d::read_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        const char* utf_fileName = env->GetStringUTFChars(fileName, 0); std::string n_fileName( utf_fileName ? utf_fileName : "" ); env->ReleaseStringUTFChars(fileName, utf_fileName);
        me->read( n_fileName );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorMatcher::train()
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_train_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_train_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::train_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        me->train(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorMatcher::write(string fileName)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_write_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_write_10
  (JNIEnv* env, jclass , jlong self, jstring fileName)
{
    static const char method_name[] = "features2d::write_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorMatcher* me = (javaDescriptorMatcher*) self; //TODO: check for NULL
        const char* utf_fileName = env->GetStringUTFChars(fileName, 0); std::string n_fileName( utf_fileName ? utf_fileName : "" ); env->ReleaseStringUTFChars(fileName, utf_fileName);
        me->write( n_fileName );
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
//  static void javaDescriptorMatcher::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorMatcher_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (javaDescriptorMatcher*) self;
}


//
//  void drawKeypoints(Mat image, vector_KeyPoint keypoints, Mat outImage, Scalar color = Scalar::all(-1), int flags = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawKeypoints_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawKeypoints_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong keypoints_mat_nativeObj, jlong outImage_nativeObj, jdouble color_val0, jdouble color_val1, jdouble color_val2, jdouble color_val3, jint flags)
{
    static const char method_name[] = "features2d::drawKeypoints_10()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints_mat, keypoints );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& outImage = *((Mat*)outImage_nativeObj);
        Scalar color(color_val0, color_val1, color_val2, color_val3);
        cv::drawKeypoints( image, keypoints, outImage, color, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawKeypoints_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawKeypoints_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong keypoints_mat_nativeObj, jlong outImage_nativeObj)
{
    static const char method_name[] = "features2d::drawKeypoints_11()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints_mat, keypoints );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& outImage = *((Mat*)outImage_nativeObj);
        cv::drawKeypoints( image, keypoints, outImage );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawMatches(Mat img1, vector_KeyPoint keypoints1, Mat img2, vector_KeyPoint keypoints2, vector_DMatch matches1to2, Mat outImg, Scalar matchColor = Scalar::all(-1), Scalar singlePointColor = Scalar::all(-1), vector_char matchesMask = vector<char>(), int flags = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawMatches_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawMatches_10
  (JNIEnv* env, jclass , jlong img1_nativeObj, jlong keypoints1_mat_nativeObj, jlong img2_nativeObj, jlong keypoints2_mat_nativeObj, jlong matches1to2_mat_nativeObj, jlong outImg_nativeObj, jdouble matchColor_val0, jdouble matchColor_val1, jdouble matchColor_val2, jdouble matchColor_val3, jdouble singlePointColor_val0, jdouble singlePointColor_val1, jdouble singlePointColor_val2, jdouble singlePointColor_val3, jlong matchesMask_mat_nativeObj, jint flags)
{
    static const char method_name[] = "features2d::drawMatches_10()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> keypoints1;
        Mat& keypoints1_mat = *((Mat*)keypoints1_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints1_mat, keypoints1 );
        vector<KeyPoint> keypoints2;
        Mat& keypoints2_mat = *((Mat*)keypoints2_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints2_mat, keypoints2 );
        vector<DMatch> matches1to2;
        Mat& matches1to2_mat = *((Mat*)matches1to2_mat_nativeObj);
        Mat_to_vector_DMatch( matches1to2_mat, matches1to2 );
        vector<char> matchesMask;
        Mat& matchesMask_mat = *((Mat*)matchesMask_mat_nativeObj);
        Mat_to_vector_char( matchesMask_mat, matchesMask );
        Mat& img1 = *((Mat*)img1_nativeObj);
        Mat& img2 = *((Mat*)img2_nativeObj);
        Mat& outImg = *((Mat*)outImg_nativeObj);
        Scalar matchColor(matchColor_val0, matchColor_val1, matchColor_val2, matchColor_val3);
        Scalar singlePointColor(singlePointColor_val0, singlePointColor_val1, singlePointColor_val2, singlePointColor_val3);
        cv::drawMatches( img1, keypoints1, img2, keypoints2, matches1to2, outImg, matchColor, singlePointColor, matchesMask, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawMatches_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawMatches_11
  (JNIEnv* env, jclass , jlong img1_nativeObj, jlong keypoints1_mat_nativeObj, jlong img2_nativeObj, jlong keypoints2_mat_nativeObj, jlong matches1to2_mat_nativeObj, jlong outImg_nativeObj)
{
    static const char method_name[] = "features2d::drawMatches_11()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> keypoints1;
        Mat& keypoints1_mat = *((Mat*)keypoints1_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints1_mat, keypoints1 );
        vector<KeyPoint> keypoints2;
        Mat& keypoints2_mat = *((Mat*)keypoints2_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints2_mat, keypoints2 );
        vector<DMatch> matches1to2;
        Mat& matches1to2_mat = *((Mat*)matches1to2_mat_nativeObj);
        Mat_to_vector_DMatch( matches1to2_mat, matches1to2 );
        Mat& img1 = *((Mat*)img1_nativeObj);
        Mat& img2 = *((Mat*)img2_nativeObj);
        Mat& outImg = *((Mat*)outImg_nativeObj);
        cv::drawMatches( img1, keypoints1, img2, keypoints2, matches1to2, outImg );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawMatches(Mat img1, vector_KeyPoint keypoints1, Mat img2, vector_KeyPoint keypoints2, vector_vector_DMatch matches1to2, Mat outImg, Scalar matchColor = Scalar::all(-1), Scalar singlePointColor = Scalar::all(-1), vector_vector_char matchesMask = vector<vector<char> >(), int flags = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawMatches2_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawMatches2_10
  (JNIEnv* env, jclass , jlong img1_nativeObj, jlong keypoints1_mat_nativeObj, jlong img2_nativeObj, jlong keypoints2_mat_nativeObj, jlong matches1to2_mat_nativeObj, jlong outImg_nativeObj, jdouble matchColor_val0, jdouble matchColor_val1, jdouble matchColor_val2, jdouble matchColor_val3, jdouble singlePointColor_val0, jdouble singlePointColor_val1, jdouble singlePointColor_val2, jdouble singlePointColor_val3, jlong matchesMask_mat_nativeObj, jint flags)
{
    static const char method_name[] = "features2d::drawMatches2_10()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> keypoints1;
        Mat& keypoints1_mat = *((Mat*)keypoints1_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints1_mat, keypoints1 );
        vector<KeyPoint> keypoints2;
        Mat& keypoints2_mat = *((Mat*)keypoints2_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints2_mat, keypoints2 );
        vector< vector<DMatch> > matches1to2;
        Mat& matches1to2_mat = *((Mat*)matches1to2_mat_nativeObj);
        Mat_to_vector_vector_DMatch( matches1to2_mat, matches1to2 );
        vector< vector<char> > matchesMask;
        Mat& matchesMask_mat = *((Mat*)matchesMask_mat_nativeObj);
        Mat_to_vector_vector_char( matchesMask_mat, matchesMask );
        Mat& img1 = *((Mat*)img1_nativeObj);
        Mat& img2 = *((Mat*)img2_nativeObj);
        Mat& outImg = *((Mat*)outImg_nativeObj);
        Scalar matchColor(matchColor_val0, matchColor_val1, matchColor_val2, matchColor_val3);
        Scalar singlePointColor(singlePointColor_val0, singlePointColor_val1, singlePointColor_val2, singlePointColor_val3);
        cv::drawMatches( img1, keypoints1, img2, keypoints2, matches1to2, outImg, matchColor, singlePointColor, matchesMask, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawMatches2_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_Features2d_drawMatches2_11
  (JNIEnv* env, jclass , jlong img1_nativeObj, jlong keypoints1_mat_nativeObj, jlong img2_nativeObj, jlong keypoints2_mat_nativeObj, jlong matches1to2_mat_nativeObj, jlong outImg_nativeObj)
{
    static const char method_name[] = "features2d::drawMatches2_11()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> keypoints1;
        Mat& keypoints1_mat = *((Mat*)keypoints1_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints1_mat, keypoints1 );
        vector<KeyPoint> keypoints2;
        Mat& keypoints2_mat = *((Mat*)keypoints2_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints2_mat, keypoints2 );
        vector< vector<DMatch> > matches1to2;
        Mat& matches1to2_mat = *((Mat*)matches1to2_mat_nativeObj);
        Mat_to_vector_vector_DMatch( matches1to2_mat, matches1to2 );
        Mat& img1 = *((Mat*)img1_nativeObj);
        Mat& img2 = *((Mat*)img2_nativeObj);
        Mat& outImg = *((Mat*)outImg_nativeObj);
        cv::drawMatches( img1, keypoints1, img2, keypoints2, matches1to2, outImg );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorExtractor::compute(Mat image, vector_KeyPoint& keypoints, Mat descriptors)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_compute_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_compute_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong keypoints_mat_nativeObj, jlong descriptors_nativeObj)
{
    static const char method_name[] = "features2d::compute_10()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints_mat, keypoints );
        javaDescriptorExtractor* me = (javaDescriptorExtractor*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& descriptors = *((Mat*)descriptors_nativeObj);
        me->compute( image, keypoints, descriptors );
        vector_KeyPoint_to_Mat( keypoints, keypoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorExtractor::compute(vector_Mat images, vector_vector_KeyPoint& keypoints, vector_Mat& descriptors)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_compute_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_compute_11
  (JNIEnv* env, jclass , jlong self, jlong images_mat_nativeObj, jlong keypoints_mat_nativeObj, jlong descriptors_mat_nativeObj)
{
    static const char method_name[] = "features2d::compute_11()";
    try {
        LOGD("%s", method_name);
        vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        vector< vector<KeyPoint> > keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        Mat_to_vector_vector_KeyPoint( keypoints_mat, keypoints );
        vector<Mat> descriptors;
        Mat& descriptors_mat = *((Mat*)descriptors_mat_nativeObj);
        javaDescriptorExtractor* me = (javaDescriptorExtractor*) self; //TODO: check for NULL
        me->compute( images, keypoints, descriptors );
        vector_vector_KeyPoint_to_Mat( keypoints, keypoints_mat );  vector_Mat_to_Mat( descriptors, descriptors_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static javaDescriptorExtractor* javaDescriptorExtractor::create(int extractorType)
//

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorExtractor_create_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_DescriptorExtractor_create_10
  (JNIEnv* env, jclass , jint extractorType)
{
    static const char method_name[] = "features2d::create_10()";
    try {
        LOGD("%s", method_name);
        
        javaDescriptorExtractor* _retval_ = javaDescriptorExtractor::create( (int)extractorType );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int javaDescriptorExtractor::descriptorSize()
//

JNIEXPORT jint JNICALL Java_org_opencv_features2d_DescriptorExtractor_descriptorSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_features2d_DescriptorExtractor_descriptorSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::descriptorSize_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorExtractor* me = (javaDescriptorExtractor*) self; //TODO: check for NULL
        int _retval_ = me->descriptorSize(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int javaDescriptorExtractor::descriptorType()
//

JNIEXPORT jint JNICALL Java_org_opencv_features2d_DescriptorExtractor_descriptorType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_features2d_DescriptorExtractor_descriptorType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::descriptorType_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorExtractor* me = (javaDescriptorExtractor*) self; //TODO: check for NULL
        int _retval_ = me->descriptorType(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool javaDescriptorExtractor::empty()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_DescriptorExtractor_empty_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_DescriptorExtractor_empty_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::empty_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorExtractor* me = (javaDescriptorExtractor*) self; //TODO: check for NULL
        bool _retval_ = me->empty(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void javaDescriptorExtractor::read(string fileName)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_read_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_read_10
  (JNIEnv* env, jclass , jlong self, jstring fileName)
{
    static const char method_name[] = "features2d::read_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorExtractor* me = (javaDescriptorExtractor*) self; //TODO: check for NULL
        const char* utf_fileName = env->GetStringUTFChars(fileName, 0); std::string n_fileName( utf_fileName ? utf_fileName : "" ); env->ReleaseStringUTFChars(fileName, utf_fileName);
        me->read( n_fileName );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaDescriptorExtractor::write(string fileName)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_write_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_write_10
  (JNIEnv* env, jclass , jlong self, jstring fileName)
{
    static const char method_name[] = "features2d::write_10()";
    try {
        LOGD("%s", method_name);
        javaDescriptorExtractor* me = (javaDescriptorExtractor*) self; //TODO: check for NULL
        const char* utf_fileName = env->GetStringUTFChars(fileName, 0); std::string n_fileName( utf_fileName ? utf_fileName : "" ); env->ReleaseStringUTFChars(fileName, utf_fileName);
        me->write( n_fileName );
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
//  static void javaDescriptorExtractor::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_DescriptorExtractor_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (javaDescriptorExtractor*) self;
}


//
//  void javaGenericDescriptorMatcher::add(vector_Mat images, vector_vector_KeyPoint keypoints)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_add_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_add_10
  (JNIEnv* env, jclass , jlong self, jlong images_mat_nativeObj, jlong keypoints_mat_nativeObj)
{
    static const char method_name[] = "features2d::add_10()";
    try {
        LOGD("%s", method_name);
        vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        vector< vector<KeyPoint> > keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        Mat_to_vector_vector_KeyPoint( keypoints_mat, keypoints );
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        me->add( images, keypoints );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::classify(Mat queryImage, vector_KeyPoint& queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_classify_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_classify_10
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong trainImage_nativeObj, jlong trainKeypoints_mat_nativeObj)
{
    static const char method_name[] = "features2d::classify_10()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector<KeyPoint> trainKeypoints;
        Mat& trainKeypoints_mat = *((Mat*)trainKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( trainKeypoints_mat, trainKeypoints );
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        Mat& trainImage = *((Mat*)trainImage_nativeObj);
        me->classify( queryImage, queryKeypoints, trainImage, trainKeypoints );
        vector_KeyPoint_to_Mat( queryKeypoints, queryKeypoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::classify(Mat queryImage, vector_KeyPoint& queryKeypoints)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_classify_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_classify_11
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj)
{
    static const char method_name[] = "features2d::classify_11()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        me->classify( queryImage, queryKeypoints );
        vector_KeyPoint_to_Mat( queryKeypoints, queryKeypoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::clear_10()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        me->clear(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  javaGenericDescriptorMatcher* javaGenericDescriptorMatcher::jclone(bool emptyTrainData = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_clone_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_clone_10
  (JNIEnv* env, jclass , jlong self, jboolean emptyTrainData)
{
    static const char method_name[] = "features2d::clone_10()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        javaGenericDescriptorMatcher* _retval_ = me->jclone( (bool)emptyTrainData );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_clone_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_clone_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::clone_11()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        javaGenericDescriptorMatcher* _retval_ = me->jclone(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static javaGenericDescriptorMatcher* javaGenericDescriptorMatcher::create(int matcherType)
//

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_create_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_create_10
  (JNIEnv* env, jclass , jint matcherType)
{
    static const char method_name[] = "features2d::create_10()";
    try {
        LOGD("%s", method_name);
        
        javaGenericDescriptorMatcher* _retval_ = javaGenericDescriptorMatcher::create( (int)matcherType );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool javaGenericDescriptorMatcher::empty()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_empty_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_empty_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::empty_10()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        bool _retval_ = me->empty(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_Mat javaGenericDescriptorMatcher::getTrainImages()
//

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_getTrainImages_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_getTrainImages_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::getTrainImages_10()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        vector<Mat> _ret_val_vector_ = me->getTrainImages(  );
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
//  vector_vector_KeyPoint javaGenericDescriptorMatcher::getTrainKeypoints()
//

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_getTrainKeypoints_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_getTrainKeypoints_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::getTrainKeypoints_10()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        vector< vector<KeyPoint> > _ret_val_vector_ = me->getTrainKeypoints(  );
        Mat* _retval_ = new Mat();  vector_vector_KeyPoint_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool javaGenericDescriptorMatcher::isMaskSupported()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_isMaskSupported_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_isMaskSupported_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::isMaskSupported_10()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        bool _retval_ = me->isMaskSupported(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void javaGenericDescriptorMatcher::knnMatch(Mat queryImage, vector_KeyPoint queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints, vector_vector_DMatch& matches, int k, Mat mask = Mat(), bool compactResult = false)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_knnMatch_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jint, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_knnMatch_10
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong trainImage_nativeObj, jlong trainKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jint k, jlong mask_nativeObj, jboolean compactResult)
{
    static const char method_name[] = "features2d::knnMatch_10()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector<KeyPoint> trainKeypoints;
        Mat& trainKeypoints_mat = *((Mat*)trainKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( trainKeypoints_mat, trainKeypoints );
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        Mat& trainImage = *((Mat*)trainImage_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        me->knnMatch( queryImage, queryKeypoints, trainImage, trainKeypoints, matches, (int)k, mask, (bool)compactResult );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_knnMatch_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_knnMatch_11
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong trainImage_nativeObj, jlong trainKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jint k)
{
    static const char method_name[] = "features2d::knnMatch_11()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector<KeyPoint> trainKeypoints;
        Mat& trainKeypoints_mat = *((Mat*)trainKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( trainKeypoints_mat, trainKeypoints );
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        Mat& trainImage = *((Mat*)trainImage_nativeObj);
        me->knnMatch( queryImage, queryKeypoints, trainImage, trainKeypoints, matches, (int)k );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::knnMatch(Mat queryImage, vector_KeyPoint queryKeypoints, vector_vector_DMatch& matches, int k, vector_Mat masks = vector<Mat>(), bool compactResult = false)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_knnMatch_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_knnMatch_12
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jint k, jlong masks_mat_nativeObj, jboolean compactResult)
{
    static const char method_name[] = "features2d::knnMatch_12()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        vector<Mat> masks;
        Mat& masks_mat = *((Mat*)masks_mat_nativeObj);
        Mat_to_vector_Mat( masks_mat, masks );
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        me->knnMatch( queryImage, queryKeypoints, matches, (int)k, masks, (bool)compactResult );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_knnMatch_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_knnMatch_13
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jint k)
{
    static const char method_name[] = "features2d::knnMatch_13()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        me->knnMatch( queryImage, queryKeypoints, matches, (int)k );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::match(Mat queryImage, vector_KeyPoint queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints, vector_DMatch& matches, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_match_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_match_10
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong trainImage_nativeObj, jlong trainKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "features2d::match_10()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector<KeyPoint> trainKeypoints;
        Mat& trainKeypoints_mat = *((Mat*)trainKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( trainKeypoints_mat, trainKeypoints );
        vector<DMatch> matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        Mat& trainImage = *((Mat*)trainImage_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        me->match( queryImage, queryKeypoints, trainImage, trainKeypoints, matches, mask );
        vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_match_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_match_11
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong trainImage_nativeObj, jlong trainKeypoints_mat_nativeObj, jlong matches_mat_nativeObj)
{
    static const char method_name[] = "features2d::match_11()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector<KeyPoint> trainKeypoints;
        Mat& trainKeypoints_mat = *((Mat*)trainKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( trainKeypoints_mat, trainKeypoints );
        vector<DMatch> matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        Mat& trainImage = *((Mat*)trainImage_nativeObj);
        me->match( queryImage, queryKeypoints, trainImage, trainKeypoints, matches );
        vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::match(Mat queryImage, vector_KeyPoint queryKeypoints, vector_DMatch& matches, vector_Mat masks = vector<Mat>())
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_match_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_match_12
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jlong masks_mat_nativeObj)
{
    static const char method_name[] = "features2d::match_12()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector<DMatch> matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        vector<Mat> masks;
        Mat& masks_mat = *((Mat*)masks_mat_nativeObj);
        Mat_to_vector_Mat( masks_mat, masks );
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        me->match( queryImage, queryKeypoints, matches, masks );
        vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_match_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_match_13
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong matches_mat_nativeObj)
{
    static const char method_name[] = "features2d::match_13()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector<DMatch> matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        me->match( queryImage, queryKeypoints, matches );
        vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::radiusMatch(Mat queryImage, vector_KeyPoint queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints, vector_vector_DMatch& matches, float maxDistance, Mat mask = Mat(), bool compactResult = false)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_radiusMatch_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jfloat, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_radiusMatch_10
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong trainImage_nativeObj, jlong trainKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jfloat maxDistance, jlong mask_nativeObj, jboolean compactResult)
{
    static const char method_name[] = "features2d::radiusMatch_10()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector<KeyPoint> trainKeypoints;
        Mat& trainKeypoints_mat = *((Mat*)trainKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( trainKeypoints_mat, trainKeypoints );
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        Mat& trainImage = *((Mat*)trainImage_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        me->radiusMatch( queryImage, queryKeypoints, trainImage, trainKeypoints, matches, (float)maxDistance, mask, (bool)compactResult );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_radiusMatch_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_radiusMatch_11
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong trainImage_nativeObj, jlong trainKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jfloat maxDistance)
{
    static const char method_name[] = "features2d::radiusMatch_11()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector<KeyPoint> trainKeypoints;
        Mat& trainKeypoints_mat = *((Mat*)trainKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( trainKeypoints_mat, trainKeypoints );
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        Mat& trainImage = *((Mat*)trainImage_nativeObj);
        me->radiusMatch( queryImage, queryKeypoints, trainImage, trainKeypoints, matches, (float)maxDistance );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::radiusMatch(Mat queryImage, vector_KeyPoint queryKeypoints, vector_vector_DMatch& matches, float maxDistance, vector_Mat masks = vector<Mat>(), bool compactResult = false)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_radiusMatch_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jfloat, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_radiusMatch_12
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jfloat maxDistance, jlong masks_mat_nativeObj, jboolean compactResult)
{
    static const char method_name[] = "features2d::radiusMatch_12()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        vector<Mat> masks;
        Mat& masks_mat = *((Mat*)masks_mat_nativeObj);
        Mat_to_vector_Mat( masks_mat, masks );
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        me->radiusMatch( queryImage, queryKeypoints, matches, (float)maxDistance, masks, (bool)compactResult );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_radiusMatch_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_radiusMatch_13
  (JNIEnv* env, jclass , jlong self, jlong queryImage_nativeObj, jlong queryKeypoints_mat_nativeObj, jlong matches_mat_nativeObj, jfloat maxDistance)
{
    static const char method_name[] = "features2d::radiusMatch_13()";
    try {
        LOGD("%s", method_name);
        vector<KeyPoint> queryKeypoints;
        Mat& queryKeypoints_mat = *((Mat*)queryKeypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( queryKeypoints_mat, queryKeypoints );
        vector< vector<DMatch> > matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        Mat& queryImage = *((Mat*)queryImage_nativeObj);
        me->radiusMatch( queryImage, queryKeypoints, matches, (float)maxDistance );
        vector_vector_DMatch_to_Mat( matches, matches_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::read(string fileName)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_read_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_read_10
  (JNIEnv* env, jclass , jlong self, jstring fileName)
{
    static const char method_name[] = "features2d::read_10()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        const char* utf_fileName = env->GetStringUTFChars(fileName, 0); std::string n_fileName( utf_fileName ? utf_fileName : "" ); env->ReleaseStringUTFChars(fileName, utf_fileName);
        me->read( n_fileName );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::train()
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_train_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_train_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "features2d::train_10()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        me->train(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void javaGenericDescriptorMatcher::write(string fileName)
//

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_write_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_write_10
  (JNIEnv* env, jclass , jlong self, jstring fileName)
{
    static const char method_name[] = "features2d::write_10()";
    try {
        LOGD("%s", method_name);
        javaGenericDescriptorMatcher* me = (javaGenericDescriptorMatcher*) self; //TODO: check for NULL
        const char* utf_fileName = env->GetStringUTFChars(fileName, 0); std::string n_fileName( utf_fileName ? utf_fileName : "" ); env->ReleaseStringUTFChars(fileName, utf_fileName);
        me->write( n_fileName );
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
//  static void javaGenericDescriptorMatcher::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_features2d_GenericDescriptorMatcher_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (javaGenericDescriptorMatcher*) self;
}


} // extern "C"

#endif // HAVE_OPENCV_FEATURES2D
