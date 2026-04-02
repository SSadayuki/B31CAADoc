#ifndef CATISamBasicComponent_h
#define CATISamBasicComponent_h
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999  
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//=============================================================================
// CATAnalysisInterfaces Prereq
#include "CATAnalysisInterface.h"

// System Prereq
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATJHNTypeLib.h"
#include "CATUnicodeString.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATDataType.h"

class CATISamBasicComponent_var;
class CATUnicodeString;
class CATILinkableObject_var;
class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamBasicComponent;
#else
extern "C" const IID IID_CATISamBasicComponent;
#endif

/**
 * Interface to basic compoment.
 * <b>Role:</b> Interface designed to manage <b>Analysis Basic Components</b>.<br>
 * <p>
 * In the  Analysis Model, a <b>Basic Component</b> is the low level 
 * descriptive data. It is a "brick" dedicated to build the <b>Analysis 
 * Entitie</b> .<br> 
 * An <b>Analysis Entity</b> describes a Physical data (loads, restraints,
 * materials, etc.) whereas a <b>Basic Components</b> may not have a physical meaning 
 * on their own.<br>
 * A <b>Basic Components</b> can contain several <b>Blocks</b>.
 * A <b>Block</b> is identified by a label.
 * It contains entity data of the same type, organized in superimposed tables.
 */ 

