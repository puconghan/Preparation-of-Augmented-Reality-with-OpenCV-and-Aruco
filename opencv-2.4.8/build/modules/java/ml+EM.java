
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;

import org.opencv.core.Algorithm;
import org.opencv.core.Mat;
import org.opencv.core.TermCriteria;

// C++: class EM
//javadoc: EM
public class EM extends Algorithm {

    protected EM(long addr) { super(addr); }


    public static final int
            COV_MAT_SPHERICAL = 0,
            COV_MAT_DIAGONAL = 1,
            COV_MAT_GENERIC = 2,
            COV_MAT_DEFAULT = COV_MAT_DIAGONAL,
            DEFAULT_NCLUSTERS = 5,
            DEFAULT_MAX_ITERS = 100,
            START_E_STEP = 1,
            START_M_STEP = 2,
            START_AUTO_STEP = 0;


    //
    // C++:   EM::EM(int nclusters = EM::DEFAULT_NCLUSTERS, int covMatType = EM::COV_MAT_DIAGONAL, TermCriteria termCrit = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, EM::DEFAULT_MAX_ITERS, FLT_EPSILON))
    //

    //javadoc: EM::EM(nclusters, covMatType, termCrit)
    public   EM(int nclusters, int covMatType, TermCriteria termCrit)
    {
        
        super( EM_0(nclusters, covMatType, termCrit.type, termCrit.maxCount, termCrit.epsilon) );
        
        return;
    }

    //javadoc: EM::EM()
    public   EM()
    {
        
        super( EM_1() );
        
        return;
    }


    //
    // C++:  void EM::clear()
    //

    //javadoc: EM::clear()
    public  void clear()
    {
        
        clear_0(nativeObj);
        
        return;
    }


    //
    // C++:  bool EM::isTrained()
    //

    //javadoc: EM::isTrained()
    public  boolean isTrained()
    {
        
        boolean retVal = isTrained_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  Vec2d EM::predict(Mat sample, Mat& probs = Mat())
    //

    //javadoc: EM::predict(sample, probs)
    public  double[] predict(Mat sample, Mat probs)
    {
        
        double[] retVal = predict_0(nativeObj, sample.nativeObj, probs.nativeObj);
        
        return retVal;
    }

    //javadoc: EM::predict(sample)
    public  double[] predict(Mat sample)
    {
        
        double[] retVal = predict_1(nativeObj, sample.nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool EM::train(Mat samples, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
    //

    //javadoc: EM::train(samples, logLikelihoods, labels, probs)
    public  boolean train(Mat samples, Mat logLikelihoods, Mat labels, Mat probs)
    {
        
        boolean retVal = train_0(nativeObj, samples.nativeObj, logLikelihoods.nativeObj, labels.nativeObj, probs.nativeObj);
        
        return retVal;
    }

    //javadoc: EM::train(samples)
    public  boolean train(Mat samples)
    {
        
        boolean retVal = train_1(nativeObj, samples.nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool EM::trainE(Mat samples, Mat means0, Mat covs0 = Mat(), Mat weights0 = Mat(), Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
    //

    //javadoc: EM::trainE(samples, means0, covs0, weights0, logLikelihoods, labels, probs)
    public  boolean trainE(Mat samples, Mat means0, Mat covs0, Mat weights0, Mat logLikelihoods, Mat labels, Mat probs)
    {
        
        boolean retVal = trainE_0(nativeObj, samples.nativeObj, means0.nativeObj, covs0.nativeObj, weights0.nativeObj, logLikelihoods.nativeObj, labels.nativeObj, probs.nativeObj);
        
        return retVal;
    }

    //javadoc: EM::trainE(samples, means0)
    public  boolean trainE(Mat samples, Mat means0)
    {
        
        boolean retVal = trainE_1(nativeObj, samples.nativeObj, means0.nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool EM::trainM(Mat samples, Mat probs0, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
    //

    //javadoc: EM::trainM(samples, probs0, logLikelihoods, labels, probs)
    public  boolean trainM(Mat samples, Mat probs0, Mat logLikelihoods, Mat labels, Mat probs)
    {
        
        boolean retVal = trainM_0(nativeObj, samples.nativeObj, probs0.nativeObj, logLikelihoods.nativeObj, labels.nativeObj, probs.nativeObj);
        
        return retVal;
    }

    //javadoc: EM::trainM(samples, probs0)
    public  boolean trainM(Mat samples, Mat probs0)
    {
        
        boolean retVal = trainM_1(nativeObj, samples.nativeObj, probs0.nativeObj);
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   EM::EM(int nclusters = EM::DEFAULT_NCLUSTERS, int covMatType = EM::COV_MAT_DIAGONAL, TermCriteria termCrit = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, EM::DEFAULT_MAX_ITERS, FLT_EPSILON))
    private static native long EM_0(int nclusters, int covMatType, int termCrit_type, int termCrit_maxCount, double termCrit_epsilon);
    private static native long EM_1();

    // C++:  void EM::clear()
    private static native void clear_0(long nativeObj);

    // C++:  bool EM::isTrained()
    private static native boolean isTrained_0(long nativeObj);

    // C++:  Vec2d EM::predict(Mat sample, Mat& probs = Mat())
    private static native double[] predict_0(long nativeObj, long sample_nativeObj, long probs_nativeObj);
    private static native double[] predict_1(long nativeObj, long sample_nativeObj);

    // C++:  bool EM::train(Mat samples, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
    private static native boolean train_0(long nativeObj, long samples_nativeObj, long logLikelihoods_nativeObj, long labels_nativeObj, long probs_nativeObj);
    private static native boolean train_1(long nativeObj, long samples_nativeObj);

    // C++:  bool EM::trainE(Mat samples, Mat means0, Mat covs0 = Mat(), Mat weights0 = Mat(), Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
    private static native boolean trainE_0(long nativeObj, long samples_nativeObj, long means0_nativeObj, long covs0_nativeObj, long weights0_nativeObj, long logLikelihoods_nativeObj, long labels_nativeObj, long probs_nativeObj);
    private static native boolean trainE_1(long nativeObj, long samples_nativeObj, long means0_nativeObj);

    // C++:  bool EM::trainM(Mat samples, Mat probs0, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
    private static native boolean trainM_0(long nativeObj, long samples_nativeObj, long probs0_nativeObj, long logLikelihoods_nativeObj, long labels_nativeObj, long probs_nativeObj);
    private static native boolean trainM_1(long nativeObj, long samples_nativeObj, long probs0_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
