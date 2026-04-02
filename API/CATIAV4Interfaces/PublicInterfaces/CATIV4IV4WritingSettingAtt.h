#ifndef CATIV4IV4WritingSettingAtt_H
#define CATIV4IV4WritingSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


// System framework
#include "IUnknown.h"  // To derive From 
#include "CATBaseUnknown.h"
#include "ExportedByCATV4iSettings.h"
#include "CATBoolean.h"
#include "CATV4IV5V4AssociativityModeEnum.h"
#include "CATV4IV5V4ErrorFeatureCreationEnum.h"
#include "CATV4IV5V4InternalCurveCreationEnum.h"
class CATString;
class CATUnicodeString;
class CATSettingInfo ;

extern "C" ExportedByCATV4iSettings const IID IID_CATIV4IV4WritingSettingAtt;
/** 
 * Interface representing the Saving As V4 Data setting controller object.
 * <b>Role</b>: The Saving As V4 Data setting controller object deals with the setting
 * parameters displayed in the Saving As V4 Data property page.
 * To access this property page:
 * <ul>
 *  <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
 *  <li>Click + left of </b>General</b> to unfold the workbench list</li>   
 *  <li>Click </b>Compatibility</b></li>
 * </ul> 
 * <br><b>The different options for V4/V5SPEC tab</b>:
 * <table>
 *   <tr><td>The Writing Code Page</td>  
 *   <tr><td>The Model Dimension </td> 
 *	 <tr><td>The Model Unit </td>  
 *	 <tr><td>The Initial Model File Path </td>  
 *	 <tr><td>The Associativity Mode </td>  
 *	 <tr><td>The Layer For Non Associative Data </td>
 *	 <tr><td>The Error Feature Creation if the Save is not complete </td>
 *	 <tr><td>The Curves Associated To Face Boundaries Creation </td> 
 *	 <tr><td>The V4 Model File Name In Capitals Letters </td> 
 *	 <tr><td>The Small Edges And Faces Cleaning Tolerance </td>        
 * </table>
 */
class ExportedByCATV4iSettings CATIV4IV4WritingSettingAtt : public CATBaseUnknown
{

	CATDeclareInterface;

  public :
	//------------------------------------------------------
    // Writing code page setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Writing Code Page setting parameter value.
     * <br><b>Role</b>: The Writing Code Page setting parameter manages the format related with 
	 *   the language used by the customer.
     * @param oStateOfCpdest 
     *   The Writing code page setting parameter value that is the selected line number of the combo box.
     * @return
     *   S_OK if the Writing Code page setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */

	virtual HRESULT GetCode_page_Dest( int &oStateOfCpdest)= 0 ;
	/**
     * Sets the Writing Code page setting parameter value.
     * @param iStateOfCpdest
     *   The Writing Code page setting parameter value that is the selected line number of the combo box.
     * @return
     *   S_OK if the Writing Code page setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */

	virtual HRESULT SetCode_page_Dest(int iStateOfCpdest)= 0 ; 
	/** 
	* Retrieves information about the Code_page_Dest setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/

	virtual HRESULT GetCode_page_DestInfo(CATSettingInfo * oInfo)= 0 ; 
	/** 
	* Locks or unlocks the Code_page_Dest setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/

	virtual HRESULT SetCode_page_DestLock(unsigned char iLocked)= 0 ;
	//------------------------------------------------------
    // Model Dimension Value setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Model Dimension Value setting parameter value.
     * <br><b>Role</b>: The Model Dimension Value setting parameter manages the value of 
	 *   the model dimension usually used in V4 
     * @param oValueOfModelDim 
     *   The Model Dimension Value setting parameter value
     * @return
     *   S_OK if the Model Dimension Value setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetModel_Dimension(double & oValueOfModelDim) =0      ;  
	/**
     * Sets the Model Dimension Value setting parameter value.
     * @param iValueOfModelDim 
     *   The Model Dimension Value setting parameter value.
     * @return
     *   S_OK if the Model Dimension Value setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetModel_Dimension(double iValueOfModelDim)= 0 ;
	/** 
	* Retrieves information about the Model_Dimension setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetModel_DimensionInfo(CATSettingInfo *oInfo)= 0 ;
	/** 
	* Locks or unlocks the Model_Dimension setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetModel_DimensionLock(unsigned char iLocked)= 0 ;
	
	//------------------------------------------------------
    // Model Dimension Unit setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Model Dimension Unit setting parameter value.
     * <br><b>Role</b>: The Model Dimension Unit setting parameter manages the unit used
	 *   for save as model. As the reference unit used in CATSettings is millimeters, a factor
	 *   to convert units chosen is necessary. This factor is the Multiplication Factor parameter.
     * @param oDefaultModelUnit 
     *   The Model Dimension Unit setting parameter value
     * @return
     *   S_OK if the Model Dimension Unit setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetModel_Unit( int & oDefaultModelUnit)= 0 ; 
	/**
     * Sets the Model Dimension Unit setting parameter value.
     * @param iDefaultModelUnit 
     *   The Model Dimension Unit setting parameter value that is the selected line number of the combo box.
     * @return
     *   S_OK if the Model Dimension Unit setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetModel_Unit(int iDefaultModelUnit) = 0 ;
	/** 
	* Retrieves information about the Model_Unit setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetModel_UnitInfo(CATSettingInfo * oInfo)= 0 ; 
	/** 
	* Locks or unlocks the Model_Unit setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetModel_UnitLock(unsigned char iLocked )= 0 ;

	//------------------------------------------------------
    // Associativity Mode setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Associativity Mode setting parameter value.
     * <br><b>Role</b>: The Associativity Mode setting parameter manages the mode in
	 *   which save as model will be done.
     * @param oAssoMode 
     *   The Associativity Mode setting parameter value
     * @return
     *   S_OK if the Associativity Mode setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetAsso_mode(CATV4IV5V4AssociativityModeEnum & oAssoMode) = 0 ; 
	/**
     * Sets the Associativity Mode setting parameter value.
     * @param iAssoMode 
     *   The Associativity Mode setting parameter value.
     * @return
     *   S_OK if the Associativity Mode setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetAsso_mode(CATV4IV5V4AssociativityModeEnum iAssoMode)= 0 ;
	/** 
	* Retrieves information about the Asso_mode setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetAsso_modeInfo(CATSettingInfo * oInfo)= 0 ;
	/** 
	* Locks or unlocks the Asso_mode setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetAsso_modeLock(unsigned char iLocked)= 0 ;
	
	//------------------------------------------------------
    // Layer setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Layer setting parameter value when non associative mode was chosen.
     * <br><b>Role</b>: The Layer setting parameter manages the layer used
	 *   when save as model is not associative
     * @param oDefaultLayer 
     *   The Layer setting parameter value
     * @return
     *   S_OK if the Layer setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetLayer_for_No_Asso(int & oDefaultLayer)= 0 ;
	/**
     * Sets the Layer setting parameter value.
     * @param iDefaultLayer 
     *   The Layer setting parameter value.
     * @return
     *   S_OK if the Layer setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetLayer_for_No_Asso(int iDefaultLayer)= 0 ;
	/** 
	* Retrieves information about the Layer_for_No_Asso setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetLayer_for_No_AssoInfo(CATSettingInfo *oInfo)= 0 ;
	/** 
	* Locks or unlocks the Layer_for_No_Asso setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetLayer_for_No_AssoLock(unsigned char iLocked)=0  ;    
	//------------------------------------------------------
    // Error Feature Display setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Error Feature Display setting parameter value.
     * <br><b>Role</b>: The Error Feature Display setting parameter manages the creation
	 *   of an error feature when the save is not complete.
     * @param oModeErrorDisplay 
     *   The Error Feature Display setting parameter value
     * @return
     *   S_OK if the Error Feature Display setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum & oModeErrorDisplay)= 0 ;
	/**
     * Sets the Error Feature Display setting parameter value.
     * @param iModeErrorDisplay 
     *   The Error Feature Display setting parameter value.
     * @return
     *   S_OK if the Error Feature Display setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum iModeErrorDisplay)= 0 ;
	/** 
	* Retrieves information about the ModeErrorDisplay setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetModeErrorDisplayInfo(CATSettingInfo * oInfo)= 0 ; 
	/** 
	* Locks or unlocks the ModeErrorDisplay setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetModeErrorDisplayLock(unsigned char iLocked )= 0 ;

	//------------------------------------------------------
    // Initial Model File Path setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Initial Model File Path setting parameter value.
     * <br><b>Role</b>: The Initial Model File Path setting parameter manages the location
	 *   of a V4 model which will be used during save as model
     * @param oDefaultInitialModelPath 
     *   The Initial Model File Path setting parameter value
     * @return
     *   S_OK if the Initial Model File Path setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetInitial_Model_File_Path( CATUnicodeString & oDefaultInitialModelPath)= 0 ;
	/**
     * Sets the Initial Model File Path setting parameter value.
     * @param iDefaultInitialModelPath 
     *   The Initial Model File Path setting parameter value.
     * @return
     *   S_OK if the Initial Model File Path setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetInitial_Model_File_Path( CATUnicodeString &iDefaultInitialModelPath) = 0 ;
	/** 
	* Retrieves information about the Initial_Model_File_Path setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetInitial_Model_File_PathInfo(CATSettingInfo * oInfo)= 0 ;
	/** 
	* Locks or unlocks the Initial_Model_File_Path setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetInitial_Model_File_PathLock(unsigned char iLocked )= 0 ;

	//------------------------------------------------------
    // Curve Display Mode setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Curve Display Mode setting parameter value.
     * <br><b>Role</b>: The Curve Display Mode setting parameter manages the mode.
	 *   of creation of V4 curves (between faces).
     * @param oDefaultCreateDisplay 
     *   The Curve Display Mode setting parameter value
     * @return
     *   S_OK if the Curve Display Mode setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum & oDefaultCreateDisplay)= 0 ;
	/**
     * Sets the Curve Display Mode setting parameter value.
     * @param iDefaultCreateDisplay 
     *   The Curve Display Mode setting parameter value.
     * @return
     *   S_OK if the Curve Display Mode setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum iDefaultCreateDisplay)= 0 ;
	/** 
	* Retrieves information about the ModeCreateDisplay setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetModeCreateDisplayInfo(CATSettingInfo * oInfo) = 0 ;
	/** 
	* Locks or unlocks the ModeCreateDisplay setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetModeCreateDisplayLock(unsigned char iLocked)= 0 ;
	
	//------------------------------------------------------
    // Multiplication Factor setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Multiplication Factor setting parameter value.
     * <br><b>Role</b>: The Multiplication Factor setting parameter manages the conversion
	 *   of model dimension in millimeters. This parameter is used with the Model Dimension
	 *   Unit parameter in order to stock the value in millimeter in the CATSetting. The Multiplication
	 *   factor is the ratio between millimeters and the unit selected. For example if the unit selected
	 *   is Meter, then the Multiplication Factor is 1000.
     * @param DefaultModelFactor 
     *   The Multiplication Factor setting parameter value
     * @return
     *   S_OK if the Multiplication Factor setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetModel_Factor(double & oDefaultModelFactor)= 0 ;
	/**
     * Sets the Multiplication Factor setting parameter value.
     * @param iDefaultModelFactor 
     *   The Multiplication Factor setting parameter value.
     * @return
     *   S_OK if the Multiplication Factor setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetModel_Factor(double iDefaultModelFactor)= 0 ;
	/** 
	* Retrieves information about the Model_Factor setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetModel_FactorInfo(CATSettingInfo * oInfo) = 0 ;
	/** 
	* Locks or unlocks the Model_Factor setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetModel_FactorLock(unsigned char iLocked)= 0 ;

	//------------------------------------------------------
    // Capital Letters setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Capital Letters setting parameter value.
     * <br><b>Role</b>: The Capital Letters setting parameter manages the mode
	 *   of creation of the V4 model name (in capital letters or not)
     * @param oDefaultModelFileName 
     *   The Capital Letters setting parameter value
     * @return
     *   S_OK if the Capital Letters setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetModel_File_Name(CATBoolean & oDefaultModelFileName)= 0 ;
	/**
     * Sets the Capital Letters setting parameter value.
     * @param iDefaultModelFileName 
     *   The Capital Letters setting parameter value.
     * @return
     *   S_OK if the Capital Letters setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetModel_File_Name(CATBoolean iDefaultModelFileName)= 0 ;
	/** 
	* Retrieves information about the Model_File_Name setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetModel_File_NameInfo(CATSettingInfo * oInfo) = 0 ;
	/** 
	* Locks or unlocks the Model_File_Name setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetModel_File_NameLock(unsigned char iLocked)= 0 ;

	/**
     * Retrieves the cleaning tolerance value setting parameter value.
     * <br><b>Role</b>: The cleaning tolerance value setting parameter manages the cleaning
	 *   of small elements in V4 model.
     * @param oValue
     *   The cleaning tolerance value setting parameter value
     * @return
     *   S_OK if the cleaning tolerance setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetCleanTolValue(double & oValue)=0; 
	/**
     * Sets the cleaning tolerance value setting parameter value.
     * <br><b>Role</b>: The cleaning tolerance value setting parameter manages the cleaning
	 *   of small elements in V4 model.
     * @param iValue 
     *   The cleaning tolerance setting parameter value
     * @return
     *   S_OK if the cleaning tolerance value setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT SetCleanTolValue(double iValue)=0;  
	/** 
	* Retrieves information about the CleanTolValue setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetCleanTolValueInfo (CATSettingInfo * oInfo)=0;  
	/** 
	* Locks or unlocks the CleanTolValue setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetCleanTolValueLock (unsigned char iLocked)=0;
	
	/**
     * Retrieves the cleaning tolerance mode setting parameter value.
     * <br><b>Role</b>: The cleaning tolerance mode setting parameter manages the cleaning
	 *   of small elements in V4 model.
     * @param oCheck 
     *   The cleaning tolerance mode setting parameter value
     * @return
     *   S_OK if the cleaning tolerance mode setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetCleanTolCheck(CATBoolean & oCheck)=0;  
	/**
     * Sets the cleaning tolerance mode setting parameter value.
     * <br><b>Role</b>: The cleaning tolerance mode setting parameter manages the cleaning
	 *   of small elements in V4 model.
     * @param iValue 
     *   The cleaning tolerance mode setting parameter value
     * @return
     *   S_OK if the cleaning tolerance mode setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT SetCleanTolCheck(CATBoolean iCheck)=0;  
	/** 
	* Retrieves information about the CleanTolCheck setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetCleanTolCheckInfo (CATSettingInfo * oInfo)=0;  
	/** 
	* Locks or unlocks the CleanTolCheck setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetCleanTolCheckLock (unsigned char iLocked)=0; 
};

CATDeclareHandler(CATIV4IV4WritingSettingAtt, CATBaseUnknown);

#endif

