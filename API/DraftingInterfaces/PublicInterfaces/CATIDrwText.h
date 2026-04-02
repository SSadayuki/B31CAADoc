#ifndef CATIDrwText_H
#define CATIDrwText_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATIDrwAnnotationComponent.h"

#include "CATUnicodeString.h"
#include "CATDrwUtility.h"
#include "CATListOfInt.h"
#include "CATISpecObject.h"

class CATListValCATISpecObject_var;
class CATIDrwText_var;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwText ;
#else
extern "C" const IID IID_CATIDrwText ;
#endif
/**
* Interface to manage a text.
* @see CATIDrwSubString, CATIDrwTextProperties
*/
class ExportedByDraftingItfCPP CATIDrwText : public CATIDrwAnnotationComponent
{
  CATDeclareInterface;

  public:

   /**
   * @nodoc
   * Manage the Encoded String
   * @param EncodedString 
   *   Valuate the Attr with the Encoded string
   */
   virtual HRESULT SetEncodedString(CATUnicodeString iEncodedString) = 0;

   /**
   * @nodoc
   * Manage the Encoded String .
   * @return 
   *   Read the attribute and return the encoded string.
   */
   virtual HRESULT GetEncodedString(CATUnicodeString & oEncodedString) = 0;

   /**
   * Manage the text string.
   * @param iString 
   *   String to add to the text.
   * @param iStart
   *   First character to modify.
   * @param iEnd
   *   Last character to modify.
   *   <br><br><u>Parameters combinations :</u>
   *   <br>If <b>iStart</b> and <b>iEnd</b> equal 0 iString is appended to the text.
   *   <br>If <b>iStart</b> equals 0 and <b>iEnd</b> is greater than 0 all text is replaced by iString.
   *   <br>If <b>iStart</b> greater than 0 and <b>iEnd</b> equals 0 iString is inserted at iStart character.
   *   <br>If <b>iStart</b> and <b>iEnd</b> are greater than 0 characters between iStart and iEnd
   *   will be replaced iString.
   */
   virtual HRESULT SetStringAt(CATUnicodeString iString, int iStart=0, int iEnd=0) = 0;
   
   /**
   * Get the text string between to character indexes.
   * @param iStart
   *   First character to get.
   *   <br>If <b>iStart</b> equals 0 string is got from the begining.
   * @param iEnd
   *   Last character to get.
   *   <br>If <b>iEnd</b> equals 0 string is got to the end.
   * @param oString
   *   Output string.
   */
   virtual HRESULT GetStringAt(CATUnicodeString &oString, int iStart=0, int iEnd=0) = 0;

   /** 
   * Get the wrapping text mode.
   * @param oMode
   *   Wrapping text mode.
   *   <br>Refer to CATDrwUtility. 
   */
   virtual HRESULT IsWrapped(CATDrwWrappingMode &oMode) = 0;
   
   /**
   * Set or unset the wrapping width.
   * @param iMode 
   *   wrapping text mode.
   *   <br>Refer to CATDrwUtility. 
   * @param iWidth 
   *   Wrapping Width value. 
   */
   virtual HRESULT SetWrappingWidth(CATDrwWrappingMode imode=CATDrwWrappingAuto, double iWidth=0.) = 0;
   
   /**
   * Read the text wrapping width.
   * @param oWidth 
   *   Wrapping width value.
   */
   virtual HRESULT GetWrappingWidth(double &oWidth) = 0;

   /**
   * Set global parameter text <b>integer</b> values.
   * @param iParam  
   *   Parameter type.
   * @param iValue  
   *   Parameter input value.
   * @see CATDrwTextSetting
   */
   virtual HRESULT SetGlobalParameter(CATDrwTextSetting iParam, int iValue) = 0;

   /**
   * Set global parameter text <b>double</b> values.
   * @param iParam  
   *   Parameter type.
   * @param iValue  
   *   Parameter input value.
   * @see CATDrwTextSetting
   */
   virtual HRESULT SetGlobalParameter(CATDrwTextSetting iParam, double iValue) = 0;

   /**
   * Read global parameter text <b>integer</b> values.
   * @param iParam  
   *   Parameter type.
   * @param oValue  
   *   Parameter output value.
   * @see CATDrwTextSetting
   */
   virtual HRESULT GetGlobalParameter(CATDrwTextSetting iParam, int & oValue) = 0;

   /**
   * Read global parameter text <b>double</b> values.
   * @param iParam  
   *   Parameter type.
   * @param oValue  
   *   Parameter output value.
   * @see CATDrwTextSetting
   */
   virtual HRESULT GetGlobalParameter(CATDrwTextSetting iParam, double & oValue) = 0;