class ExportedByCATAnalysisInterface CATISamBasicComponent : public CATBaseUnknown
	{
	CATDeclareInterface;

	public:

/**
 * Initializes the Basic Component.
 * This Method is called after the Basic Component is created. Do not use.
 */
 		virtual HRESULT Init() = 0;

/**
 * Sets the name of the Basic Component.
 * @param iName The name of the Basic component.
 */
 		virtual HRESULT SetName(const CATUnicodeString& iName) = 0;

/**
 * Retrieves the name of the Basic Component.
 * @param oName The Name of the Basic component.
 */
		virtual HRESULT GetName(CATUnicodeString& oName) const = 0;

/**
 * Retrieves the type of the Basic Component.
 * @param oType The type of the Basic component.
 */		
 
		virtual HRESULT GetType(CATUnicodeString& oType) const = 0;

/**
 * Retrieves the dimensions of the Basic Component structure.
 * @param oLinesNumber   The number of lines.
 * @param oColumnsNumber The number of Columns.
 * @param oLayersNumber  The number of Layers.
 * @param iLabel  The optional Block label.
 */
		virtual HRESULT GetDimensions(CATLONG32 &oLinesNumber, 
						CATLONG32 &oColumnsNumber, 
						CATLONG32 &oLayersNumber,
						const CATUnicodeString& iLabel = NULL) const = 0;


/**
 * Sets the dimensions of the Basic Component structure. 
 * <b>Note:<b> To use with StartUps and MultiLayerManager basic components
 * @param iLinesNumber   The number of lines.
 * @param iColumnsNumber The number of Columns.
 * @param iLayersNumber  The number of Layers.
 */
		virtual HRESULT SetDimensions(CATLONG32 iLinesNumber, 
									  CATLONG32 iColumnsNumber, 
									  CATLONG32 iLayersNumber) const = 0;
						
/**
 * Retrieves a descriptive property about the Basic Component.<br> For instance,
 * "AntisymetricStructure" for a Tensor.
 * @param oProperty the Descriptive Property.
 */
		virtual HRESULT GetDescriptiveProperty(CATUnicodeString& oProperty) const = 0;
		
/**
 * Sets the value of the Component.
 * @param iValue  The new value.
 * @param iLabel The optional Block label.
 * @param iLineIndex  The index of the target line.
 * @param iColumnIndex  The index of the target Column.
 * @param iLayerIndex  The index of the target Layer.
 */

		virtual HRESULT SetDoubleValue(double iValue,
						  const CATUnicodeString& iLabel = NULL,
						  int iLineIndex=0,
						  int iColumnIndex=0,
						  int iLayerIndex=0) = 0;
/**
 * Sets the value of the Component.
 * @param iValue  The new value.
 * @param iLabel The optional Block label.
 * @param iLineIndex  The index of the target line.
 * @param iColumnIndex  The index of the target Column.
 * @param iLayerIndex  The index of the target Layer.
 */

		virtual HRESULT SetIntegerValue(int iValue,
						   const CATUnicodeString& iLabel = NULL,
						   int iLineIndex=0,
						   int iColumnIndex=0,
						   int iLayerIndex=0) = 0;  
/**
 * Sets the value of the Component.
 * @param iValue  The new value.
 * @param iLabel The optional Block label.
 * @param iLineIndex  The index of the target line.
 * @param iColumnIndex  The index of the target Column.
 * @param iLayerIndex  The index of the target Layer.
 */

		virtual HRESULT SetBooleanValue(CATBoolean iValue,
						   const CATUnicodeString& iLabel = NULL,
						   int iLineIndex=0,
						   int iColumnIndex=0,
						   int iLayerIndex=0) = 0;  
/**
 * Sets the value of the Component.
 * @param iValue  The new value.
 * @param iLabel The optional Block label.
 * @param iLineIndex  The index of the target line.
 * @param iColumnIndex  The index of the target Column.
 * @param iLayerIndex  The index of the target Layer.
 */

		virtual HRESULT SetOctetValue(octet iValue,
						 const CATUnicodeString& iLabel = NULL,
						 int iLineIndex=0,
						 int iColumnIndex=0,
						 int iLayerIndex=0) = 0;  
/**
 * Sets the value of the Component.
 * @param iValue  The new value.
 * @param iLabel The optional Block label.
 * @param iLineIndex  The index of the target line.
 * @param iColumnIndex  The index of the target Column.
 * @param iLayerIndex  The index of the target Layer.
 */

		virtual HRESULT SetStringValue(const CATUnicodeString& iValue,
						  const CATUnicodeString& iLabel = NULL,
 						  int iLineIndex=0,
						  int iColumnIndex=0,
						  int iLayerIndex=0) = 0;
/**
 * Sets the value of the Component.
 * @param iValue  The new value.
 * @param iLabel The optional Block label.
 * @param iLineIndex  The index of the target line.
 * @param iColumnIndex  The index of the target Column.
 * @param iLayerIndex  The index of the target Layer.
 */

		virtual HRESULT SetBaseUnknownValue(const CATBaseUnknown_var& oValue,
						       const CATUnicodeString& iLabel = NULL,
						       int iLineIndex=0,
						       int iColumnIndex=0,
						       int iLayerIndex=0) = 0;
 /**
 * Sets the value of the Component.
 * @param iFeatureName : features instance name
 * @param iFeatureType : features type
 * @param iCkeType     : type of the instance to create if Literal
 */
		virtual HRESULT SetBaseUnknownValue(const CATUnicodeString & iFeatureName,
											const CATUnicodeString & iFeatureType,
											const CATBaseUnknown_var & iCkeType,
											const CATUnicodeString& iLabel = NULL,
											int iLineIndex=0,
											int iColumnIndex=0,
											int iLayerIndex=0) = 0;


/**
 * Sets the value of the Component.
 * @param iValue  The new value.
 * @param iProduct  The product positionning the value.
 * @param iLabel The optional Block label.
 * @param iLineIndex  The index of the target line.
 * @param iColumnIndex  The index of the target Column.
 * @param iLayerIndex  The index of the target Layer.
 */

		virtual HRESULT SetLinkableValue(const CATILinkableObject_var& iValue,
														const CATILinkableObject_var& iProduct,
														const CATUnicodeString& iLabel=NULL,
														int iLineIndex=0,int iColumnIndex=0,int iLayerIndex=0)=0;

/**
 * Retreives the value of the Component.
 * @param oValue  The returned value.
 * @param iLabel  the optional block label.
 * @param iLineIndex  the optional index of the target line.
 * @param iColumnIndex  the optional index of the target Column.
 * @param iLayerIndex  the optional index of the target Layer.
 */ 
		virtual HRESULT GetDoubleValue(double &oValue,
						  const CATUnicodeString& iLabel = NULL,
						  int iLineIndex=0,
						  int iColumnIndex=0,
						  int iLayerIndex=0) const = 0;  
/**
 * Retreives the value of the Component.
 * @param oValue  The returned value.
 * @param iLabel  the optional block label.
 * @param iLineIndex  the optional index of the target line.
 * @param iColumnIndex  the optional index of the target Column.
 * @param iLayerIndex  the optional index of the target Layer.
 * @param iLayerIndex  Facultative Index of the target Layer.
 */ 
		
		virtual HRESULT GetIntegerValue(int &oValue,
						   const CATUnicodeString& iLabel = NULL,
						   int iLineIndex=0,
						   int iColumnIndex=0,
						   int iLayerIndex=0) const = 0;  
/**
 * Retreives the value of the Component.
 * @param oValue  The returned value.
 * @param iLabel  the optional block label.
 * @param iLineIndex  the optional index of the target line.
 * @param iColumnIndex  the optional index of the target Column.
 * @param iLayerIndex  the optional index of the target Layer.
*/ 

		virtual HRESULT GetOctetValue(octet &oValue,
						 const CATUnicodeString& iLabel = NULL,
						 int iLineIndex=0,
						 int iColumnIndex=0,
						 int iLayerIndex=0) const = 0;  
/**
 * Retreives the value of the Component.
 * @param oValue  The returned value.
 * @param iLabel  the optional block label.
 * @param iLineIndex  the optional index of the target line.
 * @param iColumnIndex  the optional index of the target Column.
 * @param iLayerIndex  the optional index of the target Layer.
 */ 
		
		virtual HRESULT GetBooleanValue(CATBoolean &oValue,
						   const CATUnicodeString& iLabel = NULL,
						   int iLineIndex=0,
						   int iColumnIndex=0,
						   int iLayerIndex=0) const = 0;  
/**
 * Retreives the value of the Component.
 * @param oValue  The returned value.
 * @param iLabel  the optional block label.
 * @param iLineIndex  the optional index of the target line.
 * @param iColumnIndex  the optional index of the target Column.
 * @param iLayerIndex  the optional index of the target Layer.
 */ 
		
		virtual HRESULT GetStringValue(CATUnicodeString& oValue,
						  const CATUnicodeString& iLabel = NULL,
						  int iLineIndex=0,
						  int iColumnIndex=0,
						  int iLayerIndex=0) const = 0;
/**
 * Retreives the value of the Component.
 * @param oValue  The returned value.
 * @param iLabel  the optional block label.
 * @param iLineIndex  the optional index of the target line.
 * @param iColumnIndex  the optional index of the target Column.
 * @param iLayerIndex  the optional index of the target Layer.
 */ 
		
		virtual HRESULT GetBaseUnknownValue(CATBaseUnknown_var& oValue,
						       const CATUnicodeString& iLabel = NULL,
						       int iLineIndex=0,
						       int iColumnIndex=0,
						       int iLayerIndex=0) const = 0;
/**
 * Retreives the value of the Component.
 * @param oValue  The new value.
 * @param oProduct  The product positionning the value.
 * @param oLabel The optional Block label.
 * @param oLineIndex  The index of the target line.
 * @param oColumnIndex  The index of the target Column.
 * @param oLayerIndex  The index of the target Layer.
 */

		 virtual HRESULT GetLinkableValue(CATILinkableObject_var& OValue,
														CATILinkableObject_var& OProduct,
														const CATUnicodeString& iLabel=NULL,
														int iLineIndex=0,int iColumnIndex=0,int iLayerIndex=0)=0;


/**
 * Retrieves the type of the basic component value.
 * @param oValueType  The type of value.
 * @param iLabel  The facultative Block label.
*/ 
		virtual HRESULT GetValueType(TCKind& oValueType,
						const CATUnicodeString& iLabel = NULL) const = 0;



/**
 * Adds a given sub component to the component.<br>
 * Only for basic components dedicated to encapsulate other components.
 * @param iComponent  the agregated component.
 */
		virtual HRESULT AddSubComponent(const CATISamBasicComponent_var& iComponent) = 0;


/**
 * Adds a given sub component to the component.<br>
 * Only for basic components dedicated to encapsulate other components.
 * @param iComponent  the agregated component.
 */
		virtual HRESULT AddSubComponent(const CATISpecObject_var& iComponent) = 0;

 /**
 * Adds a given sub component to the component.<br>
 * Only for basic components dedicated to encapsulate other components.
 * @param iFeatureType : features type under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups).
 * @param iCkeType     : type of the instance to create if Literal
 */
		virtual HRESULT AddSubComponent(const CATUnicodeString & iFeatureName,
																				const CATUnicodeString & iFeatureType,
																				const CATBaseUnknown_var & iCkeType)=0;


/**
 * Removes the given sub component from the component.<br>
 * Only for components dedicated to encapsulate other components.
 * @param iComponent  the removed component.
 */
		virtual HRESULT RemoveSubComponent(const CATISamBasicComponent_var& iComponent) = 0;


/**
 * Removes the given sub component from the component.<br>
 * Only for components dedicated to encapsulate other components.
 * @param iComponent  the removed component.
 */
		virtual HRESULT RemoveSubComponent(const CATISpecObject_var& iComponent) = 0;


/**
 * Retrieves a subcomponent with a the given name.<br>
 * Only for components dedicated to encapsulate other components.
 * @param iName  the name of the searched component.
 * @param oComponent  the returned component.
*/
		virtual HRESULT GetSubComponent(const CATUnicodeString& iName, CATISamBasicComponent_var& oComponent) const = 0;


/**
 * Retrieves a subcomponent with a given name.<br>
 * Only for components dedicated to encapsulate other components.
 * @param iName  the name of the searched component.
 * @param oComponent  the returned component.
*/
		virtual HRESULT GetSubComponent(const CATUnicodeString& iName, CATISpecObject_var& oComponent) const = 0;

/**
 * Retrieves the list of subcomponents.<br>
 * Only for components dedicated to encapsulate other components.
 * @param oComponents  the list of subcomponents.
 * @param iType The type of the basic component.
 */
		virtual HRESULT GetSubComponents(CATLISTV(CATBaseUnknown_var)* &oComponents,const CATUnicodeString& iType=NULL) const = 0;


/**
 * Return the entity which uses the basic component in its definition.
 * @param oEntity  the entity used.
 */
		virtual HRESULT GetDefinedEntity(CATBaseUnknown_var &oEntity) const = 0;

/**
 * Remove all intances of a layer.
 * <b>Note:<b> To use with StartUps and MultiLayerManager basic components
 */
		virtual HRESULT RemoveLayer(int iLayerIndex) const=0;

	};

CATDeclareHandler(CATISamBasicComponent,CATBaseUnknown);

#endif
