#ifndef CATIMciMultiCADSettingAtt_H
#define CATIMciMultiCADSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES 2003
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMultiCADItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMultiCADItfCPP IID IID_CATIMciMultiCADSettingAtt;
#else
extern "C" const IID IID_CATIMciMultiCADSettingAtt ;
#endif

class CATSettingInfo;
class CATUnicodeString;

//------------------------------------------------------------------

/**
* Interface to handle the parameters of the MultiCAD.
* <b>Role</b>: This interface is implemented by a component which
* represents the controller of the MultiCAD settings.
* <br>This interface defines:
* <ul>
* <li>A method to set each parameter</li>
* <li>A method to get the value of each parameter</li>
* <li>A method to lock/unlock each parameter</li>
* <li>A method to retrieve the informations concerning each parameter</li>
* </ul>
*/
class ExportedByCATMultiCADItfCPP CATIMciMultiCADSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    
    /**
     * Retrieves the value of the parameter Visu Format Unit.
     * <br><b>Role</b>: Retrieves the number of millimeters to use when importing the following Visu Formats:
     * byu, iff, obj, slp, stl and _ps.
     * @param oUnit
     *	<b>Legal values</b>:
     *	<br><tt>between 0.01 and 1000</tt>
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetVisuFormatUnit( float & oUnit ) = 0;

    /**
     * Sets the value of the parameter Visu Format Unit.
     * <br><b>Role</b>: Sets the number of millimeters to use when importing the following Visu Formats:
     * byu, iff, obj, slp, stl and _ps.
     * @param iUnit
     *	<b>Legal values</b>:
     *	<br><tt>between 0.01 and 1000</tt>
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetVisuFormatUnit( const float & iUnit ) = 0;

    /**
     * Retrieves the state of the parameter Visu Format Unit.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetVisuFormatUnitInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter Visu Format Unit.
     * <br><b>Role</b>: Locks or unlocks the parameter Visu Format Unit if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetVisuFormatUnitLock( unsigned char iLock ) = 0 ;
    
    
    /**
     * Retrieves Conversion Technology.
     * <br><b>Role</b>: Retrieves the Preferred Conversion Technology to use.
     * @param oConvTechno
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt>  Indirect Mode
     *	<br><tt>1 :</tt>  Direct Mode
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetConversionTechnology( int & oConvTechno ) = 0;

    /**
     * Sets the Conversion Technology.
     * <br><b>Role</b>: Sets the Preferred Conversion Technology to use.
     * @param iConvTechno
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt>  Indirect Mode
     *	<br><tt>1 :</tt>  Direct Mode
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetConversionTechnology( const int & iConvTechno ) = 0;

    /**
     * Retrieves the state of the parameter Conversion Technology.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetConversionTechnologyInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter Conversion Technology.
     * <br><b>Role</b>: Locks or unlocks the parameter Conversion Technology if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetConversionTechnologyLock( unsigned char iLock ) = 0 ;
    
    /**
     * Retrieves Link Mode.
     * <br><b>Role</b>: Retrieves the Link Mode to use during import.
     * @param oLinkMode
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt>  Visu Mode
     *	<br><tt>1 :</tt>  Unused
     *	<br><tt>2 :</tt>  CATPart Mode
     *	<br><tt>3 :</tt>  Visu Mode With Snaping Information
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetLinkMode( int & oLinkMode ) = 0;

    /**
     * Sets Link Mode.
     * <br><b>Role</b>: Sets the Link Mode to use during import.
     * @param iLinkMode
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt>  Visu Mode
     *	<br><tt>1 :</tt>  Unused
     *	<br><tt>2 :</tt>  CATPart Mode
     *	<br><tt>3 :</tt>  Visu Mode With Snaping Information
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetLinkMode( const int & iMode ) = 0;

    /**
     * Retrieves the state of the parameter Link Mode.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetLinkModeInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter Link Mode.
     * <br><b>Role</b>: Locks or unlocks the parameter Link Mode if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetLinkModeLock( unsigned char iLock ) = 0 ;
    
    
    /**
     * Retrieves Symbolic Output Path.
     * <br><b>Role</b>: Retrieves the Output Path in a Symbolic format (e.g.: ${HOME} or ${MY_VAR}).
     * @param oOutputPath
     *	The Path of the directory where data are going to be stored during MultiCAD conversions.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetOutputPathSymb( CATUnicodeString & oOutputPath ) = 0;

    /**
     * Retrieves Output Path.
     * <br><b>Role</b>: Retrieves the Output Path in accessible format.
     * @param oOutputPath
     *	The Path of the directory where data are going to be stored during MultiCAD conversions.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetOutputPath( CATUnicodeString & oOutputPath ) = 0;

    /**
     * Sets Output Path.
     * <br><b>Role</b>: Sets the Output Path in either Symbolic or accessible format.
     * @param iOutputPath
     *	The Path of the directory where data are going to be stored during MultiCAD conversions.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetOutputPath( const CATUnicodeString & iOutputPath ) = 0;

    /**
     * Retrieves the state of the parameter Output Path.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetOutputPathInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter Output Path.
     * <br><b>Role</b>: Locks or unlocks the parameter Output Path if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetOutputPathLock( unsigned char iLock ) = 0 ;
     
  
    /**
     * Retrieves the value of the parameter Save Coordinate System in CGR.
     * <br><b>Role</b>: Retrieves the value of the parameter Save Coordinate System in CGR.
     * @param iParam
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> No Coordinate System transfer in CGR
     *	<br><tt>1 :</tt> Coordinate System are transferred in CGR
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetSaveCoorsysInCgr( unsigned char & oSaveCoorsysInCgr ) = 0;

    /**
     * Sets the value of the parameter Save Coordinate System in CGR.
     * <br><b>Role</b>: Sets the value of the parameter Save Coordinate System in CGR.
     * @param iParam
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> No Coordinate System transfer in CGR
     *	<br><tt>1 :</tt> Coordinate System are transferred in CGR
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetSaveCoorsysInCgr( const unsigned char & iSaveCoorsysInCgr ) = 0;

    /**
     * Retrieves the state of the parameter Save Coordinate System in CGR.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetSaveCoorsysInCgrInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter Save Coordinate System in CGR.
     * <br><b>Role</b>: Locks or unlocks the parameter Save Coordinate System in CGR if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetSaveCoorsysInCgrLock( unsigned char iLock ) = 0 ;

    /**
     * Retrieves the value of the parameter Parts Parameterization Mode.
     * <br><b>Role</b>: Retrieves the value of the parts parameterization mode.
     * @param iParam
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> parts parameterization mode OFF
     *	<br><tt>1 :</tt> parts parameterization mode ON
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetPartsParameterMode( int & oPartsParameterMode ) = 0;

    /**
     * Sets the value of the parameter  Parts Parameterization Mode.
     * <br><b>Role</b>: Sets the value of the parameter Save Coordinate System in CGR.
     * @param iParam
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> parts parameterization mode OFF
     *	<br><tt>1 :</tt> parts parameterization mode ON
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetPartsParameterMode( const int & iPartsParameterMode ) = 0;

    /**
     * Retrieves the state of the parameter Parts Parameterization Mode.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetPartsParameterModeInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter parts parameterization mode.
     * <br><b>Role</b>: Locks or unlocks the parameter Parts Parameterization mode if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetPartsParameterModeLock( unsigned char iLock ) = 0 ;
  

    /**
     * Retrieves the value of the parameter Save ProE Quilts Read.
     * <br><b>Role</b>: Enable to know if ProE conversion of ProE Quilts surface is requested or not.
     * @param oProEQuiltsRead
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> Quilts surface are not converted.
     *	<br><tt>1 :</tt> Quilts surfaces are converted.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProEQuiltsRead( unsigned char & oProEQuiltsRead ) = 0;

    /**
     * Sets the value of the parameter Save ProE Quilts Read.
     * <br><b>Role</b>: Enable to set if ProE conversion of ProE Quilts surface conversion is requested or not.
     * @param iProEQuiltsRead
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> Quilts surface are not converted.
     *	<br><tt>1 :</tt> Quilts surfaces are converted.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProEQuiltsRead( const unsigned char & iProEQuiltsRead ) = 0;

    /**
     * Retrieves the state of the parameter ProE Quilts Read.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProEQuiltsReadInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter ProE Quilts Read.
     * <br><b>Role</b>: Locks or unlocks the parameter ProE Quilts Read if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProEQuiltsReadLock( unsigned char iLock ) = 0 ;
    
    
    /**
     * Retrieves the value of the parameter ProE Simplified Representation Mode.
     * <br><b>Role</b>: Return the activation mode of the ProE Simplified Representation support.
     * @param oProESimpRepMode
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> No import of specific Simplified Representation for assemblies.
     *	<br><tt>1 :</tt> import of specific Simplified Representation for ProE assemblies.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProESimpRepMode( unsigned char & oProESimpRepMode ) = 0;

    /**
     * Sets the value of the parameter ProE Simplified Representation Mode.
     * <br><b>Role</b>: Sets the activation mode of the ProE Simplified Representation support.
     * @param iProESimpRepMode
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> No import of specific Simplified Representation for assemblies.
     *	<br><tt>1 :</tt> Activate the import of a specific Simplified Representation for ProE assemblies.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProESimpRepMode( const unsigned char & iProESimpRepMode ) = 0;

    /**
     * Retrieves the state of the parameter ProE Simplified Representation Mode.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProESimpRepModeInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter ProE Simplified Representation Mode.
     * <br><b>Role</b>: Locks or unlocks the parameter ProE Simplified Representation Mode if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProESimpRepModeLock( unsigned char iLock ) = 0 ;
    
    
    /**
     * Retrieves the value of the parameter ProE Simplified Representation Name.
     * <br><b>Role</b>: Get the name of the Simplified Representation that will to use at next import of ProE assembly.
     * @param oProESimpRepName
     *  Name of the simplified representation
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProESimpRepName( CATUnicodeString & oProESimpRepName ) = 0;

    /**
     * Sets the value of the parameter ProE Simplified Representation Name.
     * <br><b>Role</b>: Set the name of the Simplified Representation to be used at next import of ProE assembly.
     * @param iProESimpRepName
     *  Name of the simplified representation
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProESimpRepName( const CATUnicodeString & iProESimpRepName ) = 0;

    /**
     * Retrieves the state of the parameter ProE Simplified Representation Name.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProESimpRepNameInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter ProE Simplified Representation Name.
     * <br><b>Role</b>: Locks or unlocks the parameter ProE Simplified Representation Name if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProESimpRepNameLock( unsigned char iLock ) = 0 ;
    
    
    /**
     * Retrieves the value of the parameter ProE Instance Mode.
     * <br><b>Role</b>: Return the activation mode of the ProE Instance support.
     * @param oProEInstanceMode
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> No import of specific Instance for ProE Parts.
     *	<br><tt>1 :</tt> import of specific Instance for ProE Parts.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProEInstanceMode( unsigned char & oProEInstanceMode ) = 0;

    /**
     * Sets the value of the parameter ProE Instance Mode.
     * <br><b>Role</b>: Set the activation mode of the ProE Instance support.
     * @param iProEInstanceMode
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> No import of specific Instance for ProE Parts.
     *	<br><tt>1 :</tt> import of specific Instance for ProE Parts.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProEInstanceMode( const unsigned char & iProEInstanceMode ) = 0;

    /**
     * Retrieves the state of the parameter ProE Instance Mode.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProEInstanceModeInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter ProE Instance Mode.
     * <br><b>Role</b>: Locks or unlocks the parameter ProE Instance Mode if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProEInstanceModeLock( unsigned char iLock ) = 0 ;
    
    
    /**
     * Retrieves the value of the parameter ProE Instance Name.
     * <br><b>Role</b>: Get the name of the Instance to import for ProE Parts.
     * @param oProEInstanceName
     *  Name of the Instance
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProEInstanceName( CATUnicodeString & oProEInstanceName ) = 0;

    /**
     * Sets the value of the parameter ProE Instance Name.
     * <br><b>Role</b>: Sets the name of the Instance to import for ProE Parts.
     * @param iProEInstanceName
     *  Name of the Instance
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProEInstanceName( const CATUnicodeString & iProEInstanceName ) = 0;

    /**
     * Retrieves the state of the parameter ProE Instance Name.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetProEInstanceNameInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter ProE Instance Name.
     * <br><b>Role</b>: Locks or unlocks the parameter ProE Instance Name if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetProEInstanceNameLock( unsigned char iLock ) = 0 ;
    
    /**
     * Retrieves the value of the parameter UG Layer Numbers.
     * <br><b>Role</b>: Get the list of UG Layers to be converted in V5.
     * @param oUGLayerNumbers
     *	<b>Examples of correct formats</b>:
     *   - "*" will convert all layers
     *   - "1,3,9" will convert layers 1, 3 and 9
     *   - "5-7" will convert layers 5 to 7
     *   - "2,7-9" will convert layers 2, 7, 8 and 9
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUGLayerNumbers( CATUnicodeString & oUGLayerNumbers ) = 0;

    /**
     * Sets the value of the parameter UG Layer Numbers.
     * <br><b>Role</b>: Sets the list of UG Layers to be converted in V5.
     * @param iUGLayerNumbers
     *	<b>Examples of correct formats</b>:
     *   - "*" will convert all layers
     *   - "1,3,9" will convert layers 1, 3 and 9
     *   - "5-7" will convert layers 5 to 7
     *   - "2,7-9" will convert layers 2, 7, 8 and 9
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUGLayerNumbers( const CATUnicodeString & iUGLayerNumbers ) = 0;

    /**
     * Retrieves the state of the parameter UG Layer Numbers.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUGLayerNumbersInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter UG Layer Numbers.
     * <br><b>Role</b>: Locks or unlocks the parameter UG Layer Numbers if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUGLayerNumbersLock( unsigned char iLock ) = 0 ;
    
    
    /**
     * Retrieves the value of the parameter UG Active Layers Only.
     * <br><b>Role</b>: Retrieves the value of UG Active Layers Only parameter.
     * @param oUGActiveLayersOnly
     *	<b>Legal values</b>:
     *	<br><tt>0 </tt>: Conversion of all UG Layers (active and inactive)
     *	<br><tt>1 </tt>: Conversion of UG Active Layers only.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUGActiveLayersOnly( unsigned char & oUGActiveLayersOnly ) = 0;

    /**
     * Sets the value of the parameter UG Active Layers Only.
     * <br><b>Role</b>: Sets the value of UG Active Layers Only parameter.
     * @param iUGActiveLayersOnly
     *	<b>Legal values</b>:
     *	<br><tt>0 </tt>: Conversion of all UG Layers (active and inactive)
     *	<br><tt>1 </tt>: Conversion of UG Active Layers only.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUGActiveLayersOnly( const unsigned char & iUGActiveLayersOnly ) = 0;

    /**
     * Retrieves the state of the parameter UG Active Layers Only.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUGActiveLayersOnlyInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter UG Active Layers Only.
     * <br><b>Role</b>: Locks or unlocks the parameter UG Active Layers Only if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUGActiveLayersOnlyLock( unsigned char iLock ) = 0 ;
    
    
    /**
     * Retrieves the value of the parameter UG Open Surfaces.
     * <br><b>Role</b>: Retrieves the value of UG Open Surfaces parameter.
     * @param oUGOpenSurfaces
     *	<b>Legal values</b>:
     *	<br><tt>0 </tt>: No conversion of UG Open Surfaces in V5
     *	<br><tt>1 </tt>: UG data are converted together with there Open Surfaces if any
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUGOpenSurfaces( unsigned char & oUGOpenSurfaces ) = 0;

    /**
     * Sets the value of the parameter UG Open Surfaces.
     * <br><b>Role</b>: Sets the value of UG Open Surfaces parameter.
     * @param iUGOpenSurfaces
     *	<b>Legal values</b>:
     *	<br><tt>0 </tt>: No conversion of UG Open Surfaces in V5
     *	<br><tt>1 </tt>: UG data are converted together with there Open Surfaces if any
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUGOpenSurfaces( const unsigned char & iUGOpenSurfaces ) = 0;

    /**
     * Retrieves the state of the parameter UG Open Surfaces.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUGOpenSurfacesInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter UG Open Surfaces.
     * <br><b>Role</b>: Locks or unlocks the parameter UG Open Surfaces if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUGOpenSurfacesLock( unsigned char iLock ) = 0 ;
    
    
    /**
     * Retrieves the value of the parameter UG Drawing Name.
     * <br><b>Role</b>: Retrieves the name of the UG Drawing to convert.
     * @param oUGDrawingName
     *	Name of the UG drawing to convert
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUGDrawingName( CATUnicodeString & oUGDrawingName ) = 0;

    /**
     * Sets the value of the parameter UG Drawing Name.
     * <br><b>Role</b>: Sets the name of the UG Drawing to convert.
     * @param iUGDrawingName
     *	Name of the UG drawing to convert
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUGDrawingName( const CATUnicodeString & iUGDrawingName ) = 0;

    /**
     * Retrieves the state of the parameter UG Drawing Name.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUGDrawingNameInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter UG Drawing Name.
     * <br><b>Role</b>: Locks or unlocks the parameter UG Drawing Name if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUGDrawingNameLock( unsigned char iLock ) = 0 ;

	/**
     * Retrieves the value of the parameter UG Reference Set name.
     * <br><b>Role</b>: Get the name of the UG Reference Set that will to use at next import of UG part.
     * @param oUgReferenceSet
     *  Name of the simplified representation
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUgReferenceSet( CATUnicodeString & oUgReferenceSet ) = 0;

    /**
     * Sets the value of the parameter UG Reference Set name.
     * <br><b>Role</b>: Set the name of the UG Reference Set that will to use at next import of UG part.
     * @param iUgReferenceSet
     *  Name of the simplified representation
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUgReferenceSet( const CATUnicodeString & iUgReferenceSet ) = 0;

    /**
     * Retrieves the state of the parameter UG Reference Set name.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetUgReferenceSetInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter UG Reference Set name.
     * <br><b>Role</b>: Locks or unlocks the parameter UG Reference Set if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetUgReferenceSetLock( unsigned char iLock ) = 0 ;    
  
    /**
     * Retrieves the value of the parameter Annotation 3D Mode.
     * <br><b>Role</b>: Retrieves the value of the Annotation 3D mode.
     * @param iParam
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> Annotation 3D mode OFF
     *	<br><tt>1 :</tt> Annotation 3D mode ON
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotation3DMode( unsigned char & oAnnotation3DMode ) = 0;

    /**
     * Sets the value of the parameter  Annotation 3D Mode.
     * <br><b>Role</b>: Sets the value of the parameter Annotation 3D.
     * @param iParam
     *	<b>Legal values</b>:
     *	<br><tt>0 :</tt> Annotation 3D mode OFF
     *	<br><tt>1 :</tt> Annotation 3D mode ON
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotation3DMode( const unsigned char & iAnnotation3DMode ) = 0;

    /**
     * Retrieves the state of the parameter Annotation 3D.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotation3DModeInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter Annotation 3D.
     * <br><b>Role</b>: Locks or unlocks the parameter Annotation 3D mode if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>  to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotation3DModeLock( unsigned char iLock ) = 0 ;

	/**
     * Retrieves the value of the parameter Translator mode.
     * <br><b>Role</b>: Get the state of the Translator mode that will to use during import. 
	 * In this mode during translation, 
	 * 1. No feature extension is created as link
	 * 2. The V5 produced geometry is read-write.
     * @param oTranslatorMode
     *  State of the Translator mode 
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetTranslatorMode( int & oTranslatorMode ) = 0;

    /**
     * Sets the value of the parameter Translator mode.
     * <br><b>Role</b>: Get the state of the Translator mode that will to use during import. 
	 * In this mode during translation, 
	 * 1. No feature extension is created as link
	 * 2. The V5 produced geometry is read-write.
     * @param iTranslatorMode
     *  State of the Translator mode 
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetTranslatorMode( const int & iTranslatorMode ) = 0;

    /**
     * Retrieves the state of the parameter Translator mode.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetTranslatorModeInfo( CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the parameter Translator mode.
     * <br><b>Role</b>: Locks or unlocks the parameter Translator mode if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetTranslatorModeLock( unsigned char iLock ) = 0 ;    
    
    // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