   /**
   * Set text parameter <b>integer</b> values.
   * @param iParam  
   *   Parameter type.
   * @param iStart  
   *   First character to modify.
   * @param iEnd  
   *   Last character to modify.
   * @param iValue  
   *   Parameter input value.
   * @see CATDrwTextProperty
   */
   virtual HRESULT SetParameterOnSubString(CATDrwTextProperty iParam, int iStart, int iEnd, int iValue) = 0;

   /**
   * Set text parameter <b>double</b> values.
   * @param iParam  
   *   Parameter type.
   * @param iStart  
   *   First character to modify.
   * @param iEnd  
   *   Last character to modify.
   * @param iValue  
   *   Parameter input value.
   * @see CATDrwTextProperty
   */
   virtual HRESULT SetParameterOnSubString(CATDrwTextProperty iParam, int iStart, int iEnd, double iValue) = 0;

   /**
   * Set text parameter <b>string</b> values.
   * @param iParam  
   *   Parameter type.
   * @param iStart  
   *   First character to modify.
   * @param iEnd  
   *   Last character to modify.
   * @param iValue  
   *   Parameter input value.
   * @see CATDrwTextProperty
   */
   virtual HRESULT SetParameterOnSubString(CATDrwTextProperty iParam, int iStart, int iEnd, CATUnicodeString iValue) = 0;

   /**
   * Get text parameter <b>integer</b> values.
   * @param iParam  
   *   Parameter type.
   * @param iStart  
   *   First character to get.
   * @param iEnd  
   *   Last character to get
   * @param oValue  
   *   Parameter output value.
   * @param oPure  
   *   Parameter constancy.
   *   <br> Equals 1 if parameter value is the same between iStart and iEnd characters.
   *   <br> Equals 0 if parameter value is not the same between iStart and iEnd characters.
   * @see CATDrwTextProperty
   */
   virtual HRESULT GetParameterOnSubString(CATDrwTextProperty iParam, int iStart, int iEnd, int &oValue, int &oPure) = 0;

   /**
   * Get text parameter <b>double</b> values.
   * @param iParam  
   *   Parameter type.
   * @param iStart  
   *   First character to get.
   * @param iEnd  
   *   Last character to get
   * @param oValue  
   *   Parameter output value.
   * @param oPure  
   *   Parameter constancy.
   *   <br> Equals 1 if parameter value is the same between iStart and iEnd characters.
   *   <br> Equals 0 if parameter value is not the same between iStart and iEnd characters.
   * @see CATDrwTextProperty
   */
   virtual HRESULT GetParameterOnSubString(CATDrwTextProperty iParam, int iStart, int iEnd, double &oValue, int &oPure) = 0;

   /**
   * Get text parameter <b>string</b> values.
   * @param iParam  
   *   Parameter type.
   * @param iStart  
   *   First character to get.
   * @param iEnd  
   *   Last character to get
   * @param oValue  
   *   Parameter output value.
   * @param oPure  
   *   Parameter constancy.
   *   <br> Equals 1 if parameter value is the same between iStart and iEnd characters.
   *   <br> Equals 0 if parameter value is not the same between iStart and iEnd characters.
   * @see CATDrwTextProperty
   */
   virtual HRESULT GetParameterOnSubString(CATDrwTextProperty iParam, int iStart, int iEnd, CATUnicodeString &oValue, int &oPure) = 0;

   /**
   * Insert a text semantic link.
   * @param iPos  
   *   Character insertion position.
   * @param ipObject  
   *   Object from which value will be extracted or Type of object to link with.
   * @param iAttName  
   *   Attribute name to extract value.
   */
   virtual HRESULT InsertVariable(int iPos, CATBaseUnknown *ipObject, const CATUnicodeString &iAttName="") = 0;

   /**
   * @nodoc
   */
   virtual HRESULT GetListOfVariables(CATListValCATISpecObject_var *&oList) = 0;
   
   /**
   * Get list of linked objects.
   * @param oList [out, delete]
   *    [out] Linked objects list.
   */
   virtual HRESULT GetListOfVariables(CATListValCATBaseUnknown_var *&oList) = 0;

   /**
   * Get positions in list of linked objects.
   * @param ipObject  
   *   Linked object.
   * @param oList
   *   List of positions where link is referenced.
   */
   virtual HRESULT GetVariablePositions(CATBaseUnknown *ipObject, CATListOfInt &oList) = 0;

   /**
   * Isolate the text from its semantic link.
   * @param ipObject
   *   Object to isolate the text from.
   *   <br>If no object is given the text will be isolated from all its links.
   */
   virtual HRESULT Isolate(CATBaseUnknown *ipObject=NULL) = 0;
                             
