// COPYRIGHT Dassault Systemes 2009
//===================================================================
//
// CATIPrtThreadStandardServices.h
// Define the CATIPrtThreadStandardServices interface
//
//===================================================================
//
// Usage notes:
//   CATIPrtThreadStandardServices : 
//  Services to access to standard of thread/tap
//
//===================================================================
//  Apr 2009  Creation: Report V6 of the code V5  JDE
//===================================================================
/**
* @CAA2Level L1  
* @CAA2Usage U3
*/
#ifndef CATIPrtThreadStandardServices_H
#define CATIPrtThreadStandardServices_H

//------------------------------------------------------------------
#include "PartItf.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtThreadStandardServices;
#else
extern "C" const IID IID_CATIPrtThreadStandardServices;
#endif

class CATUnicodeString;
class CATISpecObject;



/**
 * Services to access to standard tables of thread/tap
 * <br><b>Role</b>: It enables to instantiate a standard table in a given part and 
 * then to access to all the values in it, in order to valuate the 
 * specifications of a Thread/Tap feature.
 */
class ExportedByPartItf CATIPrtThreadStandardServices: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
    
		/**
		*  Create a table of thread standard from a file in a Part.
		*		<br><b>Role</b>: This method instanciates a table in a Part that can be used to 
    *   define thread/tap specifications.
		*   @param iustrPath [in]
		*      The path to the file containing all the values that define the standard.
		*   @param iustrName [in]
		*      The name of the standard table to create.
    *   @param ipFeature [in]
		*      A pointer on a feature in the Part. It defines in which Part, the table will 
    *      be created.
		*   @return
		*   An HRESULT value. 
		*   <br><b>Legal values</b>:
		*   <dl>
		*     <dt><tt>S_OK</tt></dt>
    *     <dd>The table of standard has been successfuly created </dd>
 		*     <dt><tt>S_FALSE</tt></dt>
    *     <dd>The table of standard already exists </dd>
		*     <dt><tt>E_INVALIDARG </tt></dt>
		*     <dd>  <tt>iustrPath</tt> is not a valid path to a valid file, 
    *        or <tt>iustrName</tt> is empty,
    *        or <tt>ipFeature</tt> is invalid </dd>
		*     <dt><tt>E_FAIL</tt></dt>
		*     <dd>Failure during the creation of the table of standard</dd>
		*   </dl>
		*/
		 virtual HRESULT CreateStandardTable(CATUnicodeString& iustrPath, 
                                        CATUnicodeString& iustrName, 
                                        CATISpecObject*   ipFeature) = 0;
 
    /**
		*  Remove a table of thread standard from a Part.
		*		<br><b>Role</b>: This method removes a table of thread standards from a Part.
		*   @param iustrName [in]
		*      The name of the standard table to remove.
    *   @param ipFeature [in]
		*      A pointer on a feature in the Part. It defines in which Part, the table will 
    *      be created.
		*   @return
		*   An HRESULT value. 
		*   <br><b>Legal values</b>:
		*   <dl>
		*     <dt><tt>S_OK</tt></dt>
    *     <dd>The table of standard has been successfuly removed </dd>
 		*     <dt><tt>S_FALSE</tt></dt>
    *     <dd>The table of standard has already been removed, doesn't exist or 
    *     there is at least one thread feature in the Part that use this table. </dd>
		*     <dt><tt>E_INVALIDARG </tt></dt>
		*     <dd>  <tt>iustrName</tt> is empty,
    *        or <tt>ipFeature</tt> is invalid </dd>
		*     <dt><tt>E_FAIL</tt></dt>
		*     <dd>Failure during the removal of the table of standard.
		*   </dl>
		*/
		 virtual HRESULT RemoveStandardTable(CATUnicodeString& iustrName, 
                                         CATISpecObject*   ipFeature) = 0;


    /**
		*  Retrieve the values in a given table of thread standard
		*		<br><b>Role</b>: This method reads inside a table in a Part to find the values corresponding to
    *   a given description or Thread diameter in the table.
		*   @param iustrName [in]
		*      The name of the standard table.
    *   @param ipFeature [int]
		*      A pointer on a feature in the Part. It defines in which Part, the table has to be found.
    *   @param iDescription [inout]
		*      An Unicodestring used to find the values in the table.
    *      For example : M20x2
    *   @param oDiameter [out]
		*      The value of the hole diameter recommanded for the input description.
    *   @param ioThreadDiameter [inout]
		*      The value of the diameter of the thread
    *   @param oThreadPitch    [out]
		*      The value of the pitch of the thread
		* @return
		*   An HRESULT value. 
		*   <br><b>Legal values</b>:
		*   <dl>
		*     <dt><tt>S_OK</tt></dt>
    *     <dd>The values have been successfuly retrieved from the table </dd>
		*     <dt><tt>E_INVALIDARG </tt></dt>
		*     <dd> <tt>iustrName</tt> doesn't exist in the Part,
    *       or <tt>ipFeature</tt> is invalid </dd>
		*     <dt><tt>E_FAIL</tt></dt>
		*     <dd>Impossible to retrieve values corresponding to such inputs in the table</dd>
		*   </dl>
		*/
     virtual HRESULT RetrieveValuesFromStandardTable(CATUnicodeString& iustrName,
                                                    CATISpecObject*   ipFeature,
                                                    CATUnicodeString& iDescription, 
                                                    double          & oDiameter,
                                                    double          & ioThreadDiameter, 
                                                    double          & oThreadPitch) = 0;
                                                    

    /**
		*  Retrieve the list of descriptions in a given table of thread standard
		*		<br><b>Role</b>: This method reads inside a table in a Part to find the descriptions values of a
    *   standard.
		*   @param iustrName [in]
		*      The name of the standard table.
    *   @param ipFeature [int]
		*      A pointer on a feature in the Part. It defines in which Part, the table has to be found.
    *   @param oListString [out]
    *      A list of standard desriptions corresponding.
		* @return
		*   An HRESULT value. 
		*   <br><b>Legal values</b>:
		*   <dl>
		*     <dt><tt>S_OK</tt></dt>
    *     <dd>The values have been successfuly retrieved from the table </dd>
		*     <dt><tt>E_INVALIDARG </tt></dt>
		*     <dd> <tt>iustrName</tt> doesn't exist in the Part,
    *       or <tt>ipFeature</tt> is invalid </dd>
		*     <dt><tt>E_FAIL</tt></dt>
		*     <dd>Impossible to retrieve values corresponding to such inputs in the table</dd>
		*   </dl>
		*/
     virtual HRESULT RetrieveDescriptionsFromStandardTable(CATUnicodeString& iustrName,
                                                    CATISpecObject*   ipFeature,
                                                    CATListOfCATUnicodeString & oListString) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler( CATIPrtThreadStandardServices, CATBaseUnknown );

#endif

