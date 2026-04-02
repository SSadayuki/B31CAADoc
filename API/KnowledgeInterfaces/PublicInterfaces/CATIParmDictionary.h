#ifndef CATIParmDictionary_H
#define CATIParmDictionary_H

#include "KnowledgeItf.h"
#include "CATBaseUnknown.h"

#include "CATUnicodeString.h"
#include "CATICkeForwards.h"
#include "CATICkeType.h"

// OLE
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATIParmDictionary;
#else
extern "C" const IID IID_CATIParmDictionary;
#endif

class CATICkeParmFactory_var;
class CATICkeMagnitude_var;
class CATICkeUnit_var;

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
* @CAA2Level L1
* @CAA2Usage U3 
*/

/**   
* Interface to manage the dictionary of types.
* <b>Role</b>: It gathers static methods to parameters type dictionary management.
* It offers direct access to common literals types and methods to find magnitudes and units by name<br>
* It gives a way to create your own functions that can later be used in relations, and add them <br>
* to the dictionary<br>
* It gives a way to add own applications that can later be used in applications dialog in the<br>
* knowledgeware workbench <br>
* @see CATIAddLibrary
* @see CATICkeType
* @see CATICkeMagnitude
* @see CATICkeUnit
*/
class ExportedByKnowledgeItf CATIParmDictionary : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/** 
	* Returns the volatile factory.
	*/
	virtual CATICkeParmFactory_var GetVolatileFactory()=0;


	/** 
	* Returns the Real type.
	*/
	virtual CATICkeType_var GetRealType()=0;

	/** 
	* Returns the Integer type.
	*/
	virtual CATICkeType_var GetIntegerType()=0;

	/** 
	* Returns the String type.
	*/
	virtual CATICkeType_var GetStringType()=0;

	/** 
	* Returns the Boolean type.
	*/
	virtual CATICkeType_var GetBooleanType()=0;

	/** 
	* Returns the Length type.
	*/
	virtual CATICkeType_var GetLengthType()=0;

	/** 
	* Returns the Angle type.
	*/
	virtual CATICkeType_var GetAngleType()=0;

	/** 
	* Returns the Void type.
	*/
	virtual CATICkeType_var GetVoidType()=0;

	/** 
	* Returns the Feature type: main basic class for feature references.
	*/
	virtual CATICkeType_var GetFeatureType()=0;

	/** 
	* Returns the Enum type.
	*/
	virtual CATICkeType_var GetEnumType()=0;

	/** 
	* Returns the Dimension type.
	*/
	virtual CATICkeType_var GetDimensionType()=0;

	/** 
	* Returns the basic type for any literal (simple value).
	*/
	virtual CATICkeType_var GetLiteralType() =0;

	/** 
	* Returns the type for lists.
	*/
	virtual CATICkeType_var GetListType () =0;

	/**
	* Finds a magnitude from its coded name.
	*/
	virtual CATICkeMagnitude_var FindMagnitude (const CATUnicodeString &s)=0 ;

	/**
	* Finds a unit from its coded name.
	*/
	virtual CATICkeUnit_var      FindUnit      (const CATUnicodeString &s)=0 ;

	/**
	* Finds a unit from its symbol.
	* @param symbol
	* the string containing the symbol (eg. "mm" or "m3"). 
	* <br>The empty string argument "" is not valid.
	* @return
	* the unit (NULL_var if the unit wasn't found)
	*/
	virtual CATICkeUnit_var FindUnitFromSymbol(const CATUnicodeString &symbol)=0;


	/**
	* Finds a type by its coded name.
	* @param iCodedName : name of type to find 
	*/
	virtual CATICkeType_var FindType (const char* iCodedName)=0 ;

	/**
	* Creates a C++ type (or find it if already exists) and add it to dictionary.
	* @param iCodedName : name of type to create 
	* @param iFatherType: father type if any 
	* @param iNLSName   : NLS name for the type if any 
	* @return  CATICkeType_var : type found or created 
	*/
	virtual CATICkeType_var CreateType (const char *iCodedName,
		const CATICkeType_var &iFatherType = NULL_var,
		const CATUnicodeString &iNLSName = "")=0 ;

	/**
	* Adds a type to the dictionnary.
	* @param iType: type to add 
	*/
	virtual void            AddType (const CATICkeType_var &iType)=0;

	/**
	* Asks to load a library by its name.
	* @param iLibraryName: C++ class name of the library
	* @return   : CATCke::True if succeeded
	*/
	virtual CATCke::Boolean LoadLibrary (const char *iLibraryName)=0;

	/**
	* Removes a type to the dictionnary.
	* @param iType: type to remove : USE WITH CARE 
	*/
	virtual void            RemoveType (const CATICkeType_var &iType)=0;

	/**
	* Returns the list of all magntitudes contained in the parameter dictionary.
	* @param ioListOfMagnitudes: a pointer to an empty list of magnitudes.
	*/
	virtual void Magnitudes (CATCkeListOfMagnitude ioListOfMagnitudes)=0;


};

// declaration of Handler
CATDeclareHandler(CATIParmDictionary,CATBaseUnknown);

#endif
