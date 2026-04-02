#ifndef ObjectCCP_SPEC_H
#define ObjectCCP_SPEC_H
/**
* COPYRIGHT DASSAULT SYSTEMES  1999
* @quickReview EVN 04:01:29  BOA Enabling 
* @CAA2Level L1
* @CAA2Usage U2
*/


#include "CATICutAndPastable.h"

/* several side effect (useless) */
#include "CATILinkableObject.h"
#include "CATAssert.h"
#include "CATError.h"         // for SketcherModeler/CATSkmWireframe.m/src/CATBaseDatumCCPExt.cpp
#include "CATErrorMacros.h"   // for SketcherModeler/CATSkmWireframe.m/src/CATBaseDatumCCPExt.cpp
class CATError;         // for Machining
class CATInternalError; // for Machining
class CATIContainer;
class CATIContainer_var;


#include "CP0SPEC.h"
/**
* Base class to give implementation for CATICutAndPastable.
* @see CATICutAndPastable
*/

class ExportedByCP0SPEC ObjectCCP_SPEC: public CATICutAndPastable
{
  CATDeclareKindOf;

 public:

	/**
	 * Constructs a ObjectCCP_SPEC
	 */
  ObjectCCP_SPEC();
  virtual ~ObjectCCP_SPEC();

	/**
	* Lists formats which can be extracted from the selection.
	* <br><b> Role: </b> used on copy.
	*/
  virtual CATLISTP(CATFormat) ListExtractFormats() const;
    /**
	* Lists objects to extract.
	* <br><b> Role: </b> used on copy.
	* @param ioObjectsAlreadyInBoundary
	*        list of objects to extract.
	* @param iObjectsToAdd
	*		 list objects to add to list of objects to extract.
	* @param iAnImposedFormat
	*        if this format is not valid, it will be reinitialized.
	* @return 
	*        1 if there is at least one object extracted.
	*   <br> 0 otherwise
	*/
  virtual int BoundaryExtract(
			   ListOfVarBaseUnknown& ioObjectsAlreadyInBoundary,
			   const ListOfVarBaseUnknown* iObjectsToAdd=NULL,
			   const CATFormat* iAnImposedFormat=NULL) const;

	/**
 	* Creates a structure to receive the boundary objects in the requested format.
	* <br><b> Role: </b> used on copy.
	* @param iObjectToCopy
	*        list of objects to copy.
	* @param iAnImposedFormat
	*        if this format is not valid, it will be reinitialized.
	* @return 
	*        structure created by extract.
    */
  virtual VarBaseUnknown Extract(ListOfVarBaseUnknown& iObjectToCopy,
				 const CATFormat* iAnImposedFormat=NULL) const;

	/**
	* Lists formats which can be pasted.
	* <br><b> Role: </b> used on paste.
	*/
  virtual CATLISTP(CATFormat) ListPasteFormats() const;
	/**
 	* Returns the path of the object to copy.
	* <br><b> Role: </b> used on copy and paste.
	* @param iObjectToCopy
	*        list of objects to copy.
	* @param iToCurObjects   
	*        target objects for paste corresponding to selected objects.
	* @param iAnImposedFormat
	*        if this format is not valid, it will be reinitialized.
    */
  virtual ListOfVarBaseUnknown Paste (ListOfVarBaseUnknown& iObjectToCopy,
			   ListOfVarBaseUnknown* iToCurObjects,
			   const CATFormat* iAnImposedFormat=NULL);

	/**
	* Creates in the client side, all objects required, and provides associations.
	* @param ioAssociationOfObjects
	*        couples of objects source/target.
	* @param iAnImposedFormat
	*        if this format is not valid, it will be reinitialized.
	* @return
	*        0 if failed
	*/
  virtual int Create      (CATBaseUnknown_Associations& ioAssociationOfObjects,
			   const CATFormat* iAnImposedFormat=NULL);

	/**
    * Makes in the client, the update of data and relations.
	* @param ioAssociationOfObjects
	*        couples of objects source/target.
	* @param iAnImposedFormat
	*        if this format is not valid, it will be reinitialized.
	* @param iToCurObjects   
	*        target objects for paste corresponding to selected objects.
	* @return
	*        0 if failed
	*/
  virtual int Update      (CATBaseUnknown_Associations& ioAssociationOfObjects,
					const CATFormat* iAnImposedFormat=NULL,
					ListOfVarBaseUnknown* iToCurObjects=NULL);

	/** @nodoc */
  virtual CATLISTP(CATFormat) ListLinkFormats() const;
	/** @nodoc */
 virtual ListOfVarBaseUnknown Link(ListOfVarBaseUnknown&,
			   ListOfVarBaseUnknown* to_object,
			   const CATFormat* an_imposed_format=NULL);

	/**
	* Lists formats which can be removed from the selection.
	* <br><b> Role: </b> used on cut and delete.
	*/
  virtual CATLISTP(CATFormat) ListRemoveFormats() const;
  /**
	* Creates a list of objects to be removed.
	* <br><b> Role: </b> used on cut and delete.
	* @param ioObjectsAlreadyInBoundary
	*        list of objects to be removed.
	* @param iObjectsToRemove
	*		 list of objects to be removed to be added to existing list.
	* @param iAnImposedFormat
	*        if this format is not valid, it will be reinitialized.
	* @return 
	*        1 if there is at least one object removed.
	*   <br> 0 otherwise
	*/
  virtual int BoundaryRemove(
			   ListOfVarBaseUnknown& ioObjectsAlreadyInBoundary,
			   const ListOfVarBaseUnknown* iObjectsToRemove=NULL,
			   const CATFormat* iAnImposedFormat=NULL) const;

  /**
	* Removes objects.
	* <br><b> Role: </b> used on cut and delete.
	* @param iObjectsToRemove
	*        list of objects to be removed.
	* @param iAnImposedFormat
	*        if this format is not valid, it will be reinitialized.
	* @return 
	*        1 if there is at least one object removed.
	*   <br> 0 otherwise
	*/
  virtual int Remove      (ListOfVarBaseUnknown& iObjectsToRemove,
			   const CATFormat* iAnImposedFormat=NULL);

	/** @nodoc */
  CATIContainer_var FromContainer(ListOfVarBaseUnknown* to_object=NULL) const;
};


#endif
