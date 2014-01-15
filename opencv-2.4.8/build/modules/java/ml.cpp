
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.ml"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_ML
#include "opencv2/ml/ml.hpp"

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
//   EM::EM(int nclusters = EM::DEFAULT_NCLUSTERS, int covMatType = EM::COV_MAT_DIAGONAL, TermCriteria termCrit = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, EM::DEFAULT_MAX_ITERS, FLT_EPSILON))
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_EM_10 (JNIEnv*, jclass, jint, jint, jint, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_EM_10
  (JNIEnv* env, jclass , jint nclusters, jint covMatType, jint termCrit_type, jint termCrit_maxCount, jdouble termCrit_epsilon)
{
    static const char method_name[] = "ml::EM_10()";
    try {
        LOGD("%s", method_name);
        TermCriteria termCrit(termCrit_type, termCrit_maxCount, termCrit_epsilon);
        EM* _retval_ = new EM( (int)nclusters, (int)covMatType, termCrit );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_EM_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_EM_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::EM_11()";
    try {
        LOGD("%s", method_name);
        
        EM* _retval_ = new EM(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void EM::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::clear_10()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
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
//  bool EM::isTrained()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_isTrained_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_isTrained_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::isTrained_10()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
        bool _retval_ = me->isTrained(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Vec2d EM::predict(Mat sample, Mat& probs = Mat())
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_EM_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_EM_predict_10
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj, jlong probs_nativeObj)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        Mat& probs = *((Mat*)probs_nativeObj);
        Vec2d _retval_ = me->predict( sample, probs );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.val[0], _retval_.val[1]}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_EM_predict_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_EM_predict_11
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj)
{
    static const char method_name[] = "ml::predict_11()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        Vec2d _retval_ = me->predict( sample );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.val[0], _retval_.val[1]}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool EM::train(Mat samples, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_train_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_train_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong logLikelihoods_nativeObj, jlong labels_nativeObj, jlong probs_nativeObj)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& logLikelihoods = *((Mat*)logLikelihoods_nativeObj);
        Mat& labels = *((Mat*)labels_nativeObj);
        Mat& probs = *((Mat*)probs_nativeObj);
        bool _retval_ = me->train( samples, logLikelihoods, labels, probs );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_train_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_train_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        bool _retval_ = me->train( samples );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool EM::trainE(Mat samples, Mat means0, Mat covs0 = Mat(), Mat weights0 = Mat(), Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainE_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainE_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong means0_nativeObj, jlong covs0_nativeObj, jlong weights0_nativeObj, jlong logLikelihoods_nativeObj, jlong labels_nativeObj, jlong probs_nativeObj)
{
    static const char method_name[] = "ml::trainE_10()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& means0 = *((Mat*)means0_nativeObj);
        Mat& covs0 = *((Mat*)covs0_nativeObj);
        Mat& weights0 = *((Mat*)weights0_nativeObj);
        Mat& logLikelihoods = *((Mat*)logLikelihoods_nativeObj);
        Mat& labels = *((Mat*)labels_nativeObj);
        Mat& probs = *((Mat*)probs_nativeObj);
        bool _retval_ = me->trainE( samples, means0, covs0, weights0, logLikelihoods, labels, probs );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainE_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainE_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong means0_nativeObj)
{
    static const char method_name[] = "ml::trainE_11()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& means0 = *((Mat*)means0_nativeObj);
        bool _retval_ = me->trainE( samples, means0 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool EM::trainM(Mat samples, Mat probs0, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainM_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainM_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong probs0_nativeObj, jlong logLikelihoods_nativeObj, jlong labels_nativeObj, jlong probs_nativeObj)
{
    static const char method_name[] = "ml::trainM_10()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& probs0 = *((Mat*)probs0_nativeObj);
        Mat& logLikelihoods = *((Mat*)logLikelihoods_nativeObj);
        Mat& labels = *((Mat*)labels_nativeObj);
        Mat& probs = *((Mat*)probs_nativeObj);
        bool _retval_ = me->trainM( samples, probs0, logLikelihoods, labels, probs );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainM_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainM_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong probs0_nativeObj)
{
    static const char method_name[] = "ml::trainM_11()";
    try {
        LOGD("%s", method_name);
        EM* me = (EM*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& probs0 = *((Mat*)probs0_nativeObj);
        bool _retval_ = me->trainM( samples, probs0 );
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
//  static void EM::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_EM_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (EM*) self;
}


//
//   CvBoost::CvBoost()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvBoost_CvBoost_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvBoost_CvBoost_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvBoost_10()";
    try {
        LOGD("%s", method_name);
        
        CvBoost* _retval_ = new CvBoost(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   CvBoost::CvBoost(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvBoostParams params = CvBoostParams())
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvBoost_CvBoost_11 (JNIEnv*, jclass, jlong, jint, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvBoost_CvBoost_11
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong varType_nativeObj, jlong missingDataMask_nativeObj, jlong params_nativeObj)
{
    static const char method_name[] = "ml::CvBoost_11()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        Mat& varType = *((Mat*)varType_nativeObj);
        Mat& missingDataMask = *((Mat*)missingDataMask_nativeObj);
        CvBoost* _retval_ = new CvBoost( trainData, (int)tflag, responses, varIdx, sampleIdx, varType, missingDataMask, (*(CvBoostParams*)params_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvBoost_CvBoost_12 (JNIEnv*, jclass, jlong, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvBoost_CvBoost_12
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::CvBoost_12()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        CvBoost* _retval_ = new CvBoost( trainData, (int)tflag, responses );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void CvBoost::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoost_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoost_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::clear_10()";
    try {
        LOGD("%s", method_name);
        CvBoost* me = (CvBoost*) self; //TODO: check for NULL
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
//  float CvBoost::predict(Mat sample, Mat missing = cv::Mat(), Range slice = cv::Range::all(), bool rawMode = false, bool returnSum = false)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvBoost_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jboolean, jboolean);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvBoost_predict_10
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj, jlong missing_nativeObj, jint slice_start, jint slice_end, jboolean rawMode, jboolean returnSum)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        CvBoost* me = (CvBoost*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        Mat& missing = *((Mat*)missing_nativeObj);
        Range slice(slice_start, slice_end);
        float _retval_ = me->predict( sample, missing, slice, (bool)rawMode, (bool)returnSum );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvBoost_predict_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvBoost_predict_11
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj)
{
    static const char method_name[] = "ml::predict_11()";
    try {
        LOGD("%s", method_name);
        CvBoost* me = (CvBoost*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        float _retval_ = me->predict( sample );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void CvBoost::prune(CvSlice slice)
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoost_prune_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoost_prune_10
  (JNIEnv* env, jclass , jlong self, jint slice_start, jint slice_end)
{
    static const char method_name[] = "ml::prune_10()";
    try {
        LOGD("%s", method_name);
        CvBoost* me = (CvBoost*) self; //TODO: check for NULL
        Range slice(slice_start, slice_end);
        me->prune( slice );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool CvBoost::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvBoostParams params = CvBoostParams(), bool update = false)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvBoost_train_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvBoost_train_10
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong varType_nativeObj, jlong missingDataMask_nativeObj, jlong params_nativeObj, jboolean update)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        CvBoost* me = (CvBoost*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        Mat& varType = *((Mat*)varType_nativeObj);
        Mat& missingDataMask = *((Mat*)missingDataMask_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses, varIdx, sampleIdx, varType, missingDataMask, (*(CvBoostParams*)params_nativeObj), (bool)update );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvBoost_train_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvBoost_train_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        CvBoost* me = (CvBoost*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses );
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
//  static void CvBoost::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoost_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoost_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvBoost*) self;
}


//
//   CvRTrees::CvRTrees()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvRTrees_CvRTrees_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvRTrees_CvRTrees_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvRTrees_10()";
    try {
        LOGD("%s", method_name);
        
        CvRTrees* _retval_ = new CvRTrees(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void CvRTrees::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTrees_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTrees_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::clear_10()";
    try {
        LOGD("%s", method_name);
        CvRTrees* me = (CvRTrees*) self; //TODO: check for NULL
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
//  Mat CvRTrees::getVarImportance()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvRTrees_getVarImportance_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvRTrees_getVarImportance_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getVarImportance_10()";
    try {
        LOGD("%s", method_name);
        CvRTrees* me = (CvRTrees*) self; //TODO: check for NULL
        Mat _retval_ = me->getVarImportance(  );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float CvRTrees::predict(Mat sample, Mat missing = cv::Mat())
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvRTrees_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvRTrees_predict_10
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj, jlong missing_nativeObj)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        CvRTrees* me = (CvRTrees*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        Mat& missing = *((Mat*)missing_nativeObj);
        float _retval_ = me->predict( sample, missing );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvRTrees_predict_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvRTrees_predict_11
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj)
{
    static const char method_name[] = "ml::predict_11()";
    try {
        LOGD("%s", method_name);
        CvRTrees* me = (CvRTrees*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        float _retval_ = me->predict( sample );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float CvRTrees::predict_prob(Mat sample, Mat missing = cv::Mat())
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvRTrees_predict_1prob_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvRTrees_predict_1prob_10
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj, jlong missing_nativeObj)
{
    static const char method_name[] = "ml::predict_1prob_10()";
    try {
        LOGD("%s", method_name);
        CvRTrees* me = (CvRTrees*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        Mat& missing = *((Mat*)missing_nativeObj);
        float _retval_ = me->predict_prob( sample, missing );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvRTrees_predict_1prob_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvRTrees_predict_1prob_11
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj)
{
    static const char method_name[] = "ml::predict_1prob_11()";
    try {
        LOGD("%s", method_name);
        CvRTrees* me = (CvRTrees*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        float _retval_ = me->predict_prob( sample );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool CvRTrees::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvRTParams params = CvRTParams())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvRTrees_train_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvRTrees_train_10
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong varType_nativeObj, jlong missingDataMask_nativeObj, jlong params_nativeObj)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        CvRTrees* me = (CvRTrees*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        Mat& varType = *((Mat*)varType_nativeObj);
        Mat& missingDataMask = *((Mat*)missingDataMask_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses, varIdx, sampleIdx, varType, missingDataMask, (*(CvRTParams*)params_nativeObj) );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvRTrees_train_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvRTrees_train_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        CvRTrees* me = (CvRTrees*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses );
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
//  static void CvRTrees::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTrees_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTrees_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvRTrees*) self;
}


//
//   CvParamGrid::CvParamGrid()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvParamGrid_CvParamGrid_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvParamGrid_CvParamGrid_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvParamGrid_10()";
    try {
        LOGD("%s", method_name);
        
        CvParamGrid* _retval_ = new CvParamGrid(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// double CvParamGrid::min_val
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvParamGrid_get_1min_1val_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvParamGrid_get_1min_1val_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1min_1val_10()";
    try {
        LOGD("%s", method_name);
        CvParamGrid* me = (CvParamGrid*) self; //TODO: check for NULL
        double _retval_ = me->min_val;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvParamGrid::min_val
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvParamGrid_set_1min_1val_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvParamGrid_set_1min_1val_10
  (JNIEnv* env, jclass , jlong self, jdouble min_val)
{
    static const char method_name[] = "ml::set_1min_1val_10()";
    try {
        LOGD("%s", method_name);
        CvParamGrid* me = (CvParamGrid*) self; //TODO: check for NULL
        me->min_val = ( (double)min_val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvParamGrid::max_val
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvParamGrid_get_1max_1val_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvParamGrid_get_1max_1val_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1max_1val_10()";
    try {
        LOGD("%s", method_name);
        CvParamGrid* me = (CvParamGrid*) self; //TODO: check for NULL
        double _retval_ = me->max_val;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvParamGrid::max_val
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvParamGrid_set_1max_1val_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvParamGrid_set_1max_1val_10
  (JNIEnv* env, jclass , jlong self, jdouble max_val)
{
    static const char method_name[] = "ml::set_1max_1val_10()";
    try {
        LOGD("%s", method_name);
        CvParamGrid* me = (CvParamGrid*) self; //TODO: check for NULL
        me->max_val = ( (double)max_val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvParamGrid::step
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvParamGrid_get_1step_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvParamGrid_get_1step_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1step_10()";
    try {
        LOGD("%s", method_name);
        CvParamGrid* me = (CvParamGrid*) self; //TODO: check for NULL
        double _retval_ = me->step;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvParamGrid::step
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvParamGrid_set_1step_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvParamGrid_set_1step_10
  (JNIEnv* env, jclass , jlong self, jdouble step)
{
    static const char method_name[] = "ml::set_1step_10()";
    try {
        LOGD("%s", method_name);
        CvParamGrid* me = (CvParamGrid*) self; //TODO: check for NULL
        me->step = ( (double)step );
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
//  static void CvParamGrid::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvParamGrid_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvParamGrid_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvParamGrid*) self;
}


//
//   CvGBTreesParams::CvGBTreesParams()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvGBTreesParams_CvGBTreesParams_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvGBTreesParams_CvGBTreesParams_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvGBTreesParams_10()";
    try {
        LOGD("%s", method_name);
        
        CvGBTreesParams* _retval_ = new CvGBTreesParams(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int CvGBTreesParams::weak_count
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvGBTreesParams_get_1weak_1count_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvGBTreesParams_get_1weak_1count_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1weak_1count_10()";
    try {
        LOGD("%s", method_name);
        CvGBTreesParams* me = (CvGBTreesParams*) self; //TODO: check for NULL
        int _retval_ = me->weak_count;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvGBTreesParams::weak_count
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_set_1weak_1count_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_set_1weak_1count_10
  (JNIEnv* env, jclass , jlong self, jint weak_count)
{
    static const char method_name[] = "ml::set_1weak_1count_10()";
    try {
        LOGD("%s", method_name);
        CvGBTreesParams* me = (CvGBTreesParams*) self; //TODO: check for NULL
        me->weak_count = ( (int)weak_count );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int CvGBTreesParams::loss_function_type
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvGBTreesParams_get_1loss_1function_1type_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvGBTreesParams_get_1loss_1function_1type_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1loss_1function_1type_10()";
    try {
        LOGD("%s", method_name);
        CvGBTreesParams* me = (CvGBTreesParams*) self; //TODO: check for NULL
        int _retval_ = me->loss_function_type;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvGBTreesParams::loss_function_type
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_set_1loss_1function_1type_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_set_1loss_1function_1type_10
  (JNIEnv* env, jclass , jlong self, jint loss_function_type)
{
    static const char method_name[] = "ml::set_1loss_1function_1type_10()";
    try {
        LOGD("%s", method_name);
        CvGBTreesParams* me = (CvGBTreesParams*) self; //TODO: check for NULL
        me->loss_function_type = ( (int)loss_function_type );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// float CvGBTreesParams::subsample_portion
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvGBTreesParams_get_1subsample_1portion_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvGBTreesParams_get_1subsample_1portion_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1subsample_1portion_10()";
    try {
        LOGD("%s", method_name);
        CvGBTreesParams* me = (CvGBTreesParams*) self; //TODO: check for NULL
        float _retval_ = me->subsample_portion;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvGBTreesParams::subsample_portion
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_set_1subsample_1portion_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_set_1subsample_1portion_10
  (JNIEnv* env, jclass , jlong self, jfloat subsample_portion)
{
    static const char method_name[] = "ml::set_1subsample_1portion_10()";
    try {
        LOGD("%s", method_name);
        CvGBTreesParams* me = (CvGBTreesParams*) self; //TODO: check for NULL
        me->subsample_portion = ( (float)subsample_portion );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// float CvGBTreesParams::shrinkage
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvGBTreesParams_get_1shrinkage_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvGBTreesParams_get_1shrinkage_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1shrinkage_10()";
    try {
        LOGD("%s", method_name);
        CvGBTreesParams* me = (CvGBTreesParams*) self; //TODO: check for NULL
        float _retval_ = me->shrinkage;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvGBTreesParams::shrinkage
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_set_1shrinkage_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_set_1shrinkage_10
  (JNIEnv* env, jclass , jlong self, jfloat shrinkage)
{
    static const char method_name[] = "ml::set_1shrinkage_10()";
    try {
        LOGD("%s", method_name);
        CvGBTreesParams* me = (CvGBTreesParams*) self; //TODO: check for NULL
        me->shrinkage = ( (float)shrinkage );
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
//  static void CvGBTreesParams::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTreesParams_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvGBTreesParams*) self;
}


//
//  void CvStatModel::load(c_string filename, c_string name = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_load_10 (JNIEnv*, jclass, jlong, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_load_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jstring name)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        CvStatModel* me = (CvStatModel*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        me->load( n_filename.c_str(), n_name.c_str() );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_load_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_load_11
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    static const char method_name[] = "ml::load_11()";
    try {
        LOGD("%s", method_name);
        CvStatModel* me = (CvStatModel*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        me->load( n_filename.c_str() );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void CvStatModel::save(c_string filename, c_string name = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_save_10 (JNIEnv*, jclass, jlong, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_save_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jstring name)
{
    static const char method_name[] = "ml::save_10()";
    try {
        LOGD("%s", method_name);
        CvStatModel* me = (CvStatModel*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_name = env->GetStringUTFChars(name, 0); std::string n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        me->save( n_filename.c_str(), n_name.c_str() );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_save_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_save_11
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    static const char method_name[] = "ml::save_11()";
    try {
        LOGD("%s", method_name);
        CvStatModel* me = (CvStatModel*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        me->save( n_filename.c_str() );
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
//  static void CvStatModel::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvStatModel_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvStatModel*) self;
}


//
//   CvSVMParams::CvSVMParams()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvSVMParams_CvSVMParams_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvSVMParams_CvSVMParams_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvSVMParams_10()";
    try {
        LOGD("%s", method_name);
        
        CvSVMParams* _retval_ = new CvSVMParams(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int CvSVMParams::svm_type
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvSVMParams_get_1svm_1type_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvSVMParams_get_1svm_1type_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1svm_1type_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        int _retval_ = me->svm_type;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvSVMParams::svm_type
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1svm_1type_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1svm_1type_10
  (JNIEnv* env, jclass , jlong self, jint svm_type)
{
    static const char method_name[] = "ml::set_1svm_1type_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        me->svm_type = ( (int)svm_type );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int CvSVMParams::kernel_type
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvSVMParams_get_1kernel_1type_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvSVMParams_get_1kernel_1type_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1kernel_1type_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        int _retval_ = me->kernel_type;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvSVMParams::kernel_type
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1kernel_1type_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1kernel_1type_10
  (JNIEnv* env, jclass , jlong self, jint kernel_type)
{
    static const char method_name[] = "ml::set_1kernel_1type_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        me->kernel_type = ( (int)kernel_type );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvSVMParams::degree
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1degree_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1degree_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1degree_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        double _retval_ = me->degree;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvSVMParams::degree
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1degree_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1degree_10
  (JNIEnv* env, jclass , jlong self, jdouble degree)
{
    static const char method_name[] = "ml::set_1degree_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        me->degree = ( (double)degree );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvSVMParams::gamma
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1gamma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1gamma_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1gamma_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        double _retval_ = me->gamma;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvSVMParams::gamma
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1gamma_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1gamma_10
  (JNIEnv* env, jclass , jlong self, jdouble gamma)
{
    static const char method_name[] = "ml::set_1gamma_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        me->gamma = ( (double)gamma );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvSVMParams::coef0
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1coef0_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1coef0_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1coef0_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        double _retval_ = me->coef0;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvSVMParams::coef0
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1coef0_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1coef0_10
  (JNIEnv* env, jclass , jlong self, jdouble coef0)
{
    static const char method_name[] = "ml::set_1coef0_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        me->coef0 = ( (double)coef0 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvSVMParams::C
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1C_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1C_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1C_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        double _retval_ = me->C;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvSVMParams::C
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1C_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1C_10
  (JNIEnv* env, jclass , jlong self, jdouble C)
{
    static const char method_name[] = "ml::set_1C_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        me->C = ( (double)C );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvSVMParams::nu
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1nu_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1nu_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1nu_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        double _retval_ = me->nu;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvSVMParams::nu
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1nu_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1nu_10
  (JNIEnv* env, jclass , jlong self, jdouble nu)
{
    static const char method_name[] = "ml::set_1nu_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        me->nu = ( (double)nu );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvSVMParams::p
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1p_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvSVMParams_get_1p_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1p_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        double _retval_ = me->p;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvSVMParams::p
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1p_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1p_10
  (JNIEnv* env, jclass , jlong self, jdouble p)
{
    static const char method_name[] = "ml::set_1p_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        me->p = ( (double)p );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// TermCriteria CvSVMParams::term_crit
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_CvSVMParams_get_1term_1crit_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_CvSVMParams_get_1term_1crit_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1term_1crit_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        TermCriteria _retval_ = me->term_crit;//(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(3);  jdouble _tmp_retval_[3] = {_retval_.type, _retval_.maxCount, _retval_.epsilon}; env->SetDoubleArrayRegion(_da_retval_, 0, 3, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvSVMParams::term_crit
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1term_1crit_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_set_1term_1crit_10
  (JNIEnv* env, jclass , jlong self, jint term_crit_type, jint term_crit_maxCount, jdouble term_crit_epsilon)
{
    static const char method_name[] = "ml::set_1term_1crit_10()";
    try {
        LOGD("%s", method_name);
        CvSVMParams* me = (CvSVMParams*) self; //TODO: check for NULL
        TermCriteria term_crit(term_crit_type, term_crit_maxCount, term_crit_epsilon);
        me->term_crit = ( term_crit );
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
//  static void CvSVMParams::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVMParams_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvSVMParams*) self;
}


//
//   CvRTParams::CvRTParams()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvRTParams_CvRTParams_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvRTParams_CvRTParams_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvRTParams_10()";
    try {
        LOGD("%s", method_name);
        
        CvRTParams* _retval_ = new CvRTParams(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// bool CvRTParams::calc_var_importance
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvRTParams_get_1calc_1var_1importance_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvRTParams_get_1calc_1var_1importance_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1calc_1var_1importance_10()";
    try {
        LOGD("%s", method_name);
        CvRTParams* me = (CvRTParams*) self; //TODO: check for NULL
        bool _retval_ = me->calc_var_importance;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvRTParams::calc_var_importance
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTParams_set_1calc_1var_1importance_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTParams_set_1calc_1var_1importance_10
  (JNIEnv* env, jclass , jlong self, jboolean calc_var_importance)
{
    static const char method_name[] = "ml::set_1calc_1var_1importance_10()";
    try {
        LOGD("%s", method_name);
        CvRTParams* me = (CvRTParams*) self; //TODO: check for NULL
        me->calc_var_importance = ( (bool)calc_var_importance );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int CvRTParams::nactive_vars
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvRTParams_get_1nactive_1vars_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvRTParams_get_1nactive_1vars_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1nactive_1vars_10()";
    try {
        LOGD("%s", method_name);
        CvRTParams* me = (CvRTParams*) self; //TODO: check for NULL
        int _retval_ = me->nactive_vars;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvRTParams::nactive_vars
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTParams_set_1nactive_1vars_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTParams_set_1nactive_1vars_10
  (JNIEnv* env, jclass , jlong self, jint nactive_vars)
{
    static const char method_name[] = "ml::set_1nactive_1vars_10()";
    try {
        LOGD("%s", method_name);
        CvRTParams* me = (CvRTParams*) self; //TODO: check for NULL
        me->nactive_vars = ( (int)nactive_vars );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// TermCriteria CvRTParams::term_crit
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_CvRTParams_get_1term_1crit_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_CvRTParams_get_1term_1crit_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1term_1crit_10()";
    try {
        LOGD("%s", method_name);
        CvRTParams* me = (CvRTParams*) self; //TODO: check for NULL
        TermCriteria _retval_ = me->term_crit;//(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(3);  jdouble _tmp_retval_[3] = {_retval_.type, _retval_.maxCount, _retval_.epsilon}; env->SetDoubleArrayRegion(_da_retval_, 0, 3, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvRTParams::term_crit
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTParams_set_1term_1crit_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTParams_set_1term_1crit_10
  (JNIEnv* env, jclass , jlong self, jint term_crit_type, jint term_crit_maxCount, jdouble term_crit_epsilon)
{
    static const char method_name[] = "ml::set_1term_1crit_10()";
    try {
        LOGD("%s", method_name);
        CvRTParams* me = (CvRTParams*) self; //TODO: check for NULL
        TermCriteria term_crit(term_crit_type, term_crit_maxCount, term_crit_epsilon);
        me->term_crit = ( term_crit );
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
//  static void CvRTParams::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTParams_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvRTParams_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvRTParams*) self;
}


//
//   CvDTree::CvDTree()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvDTree_CvDTree_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvDTree_CvDTree_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvDTree_10()";
    try {
        LOGD("%s", method_name);
        
        CvDTree* _retval_ = new CvDTree(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void CvDTree::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTree_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTree_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::clear_10()";
    try {
        LOGD("%s", method_name);
        CvDTree* me = (CvDTree*) self; //TODO: check for NULL
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
//  Mat CvDTree::getVarImportance()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvDTree_getVarImportance_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvDTree_getVarImportance_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getVarImportance_10()";
    try {
        LOGD("%s", method_name);
        CvDTree* me = (CvDTree*) self; //TODO: check for NULL
        Mat _retval_ = me->getVarImportance(  );
        return (jlong) new Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool CvDTree::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvDTreeParams params = CvDTreeParams())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTree_train_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTree_train_10
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong varType_nativeObj, jlong missingDataMask_nativeObj, jlong params_nativeObj)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        CvDTree* me = (CvDTree*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        Mat& varType = *((Mat*)varType_nativeObj);
        Mat& missingDataMask = *((Mat*)missingDataMask_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses, varIdx, sampleIdx, varType, missingDataMask, (*(CvDTreeParams*)params_nativeObj) );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTree_train_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTree_train_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        CvDTree* me = (CvDTree*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses );
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
//  static void CvDTree::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTree_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTree_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvDTree*) self;
}


//
//   CvKNearest::CvKNearest()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvKNearest_CvKNearest_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvKNearest_CvKNearest_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvKNearest_10()";
    try {
        LOGD("%s", method_name);
        
        CvKNearest* _retval_ = new CvKNearest(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   CvKNearest::CvKNearest(Mat trainData, Mat responses, Mat sampleIdx = cv::Mat(), bool isRegression = false, int max_k = 32)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvKNearest_CvKNearest_11 (JNIEnv*, jclass, jlong, jlong, jlong, jboolean, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvKNearest_CvKNearest_11
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jlong responses_nativeObj, jlong sampleIdx_nativeObj, jboolean isRegression, jint max_k)
{
    static const char method_name[] = "ml::CvKNearest_11()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        CvKNearest* _retval_ = new CvKNearest( trainData, responses, sampleIdx, (bool)isRegression, (int)max_k );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvKNearest_CvKNearest_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvKNearest_CvKNearest_12
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::CvKNearest_12()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        CvKNearest* _retval_ = new CvKNearest( trainData, responses );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float CvKNearest::find_nearest(Mat samples, int k, Mat& results, Mat& neighborResponses, Mat& dists)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvKNearest_find_1nearest_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvKNearest_find_1nearest_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jint k, jlong results_nativeObj, jlong neighborResponses_nativeObj, jlong dists_nativeObj)
{
    static const char method_name[] = "ml::find_1nearest_10()";
    try {
        LOGD("%s", method_name);
        CvKNearest* me = (CvKNearest*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& results = *((Mat*)results_nativeObj);
        Mat& neighborResponses = *((Mat*)neighborResponses_nativeObj);
        Mat& dists = *((Mat*)dists_nativeObj);
        float _retval_ = me->find_nearest( samples, (int)k, results, neighborResponses, dists );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool CvKNearest::train(Mat trainData, Mat responses, Mat sampleIdx = cv::Mat(), bool isRegression = false, int maxK = 32, bool updateBase = false)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvKNearest_train_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jboolean, jint, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvKNearest_train_10
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jlong responses_nativeObj, jlong sampleIdx_nativeObj, jboolean isRegression, jint maxK, jboolean updateBase)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        CvKNearest* me = (CvKNearest*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        bool _retval_ = me->train( trainData, responses, sampleIdx, (bool)isRegression, (int)maxK, (bool)updateBase );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvKNearest_train_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvKNearest_train_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        CvKNearest* me = (CvKNearest*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = me->train( trainData, responses );
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
//  static void CvKNearest::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvKNearest_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvKNearest_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvKNearest*) self;
}


//
//   CvERTrees::CvERTrees()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvERTrees_CvERTrees_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvERTrees_CvERTrees_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvERTrees_10()";
    try {
        LOGD("%s", method_name);
        
        CvERTrees* _retval_ = new CvERTrees(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool CvERTrees::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvRTParams params = CvRTParams())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvERTrees_train_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvERTrees_train_10
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong varType_nativeObj, jlong missingDataMask_nativeObj, jlong params_nativeObj)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        CvERTrees* me = (CvERTrees*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        Mat& varType = *((Mat*)varType_nativeObj);
        Mat& missingDataMask = *((Mat*)missingDataMask_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses, varIdx, sampleIdx, varType, missingDataMask, (*(CvRTParams*)params_nativeObj) );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvERTrees_train_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvERTrees_train_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        CvERTrees* me = (CvERTrees*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses );
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
//  static void CvERTrees::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvERTrees_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvERTrees_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvERTrees*) self;
}


//
//   CvANN_MLP_TrainParams::CvANN_MLP_TrainParams()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_CvANN_1MLP_1TrainParams_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_CvANN_1MLP_1TrainParams_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvANN_1MLP_1TrainParams_10()";
    try {
        LOGD("%s", method_name);
        
        CvANN_MLP_TrainParams* _retval_ = new CvANN_MLP_TrainParams(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// TermCriteria CvANN_MLP_TrainParams::term_crit
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1term_1crit_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1term_1crit_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1term_1crit_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        TermCriteria _retval_ = me->term_crit;//(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(3);  jdouble _tmp_retval_[3] = {_retval_.type, _retval_.maxCount, _retval_.epsilon}; env->SetDoubleArrayRegion(_da_retval_, 0, 3, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvANN_MLP_TrainParams::term_crit
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1term_1crit_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1term_1crit_10
  (JNIEnv* env, jclass , jlong self, jint term_crit_type, jint term_crit_maxCount, jdouble term_crit_epsilon)
{
    static const char method_name[] = "ml::set_1term_1crit_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        TermCriteria term_crit(term_crit_type, term_crit_maxCount, term_crit_epsilon);
        me->term_crit = ( term_crit );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int CvANN_MLP_TrainParams::train_method
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1train_1method_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1train_1method_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1train_1method_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        int _retval_ = me->train_method;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvANN_MLP_TrainParams::train_method
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1train_1method_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1train_1method_10
  (JNIEnv* env, jclass , jlong self, jint train_method)
{
    static const char method_name[] = "ml::set_1train_1method_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        me->train_method = ( (int)train_method );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvANN_MLP_TrainParams::bp_dw_scale
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1bp_1dw_1scale_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1bp_1dw_1scale_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1bp_1dw_1scale_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        double _retval_ = me->bp_dw_scale;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvANN_MLP_TrainParams::bp_dw_scale
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1bp_1dw_1scale_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1bp_1dw_1scale_10
  (JNIEnv* env, jclass , jlong self, jdouble bp_dw_scale)
{
    static const char method_name[] = "ml::set_1bp_1dw_1scale_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        me->bp_dw_scale = ( (double)bp_dw_scale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvANN_MLP_TrainParams::bp_moment_scale
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1bp_1moment_1scale_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1bp_1moment_1scale_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1bp_1moment_1scale_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        double _retval_ = me->bp_moment_scale;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvANN_MLP_TrainParams::bp_moment_scale
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1bp_1moment_1scale_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1bp_1moment_1scale_10
  (JNIEnv* env, jclass , jlong self, jdouble bp_moment_scale)
{
    static const char method_name[] = "ml::set_1bp_1moment_1scale_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        me->bp_moment_scale = ( (double)bp_moment_scale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvANN_MLP_TrainParams::rp_dw0
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw0_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw0_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1rp_1dw0_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        double _retval_ = me->rp_dw0;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvANN_MLP_TrainParams::rp_dw0
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw0_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw0_10
  (JNIEnv* env, jclass , jlong self, jdouble rp_dw0)
{
    static const char method_name[] = "ml::set_1rp_1dw0_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        me->rp_dw0 = ( (double)rp_dw0 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvANN_MLP_TrainParams::rp_dw_plus
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw_1plus_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw_1plus_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1rp_1dw_1plus_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        double _retval_ = me->rp_dw_plus;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvANN_MLP_TrainParams::rp_dw_plus
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw_1plus_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw_1plus_10
  (JNIEnv* env, jclass , jlong self, jdouble rp_dw_plus)
{
    static const char method_name[] = "ml::set_1rp_1dw_1plus_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        me->rp_dw_plus = ( (double)rp_dw_plus );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvANN_MLP_TrainParams::rp_dw_minus
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw_1minus_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw_1minus_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1rp_1dw_1minus_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        double _retval_ = me->rp_dw_minus;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvANN_MLP_TrainParams::rp_dw_minus
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw_1minus_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw_1minus_10
  (JNIEnv* env, jclass , jlong self, jdouble rp_dw_minus)
{
    static const char method_name[] = "ml::set_1rp_1dw_1minus_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        me->rp_dw_minus = ( (double)rp_dw_minus );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvANN_MLP_TrainParams::rp_dw_min
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw_1min_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw_1min_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1rp_1dw_1min_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        double _retval_ = me->rp_dw_min;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvANN_MLP_TrainParams::rp_dw_min
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw_1min_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw_1min_10
  (JNIEnv* env, jclass , jlong self, jdouble rp_dw_min)
{
    static const char method_name[] = "ml::set_1rp_1dw_1min_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        me->rp_dw_min = ( (double)rp_dw_min );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvANN_MLP_TrainParams::rp_dw_max
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw_1max_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_get_1rp_1dw_1max_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1rp_1dw_1max_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        double _retval_ = me->rp_dw_max;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvANN_MLP_TrainParams::rp_dw_max
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw_1max_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_set_1rp_1dw_1max_10
  (JNIEnv* env, jclass , jlong self, jdouble rp_dw_max)
{
    static const char method_name[] = "ml::set_1rp_1dw_1max_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP_TrainParams* me = (CvANN_MLP_TrainParams*) self; //TODO: check for NULL
        me->rp_dw_max = ( (double)rp_dw_max );
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
//  static void CvANN_MLP_TrainParams::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_1TrainParams_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvANN_MLP_TrainParams*) self;
}


//
//   CvNormalBayesClassifier::CvNormalBayesClassifier()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_CvNormalBayesClassifier_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_CvNormalBayesClassifier_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvNormalBayesClassifier_10()";
    try {
        LOGD("%s", method_name);
        
        CvNormalBayesClassifier* _retval_ = new CvNormalBayesClassifier(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   CvNormalBayesClassifier::CvNormalBayesClassifier(Mat trainData, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat())
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_CvNormalBayesClassifier_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_CvNormalBayesClassifier_11
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj)
{
    static const char method_name[] = "ml::CvNormalBayesClassifier_11()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        CvNormalBayesClassifier* _retval_ = new CvNormalBayesClassifier( trainData, responses, varIdx, sampleIdx );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_CvNormalBayesClassifier_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_CvNormalBayesClassifier_12
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::CvNormalBayesClassifier_12()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        CvNormalBayesClassifier* _retval_ = new CvNormalBayesClassifier( trainData, responses );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void CvNormalBayesClassifier::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::clear_10()";
    try {
        LOGD("%s", method_name);
        CvNormalBayesClassifier* me = (CvNormalBayesClassifier*) self; //TODO: check for NULL
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
//  float CvNormalBayesClassifier::predict(Mat samples, Mat* results = 0)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_predict_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong results_nativeObj)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        CvNormalBayesClassifier* me = (CvNormalBayesClassifier*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& results = *((Mat*)results_nativeObj);
        float _retval_ = me->predict( samples, &results );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_predict_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_predict_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj)
{
    static const char method_name[] = "ml::predict_11()";
    try {
        LOGD("%s", method_name);
        CvNormalBayesClassifier* me = (CvNormalBayesClassifier*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        float _retval_ = me->predict( samples );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool CvNormalBayesClassifier::train(Mat trainData, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), bool update = false)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_train_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_train_10
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jboolean update)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        CvNormalBayesClassifier* me = (CvNormalBayesClassifier*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        bool _retval_ = me->train( trainData, responses, varIdx, sampleIdx, (bool)update );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_train_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_train_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        CvNormalBayesClassifier* me = (CvNormalBayesClassifier*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = me->train( trainData, responses );
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
//  static void CvNormalBayesClassifier::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvNormalBayesClassifier_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvNormalBayesClassifier*) self;
}


//
//   CvBoostParams::CvBoostParams()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvBoostParams_CvBoostParams_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvBoostParams_CvBoostParams_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvBoostParams_10()";
    try {
        LOGD("%s", method_name);
        
        CvBoostParams* _retval_ = new CvBoostParams(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int CvBoostParams::boost_type
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvBoostParams_get_1boost_1type_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvBoostParams_get_1boost_1type_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1boost_1type_10()";
    try {
        LOGD("%s", method_name);
        CvBoostParams* me = (CvBoostParams*) self; //TODO: check for NULL
        int _retval_ = me->boost_type;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvBoostParams::boost_type
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_set_1boost_1type_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_set_1boost_1type_10
  (JNIEnv* env, jclass , jlong self, jint boost_type)
{
    static const char method_name[] = "ml::set_1boost_1type_10()";
    try {
        LOGD("%s", method_name);
        CvBoostParams* me = (CvBoostParams*) self; //TODO: check for NULL
        me->boost_type = ( (int)boost_type );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int CvBoostParams::weak_count
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvBoostParams_get_1weak_1count_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvBoostParams_get_1weak_1count_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1weak_1count_10()";
    try {
        LOGD("%s", method_name);
        CvBoostParams* me = (CvBoostParams*) self; //TODO: check for NULL
        int _retval_ = me->weak_count;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvBoostParams::weak_count
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_set_1weak_1count_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_set_1weak_1count_10
  (JNIEnv* env, jclass , jlong self, jint weak_count)
{
    static const char method_name[] = "ml::set_1weak_1count_10()";
    try {
        LOGD("%s", method_name);
        CvBoostParams* me = (CvBoostParams*) self; //TODO: check for NULL
        me->weak_count = ( (int)weak_count );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int CvBoostParams::split_criteria
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvBoostParams_get_1split_1criteria_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvBoostParams_get_1split_1criteria_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1split_1criteria_10()";
    try {
        LOGD("%s", method_name);
        CvBoostParams* me = (CvBoostParams*) self; //TODO: check for NULL
        int _retval_ = me->split_criteria;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvBoostParams::split_criteria
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_set_1split_1criteria_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_set_1split_1criteria_10
  (JNIEnv* env, jclass , jlong self, jint split_criteria)
{
    static const char method_name[] = "ml::set_1split_1criteria_10()";
    try {
        LOGD("%s", method_name);
        CvBoostParams* me = (CvBoostParams*) self; //TODO: check for NULL
        me->split_criteria = ( (int)split_criteria );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double CvBoostParams::weight_trim_rate
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvBoostParams_get_1weight_1trim_1rate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_CvBoostParams_get_1weight_1trim_1rate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1weight_1trim_1rate_10()";
    try {
        LOGD("%s", method_name);
        CvBoostParams* me = (CvBoostParams*) self; //TODO: check for NULL
        double _retval_ = me->weight_trim_rate;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvBoostParams::weight_trim_rate
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_set_1weight_1trim_1rate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_set_1weight_1trim_1rate_10
  (JNIEnv* env, jclass , jlong self, jdouble weight_trim_rate)
{
    static const char method_name[] = "ml::set_1weight_1trim_1rate_10()";
    try {
        LOGD("%s", method_name);
        CvBoostParams* me = (CvBoostParams*) self; //TODO: check for NULL
        me->weight_trim_rate = ( (double)weight_trim_rate );
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
//  static void CvBoostParams::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvBoostParams_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvBoostParams*) self;
}


//
//   CvSVM::CvSVM()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvSVM_CvSVM_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvSVM_CvSVM_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvSVM_10()";
    try {
        LOGD("%s", method_name);
        
        CvSVM* _retval_ = new CvSVM(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   CvSVM::CvSVM(Mat trainData, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), CvSVMParams params = CvSVMParams())
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvSVM_CvSVM_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvSVM_CvSVM_11
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong params_nativeObj)
{
    static const char method_name[] = "ml::CvSVM_11()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        CvSVM* _retval_ = new CvSVM( trainData, responses, varIdx, sampleIdx, (*(CvSVMParams*)params_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvSVM_CvSVM_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvSVM_CvSVM_12
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::CvSVM_12()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        CvSVM* _retval_ = new CvSVM( trainData, responses );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void CvSVM::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVM_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVM_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::clear_10()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
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
//  int CvSVM::get_support_vector_count()
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvSVM_get_1support_1vector_1count_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvSVM_get_1support_1vector_1count_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1support_1vector_1count_10()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
        int _retval_ = me->get_support_vector_count(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int CvSVM::get_var_count()
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvSVM_get_1var_1count_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvSVM_get_1var_1count_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1var_1count_10()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
        int _retval_ = me->get_var_count(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float CvSVM::predict(Mat sample, bool returnDFVal = false)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvSVM_predict_10 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvSVM_predict_10
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj, jboolean returnDFVal)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        float _retval_ = me->predict( sample, (bool)returnDFVal );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvSVM_predict_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvSVM_predict_11
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj)
{
    static const char method_name[] = "ml::predict_11()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        float _retval_ = me->predict( sample );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void CvSVM::predict(Mat samples, Mat& results)
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVM_predict_1all_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVM_predict_1all_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong results_nativeObj)
{
    static const char method_name[] = "ml::predict_1all_10()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& results = *((Mat*)results_nativeObj);
        me->predict( samples, results );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  bool CvSVM::train(Mat trainData, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), CvSVMParams params = CvSVMParams())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvSVM_train_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvSVM_train_10
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong params_nativeObj)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        bool _retval_ = me->train( trainData, responses, varIdx, sampleIdx, (*(CvSVMParams*)params_nativeObj) );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvSVM_train_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvSVM_train_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = me->train( trainData, responses );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool CvSVM::train_auto(Mat trainData, Mat responses, Mat varIdx, Mat sampleIdx, CvSVMParams params, int k_fold = 10, CvParamGrid Cgrid = CvSVM::get_default_grid(CvSVM::C), CvParamGrid gammaGrid = CvSVM::get_default_grid(CvSVM::GAMMA), CvParamGrid pGrid = CvSVM::get_default_grid(CvSVM::P), CvParamGrid nuGrid = CvSVM::get_default_grid(CvSVM::NU), CvParamGrid coeffGrid = CvSVM::get_default_grid(CvSVM::COEF), CvParamGrid degreeGrid = CvSVM::get_default_grid(CvSVM::DEGREE), bool balanced = false)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvSVM_train_1auto_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jint, jlong, jlong, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvSVM_train_1auto_10
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong params_nativeObj, jint k_fold, jlong Cgrid_nativeObj, jlong gammaGrid_nativeObj, jlong pGrid_nativeObj, jlong nuGrid_nativeObj, jlong coeffGrid_nativeObj, jlong degreeGrid_nativeObj, jboolean balanced)
{
    static const char method_name[] = "ml::train_1auto_10()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        bool _retval_ = me->train_auto( trainData, responses, varIdx, sampleIdx, (*(CvSVMParams*)params_nativeObj), (int)k_fold, (*(CvParamGrid*)Cgrid_nativeObj), (*(CvParamGrid*)gammaGrid_nativeObj), (*(CvParamGrid*)pGrid_nativeObj), (*(CvParamGrid*)nuGrid_nativeObj), (*(CvParamGrid*)coeffGrid_nativeObj), (*(CvParamGrid*)degreeGrid_nativeObj), (bool)balanced );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvSVM_train_1auto_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvSVM_train_1auto_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong params_nativeObj)
{
    static const char method_name[] = "ml::train_1auto_11()";
    try {
        LOGD("%s", method_name);
        CvSVM* me = (CvSVM*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        bool _retval_ = me->train_auto( trainData, responses, varIdx, sampleIdx, (*(CvSVMParams*)params_nativeObj) );
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
//  static void CvSVM::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVM_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvSVM_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvSVM*) self;
}


//
//   CvDTreeParams::CvDTreeParams()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvDTreeParams_CvDTreeParams_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvDTreeParams_CvDTreeParams_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvDTreeParams_10()";
    try {
        LOGD("%s", method_name);
        
        CvDTreeParams* _retval_ = new CvDTreeParams(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int CvDTreeParams::max_categories
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvDTreeParams_get_1max_1categories_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvDTreeParams_get_1max_1categories_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1max_1categories_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        int _retval_ = me->max_categories;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvDTreeParams::max_categories
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1max_1categories_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1max_1categories_10
  (JNIEnv* env, jclass , jlong self, jint max_categories)
{
    static const char method_name[] = "ml::set_1max_1categories_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        me->max_categories = ( (int)max_categories );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int CvDTreeParams::max_depth
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvDTreeParams_get_1max_1depth_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvDTreeParams_get_1max_1depth_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1max_1depth_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        int _retval_ = me->max_depth;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvDTreeParams::max_depth
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1max_1depth_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1max_1depth_10
  (JNIEnv* env, jclass , jlong self, jint max_depth)
{
    static const char method_name[] = "ml::set_1max_1depth_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        me->max_depth = ( (int)max_depth );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int CvDTreeParams::min_sample_count
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvDTreeParams_get_1min_1sample_1count_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvDTreeParams_get_1min_1sample_1count_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1min_1sample_1count_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        int _retval_ = me->min_sample_count;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvDTreeParams::min_sample_count
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1min_1sample_1count_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1min_1sample_1count_10
  (JNIEnv* env, jclass , jlong self, jint min_sample_count)
{
    static const char method_name[] = "ml::set_1min_1sample_1count_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        me->min_sample_count = ( (int)min_sample_count );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int CvDTreeParams::cv_folds
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvDTreeParams_get_1cv_1folds_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvDTreeParams_get_1cv_1folds_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1cv_1folds_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        int _retval_ = me->cv_folds;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvDTreeParams::cv_folds
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1cv_1folds_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1cv_1folds_10
  (JNIEnv* env, jclass , jlong self, jint cv_folds)
{
    static const char method_name[] = "ml::set_1cv_1folds_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        me->cv_folds = ( (int)cv_folds );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// bool CvDTreeParams::use_surrogates
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTreeParams_get_1use_1surrogates_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTreeParams_get_1use_1surrogates_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1use_1surrogates_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        bool _retval_ = me->use_surrogates;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvDTreeParams::use_surrogates
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1use_1surrogates_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1use_1surrogates_10
  (JNIEnv* env, jclass , jlong self, jboolean use_surrogates)
{
    static const char method_name[] = "ml::set_1use_1surrogates_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        me->use_surrogates = ( (bool)use_surrogates );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// bool CvDTreeParams::use_1se_rule
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTreeParams_get_1use_11se_1rule_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTreeParams_get_1use_11se_1rule_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1use_11se_1rule_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        bool _retval_ = me->use_1se_rule;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvDTreeParams::use_1se_rule
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1use_11se_1rule_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1use_11se_1rule_10
  (JNIEnv* env, jclass , jlong self, jboolean use_1se_rule)
{
    static const char method_name[] = "ml::set_1use_11se_1rule_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        me->use_1se_rule = ( (bool)use_1se_rule );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// bool CvDTreeParams::truncate_pruned_tree
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTreeParams_get_1truncate_1pruned_1tree_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvDTreeParams_get_1truncate_1pruned_1tree_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1truncate_1pruned_1tree_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        bool _retval_ = me->truncate_pruned_tree;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvDTreeParams::truncate_pruned_tree
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1truncate_1pruned_1tree_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1truncate_1pruned_1tree_10
  (JNIEnv* env, jclass , jlong self, jboolean truncate_pruned_tree)
{
    static const char method_name[] = "ml::set_1truncate_1pruned_1tree_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        me->truncate_pruned_tree = ( (bool)truncate_pruned_tree );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// float CvDTreeParams::regression_accuracy
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvDTreeParams_get_1regression_1accuracy_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvDTreeParams_get_1regression_1accuracy_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1regression_1accuracy_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        float _retval_ = me->regression_accuracy;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CvDTreeParams::regression_accuracy
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1regression_1accuracy_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_set_1regression_1accuracy_10
  (JNIEnv* env, jclass , jlong self, jfloat regression_accuracy)
{
    static const char method_name[] = "ml::set_1regression_1accuracy_10()";
    try {
        LOGD("%s", method_name);
        CvDTreeParams* me = (CvDTreeParams*) self; //TODO: check for NULL
        me->regression_accuracy = ( (float)regression_accuracy );
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
//  static void CvDTreeParams::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvDTreeParams_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvDTreeParams*) self;
}


//
//   CvGBTrees::CvGBTrees()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvGBTrees_CvGBTrees_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvGBTrees_CvGBTrees_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvGBTrees_10()";
    try {
        LOGD("%s", method_name);
        
        CvGBTrees* _retval_ = new CvGBTrees(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   CvGBTrees::CvGBTrees(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvGBTreesParams params = CvGBTreesParams())
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvGBTrees_CvGBTrees_11 (JNIEnv*, jclass, jlong, jint, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvGBTrees_CvGBTrees_11
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong varType_nativeObj, jlong missingDataMask_nativeObj, jlong params_nativeObj)
{
    static const char method_name[] = "ml::CvGBTrees_11()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        Mat& varType = *((Mat*)varType_nativeObj);
        Mat& missingDataMask = *((Mat*)missingDataMask_nativeObj);
        CvGBTrees* _retval_ = new CvGBTrees( trainData, (int)tflag, responses, varIdx, sampleIdx, varType, missingDataMask, (*(CvGBTreesParams*)params_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvGBTrees_CvGBTrees_12 (JNIEnv*, jclass, jlong, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvGBTrees_CvGBTrees_12
  (JNIEnv* env, jclass , jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::CvGBTrees_12()";
    try {
        LOGD("%s", method_name);
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        CvGBTrees* _retval_ = new CvGBTrees( trainData, (int)tflag, responses );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void CvGBTrees::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTrees_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTrees_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::clear_10()";
    try {
        LOGD("%s", method_name);
        CvGBTrees* me = (CvGBTrees*) self; //TODO: check for NULL
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
//  float CvGBTrees::predict(Mat sample, Mat missing = cv::Mat(), Range slice = cv::Range::all(), int k = -1)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvGBTrees_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jint);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvGBTrees_predict_10
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj, jlong missing_nativeObj, jint slice_start, jint slice_end, jint k)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        CvGBTrees* me = (CvGBTrees*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        Mat& missing = *((Mat*)missing_nativeObj);
        Range slice(slice_start, slice_end);
        float _retval_ = me->predict( sample, missing, slice, (int)k );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvGBTrees_predict_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvGBTrees_predict_11
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj)
{
    static const char method_name[] = "ml::predict_11()";
    try {
        LOGD("%s", method_name);
        CvGBTrees* me = (CvGBTrees*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        float _retval_ = me->predict( sample );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool CvGBTrees::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvGBTreesParams params = CvGBTreesParams(), bool update = false)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvGBTrees_train_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvGBTrees_train_10
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong varType_nativeObj, jlong missingDataMask_nativeObj, jlong params_nativeObj, jboolean update)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        CvGBTrees* me = (CvGBTrees*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        Mat& varType = *((Mat*)varType_nativeObj);
        Mat& missingDataMask = *((Mat*)missingDataMask_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses, varIdx, sampleIdx, varType, missingDataMask, (*(CvGBTreesParams*)params_nativeObj), (bool)update );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvGBTrees_train_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_CvGBTrees_train_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint tflag, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        CvGBTrees* me = (CvGBTrees*) self; //TODO: check for NULL
        Mat& trainData = *((Mat*)trainData_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = me->train( trainData, (int)tflag, responses );
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
//  static void CvGBTrees::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTrees_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvGBTrees_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvGBTrees*) self;
}


//
//   CvANN_MLP::CvANN_MLP()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvANN_1MLP_CvANN_1MLP_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvANN_1MLP_CvANN_1MLP_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::CvANN_1MLP_10()";
    try {
        LOGD("%s", method_name);
        
        CvANN_MLP* _retval_ = new CvANN_MLP(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   CvANN_MLP::CvANN_MLP(Mat layerSizes, int activateFunc = CvANN_MLP::SIGMOID_SYM, double fparam1 = 0, double fparam2 = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvANN_1MLP_CvANN_1MLP_11 (JNIEnv*, jclass, jlong, jint, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvANN_1MLP_CvANN_1MLP_11
  (JNIEnv* env, jclass , jlong layerSizes_nativeObj, jint activateFunc, jdouble fparam1, jdouble fparam2)
{
    static const char method_name[] = "ml::CvANN_1MLP_11()";
    try {
        LOGD("%s", method_name);
        Mat& layerSizes = *((Mat*)layerSizes_nativeObj);
        CvANN_MLP* _retval_ = new CvANN_MLP( layerSizes, (int)activateFunc, (double)fparam1, (double)fparam2 );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvANN_1MLP_CvANN_1MLP_12 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_CvANN_1MLP_CvANN_1MLP_12
  (JNIEnv* env, jclass , jlong layerSizes_nativeObj)
{
    static const char method_name[] = "ml::CvANN_1MLP_12()";
    try {
        LOGD("%s", method_name);
        Mat& layerSizes = *((Mat*)layerSizes_nativeObj);
        CvANN_MLP* _retval_ = new CvANN_MLP( layerSizes );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void CvANN_MLP::clear()
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_clear_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::clear_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP* me = (CvANN_MLP*) self; //TODO: check for NULL
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
//  void CvANN_MLP::create(Mat layerSizes, int activateFunc = CvANN_MLP::SIGMOID_SYM, double fparam1 = 0, double fparam2 = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_create_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_create_10
  (JNIEnv* env, jclass , jlong self, jlong layerSizes_nativeObj, jint activateFunc, jdouble fparam1, jdouble fparam2)
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP* me = (CvANN_MLP*) self; //TODO: check for NULL
        Mat& layerSizes = *((Mat*)layerSizes_nativeObj);
        me->create( layerSizes, (int)activateFunc, (double)fparam1, (double)fparam2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_create_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_create_11
  (JNIEnv* env, jclass , jlong self, jlong layerSizes_nativeObj)
{
    static const char method_name[] = "ml::create_11()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP* me = (CvANN_MLP*) self; //TODO: check for NULL
        Mat& layerSizes = *((Mat*)layerSizes_nativeObj);
        me->create( layerSizes );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  float CvANN_MLP::predict(Mat inputs, Mat& outputs)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvANN_1MLP_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_CvANN_1MLP_predict_10
  (JNIEnv* env, jclass , jlong self, jlong inputs_nativeObj, jlong outputs_nativeObj)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP* me = (CvANN_MLP*) self; //TODO: check for NULL
        Mat& inputs = *((Mat*)inputs_nativeObj);
        Mat& outputs = *((Mat*)outputs_nativeObj);
        float _retval_ = me->predict( inputs, outputs );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int CvANN_MLP::train(Mat inputs, Mat outputs, Mat sampleWeights, Mat sampleIdx = cv::Mat(), CvANN_MLP_TrainParams params = CvANN_MLP_TrainParams(), int flags = 0)
//

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvANN_1MLP_train_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvANN_1MLP_train_10
  (JNIEnv* env, jclass , jlong self, jlong inputs_nativeObj, jlong outputs_nativeObj, jlong sampleWeights_nativeObj, jlong sampleIdx_nativeObj, jlong params_nativeObj, jint flags)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP* me = (CvANN_MLP*) self; //TODO: check for NULL
        Mat& inputs = *((Mat*)inputs_nativeObj);
        Mat& outputs = *((Mat*)outputs_nativeObj);
        Mat& sampleWeights = *((Mat*)sampleWeights_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        int _retval_ = me->train( inputs, outputs, sampleWeights, sampleIdx, (*(CvANN_MLP_TrainParams*)params_nativeObj), (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_ml_CvANN_1MLP_train_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_CvANN_1MLP_train_11
  (JNIEnv* env, jclass , jlong self, jlong inputs_nativeObj, jlong outputs_nativeObj, jlong sampleWeights_nativeObj)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        CvANN_MLP* me = (CvANN_MLP*) self; //TODO: check for NULL
        Mat& inputs = *((Mat*)inputs_nativeObj);
        Mat& outputs = *((Mat*)outputs_nativeObj);
        Mat& sampleWeights = *((Mat*)sampleWeights_nativeObj);
        int _retval_ = me->train( inputs, outputs, sampleWeights );
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
//  static void CvANN_MLP::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_CvANN_1MLP_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CvANN_MLP*) self;
}


} // extern "C"

#endif // HAVE_OPENCV_ML
