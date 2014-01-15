
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;



// C++: class CvBoostParams
//javadoc: CvBoostParams
public class CvBoostParams extends CvDTreeParams {

    protected CvBoostParams(long addr) { super(addr); }


    //
    // C++:   CvBoostParams::CvBoostParams()
    //

    //javadoc: CvBoostParams::CvBoostParams()
    public   CvBoostParams()
    {
        
        super( CvBoostParams_0() );
        
        return;
    }


    //
    // C++: int CvBoostParams::boost_type
    //

    //javadoc: CvBoostParams::get_boost_type()
    public  int get_boost_type()
    {
        
        int retVal = get_boost_type_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvBoostParams::boost_type
    //

    //javadoc: CvBoostParams::set_boost_type(boost_type)
    public  void set_boost_type(int boost_type)
    {
        
        set_boost_type_0(nativeObj, boost_type);
        
        return;
    }


    //
    // C++: int CvBoostParams::weak_count
    //

    //javadoc: CvBoostParams::get_weak_count()
    public  int get_weak_count()
    {
        
        int retVal = get_weak_count_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvBoostParams::weak_count
    //

    //javadoc: CvBoostParams::set_weak_count(weak_count)
    public  void set_weak_count(int weak_count)
    {
        
        set_weak_count_0(nativeObj, weak_count);
        
        return;
    }


    //
    // C++: int CvBoostParams::split_criteria
    //

    //javadoc: CvBoostParams::get_split_criteria()
    public  int get_split_criteria()
    {
        
        int retVal = get_split_criteria_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvBoostParams::split_criteria
    //

    //javadoc: CvBoostParams::set_split_criteria(split_criteria)
    public  void set_split_criteria(int split_criteria)
    {
        
        set_split_criteria_0(nativeObj, split_criteria);
        
        return;
    }


    //
    // C++: double CvBoostParams::weight_trim_rate
    //

    //javadoc: CvBoostParams::get_weight_trim_rate()
    public  double get_weight_trim_rate()
    {
        
        double retVal = get_weight_trim_rate_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvBoostParams::weight_trim_rate
    //

    //javadoc: CvBoostParams::set_weight_trim_rate(weight_trim_rate)
    public  void set_weight_trim_rate(double weight_trim_rate)
    {
        
        set_weight_trim_rate_0(nativeObj, weight_trim_rate);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvBoostParams::CvBoostParams()
    private static native long CvBoostParams_0();

    // C++: int CvBoostParams::boost_type
    private static native int get_boost_type_0(long nativeObj);

    // C++: void CvBoostParams::boost_type
    private static native void set_boost_type_0(long nativeObj, int boost_type);

    // C++: int CvBoostParams::weak_count
    private static native int get_weak_count_0(long nativeObj);

    // C++: void CvBoostParams::weak_count
    private static native void set_weak_count_0(long nativeObj, int weak_count);

    // C++: int CvBoostParams::split_criteria
    private static native int get_split_criteria_0(long nativeObj);

    // C++: void CvBoostParams::split_criteria
    private static native void set_split_criteria_0(long nativeObj, int split_criteria);

    // C++: double CvBoostParams::weight_trim_rate
    private static native double get_weight_trim_rate_0(long nativeObj);

    // C++: void CvBoostParams::weight_trim_rate
    private static native void set_weight_trim_rate_0(long nativeObj, double weight_trim_rate);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