   /**
   * @nodoc
   * Replicate the text with semantic link
   * @param ipToCopy
   *   The text to replicate
   * @param iList  
   *   linked obj
   */
   virtual HRESULT ReplicateText(CATIDrwText *ipToCopy, CATListValCATBaseUnknown_var *iList, int iCopyMode=0) = 0;
   
   /**
   * @nodoc
   * Get list of definitions.
   * @param oTypeList
   *  List of instances type in definitions.
   * @param oAttNameList
   *  List of instance's attributes names in definitions
   */
   virtual HRESULT GetListOfDefinitions(CATListOfCATUnicodeString &oTypeList, CATListOfCATUnicodeString &oAttNameList) = 0;

   /**
   * @nodoc
   * Get Number of linked objects.
   * @param oNumber
   *   Number of Linked objects.
   */
   virtual HRESULT GetNumberOfVariables(int &oNumber) = 0;

   /**
   * @nodoc
   * Get Number of definitions in text.
   * @param oNumber
   *   Number of definitions.
   */
   virtual HRESULT GetNumberOfDefinitions(int &oNumber) = 0;

   /**
   * @nodoc
   * Get position in list of linked objects.
   * @param ipObject  
   *   Instance type of the link.
   * @param iAttName
   *   Name of the searched attribute.
   * @param oList
   *   List of position where link is referenced.
   */
   virtual HRESULT GetDefinitionPositions(CATBaseUnknown *ipObject, const CATUnicodeString &iAttName, CATListOfInt &oList) = 0;

   /**
   * @nodoc
   * Get the internal name of type associated to definitions .
   * @param oTypeName
   *   The internal name of the associated object.
   */
   virtual HRESULT GetAssociatedObjectTypeName(CATUnicodeString &oTypeName) = 0;

   /**
   * @nodoc
   * Solve Links definition with an instance.
   * @param ipObject
   *   The object used to solve the links.
   */
   virtual HRESULT SolveLinks(CATBaseUnknown *ipObject) = 0;

   /**
   * @nodoc
   * Get Text type.
   * @param oType
   *   The Type of the Text
   * @see CATDrwTextType
   */
   virtual HRESULT GetTextType(CATDrwTextType &oType) = 0;

   /**
   * @nodoc
   * This method is now replaced by @href CATIDrwTextProperties#SetAnchorPoint.
   * Set the text anchor position.
   * @param iAnchorPos  
   *   Text anchor position.
   * @see CATDrwAnchorPoint
   */
   virtual HRESULT SetAnchorPosition(CATDrwAnchorPoint iAnchorPos) = 0;
   
   /**
   * @nodoc
   * This method is now replaced by @href CATIDrwTextProperties#GetAnchorPoint.
   * Get text anchor position.
   * @param oAnchorPos  
   *   Text anchor position.
   * @see CATDrwAnchorPoint
   */
   virtual HRESULT GetAnchorPosition(CATDrwAnchorPoint &oAnchorPos) = 0;
  
   /**
   * @deprecated V5R17 use CATIDrwSubString#SetSymbol
   * Insert a symbol in a text. 
   * <br>This symbol will remain displayed even if text font is changed. 
   * @param iSymbol  
   *   Unicode symbol value. 
   * @param iStart
   *   Start location .
   * @param iEnd
   *   End location
   * @param iFont  
   *   Font name to use for this symbol. 
   *   <br>If no font is given a default one is taken according to the current standard and the 
   *   unicode value.
   */
   virtual HRESULT InsertSymbol(CATUnicodeString iSymbol, int iStart, int iEnd, CATUnicodeString iFont="") = 0;

   /**
   * @nodoc
   * Insert an object.
   * @param iObject
   *   The object to insert in the text
   * @param iStartPosition
   *   The position in the string where to insert the object
   */
   virtual HRESULT InsertObject(CATBaseUnknown *iObject, int iStartPosition) = 0;

   /**
   * @nodoc
   * Get object that have been inserted in the text.
   * @param oList [out, delete]
   *    [out] The list that will be filled in with objects
   *          Can be NULL if the list is empty
   */
   virtual HRESULT GetListOfInsertedObject(CATListValCATBaseUnknown_var **oList) = 0;

   /**
   * @nodoc
   * Remove an inserted object (all if iObject == NULL)
   * @param iObject
   *   The object to remove.
   * @return S_OK
   *   The object has been found and removed
   * @return S_FALSE
   *   The object has not been found
   * @return E_FAIL
   *   An error occurs
   */
   virtual HRESULT RemoveInsertedObject(CATBaseUnknown *iObject=NULL) = 0;
};
CATDeclareHandler(CATIDrwText, CATIDrwAnnotationComponent);
#endif
