
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;



// C++: class CvParamGrid
//javadoc: CvParamGrid
public class CvParamGrid {

    protected final long nativeObj;
    protected CvParamGrid(long addr) { nativeObj = addr; }


    public static final int
            SVM_C = 0,
            SVM_GAMMA = 1,
            SVM_P = 2,
            SVM_NU = 3,
            SVM_COEF = 4,
            SVM_DEGREE = 5;


    //
    // C++:   CvParamGrid::CvParamGrid()
    //

    //javadoc: CvParamGrid::CvParamGrid()
    public   CvParamGrid()
    {
        
        nativeObj = CvParamGrid_0();
        
        return;
    }


    //
    // C++: double CvParamGrid::min_val
    //

    //javadoc: CvParamGrid::get_min_val()
    public  double get_min_val()
    {
        
        double retVal = get_min_val_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvParamGrid::min_val
    //

    //javadoc: CvParamGrid::set_min_val(min_val)
    public  void set_min_val(double min_val)
    {
        
        set_min_val_0(nativeObj, min_val);
        
        return;
    }


    //
    // C++: double CvParamGrid::max_val
    //

    //javadoc: CvParamGrid::get_max_val()
    public  double get_max_val()
    {
        
        double retVal = get_max_val_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvParamGrid::max_val
    //

    //javadoc: CvParamGrid::set_max_val(max_val)
    public  void set_max_val(double max_val)
    {
        
        set_max_val_0(nativeObj, max_val);
        
        return;
    }


    //
    // C++: double CvParamGrid::step
    //

    //javadoc: CvParamGrid::get_step()
    public  double get_step()
    {
        
        double retVal = get_step_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvParamGrid::step
    //

    //javadoc: CvParamGrid::set_step(step)
    public  void set_step(double step)
    {
        
        set_step_0(nativeObj, step);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvParamGrid::CvParamGrid()
    private static native long CvParamGrid_0();

    // C++: double CvParamGrid::min_val
    private static native double get_min_val_0(long nativeObj);

    // C++: void CvParamGrid::min_val
    private static native void set_min_val_0(long nativeObj, double min_val);

    // C++: double CvParamGrid::max_val
    private static native double get_max_val_0(long nativeObj);

    // C++: void CvParamGrid::max_val
    private static native void set_max_val_0(long nativeObj, double max_val);

    // C++: double CvParamGrid::step
    private static native double get_step_0(long nativeObj);

    // C++: void CvParamGrid::step
    private static native void set_step_0(long nativeObj, double step);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
