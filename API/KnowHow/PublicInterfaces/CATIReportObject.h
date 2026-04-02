/* -*-c++-*- */
#ifndef CATIReportObject_H
#define CATIReportObject_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "Report.h"
#include "CATICheckReport.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByReport IID IID_CATIReportObject ;
#else
extern "C" const IID IID_CATIReportObject ;
#endif

class CATUnicodeString;
class CATISpecObject_var;
class CATIInstance_var;

/**
* Interface dedicated to the behaviour of an element (t-uple) of a report.
*
* <b>Role</b> this interface describes what can be done on an object returned
* by a report on an expert check. A report object is an object containing an
* entry vector of a check and telling whether that entry vector makes the
* check true or not (its validity).
* <br>
* Because of optimization, the entry vector may not contain as many elements
* as the check variables declaration has. For instance, let's one define the
* following check on holes "<Hole1:Hole>.Diameter > 10mm or <Draft1:Draft>.Angle < 5deg".
* If it exists some drafts and a hole with a diameter of 12mm, then <it>whatever the drafts</it>,
* the condition of the check, given this hole, will be true. So there will be a report object,
* containing only this hole, with a validity of true.
*
* @see CATICheck, CATICheckReport .
*/

class ExportedByReport CATIReportObject: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	
	/**
	* Sets the validity of the report object.
	*
	* @param iValidity validity of the report object.
	*/
	virtual  void                           SetValidity(CATICheckReport::ReportEnum iValidity)=0 ;

	/**
	* Gets the validity of the report object.
	*
	* @return validity of the report object.
	*/
	virtual  CATICheckReport::ReportEnum    GetValidity()=0 ;

	/**
	* Gets the check report that generated this report object.
	*
	* @returns check report that generated this report object.
	*/
	virtual CATICheckReport_var             GetCheckReport()=0;

	/** @nodoc */
	virtual  CATUnicodeString               GetFromCheck()=0;

	/** Do not use.
	*
	* @param iCheckName Check name
	*/
	virtual  void                           SetFromCheck( const CATUnicodeString& iCheckName )=0;

	/**
	* Gets the instance at the position <tt>index</tt> in the t-uple.
	*
	* @param iIndex position of the instance.
	*
	* @return an instance.
	*/
	virtual  CATIInstance_var               GetInstanceFromTuple(int iIndex)=0;

	/** @nodoc */
	virtual  CATISpecObject_var             GetObjectFromTuple(int iIndex)=0;

	/** @nodoc */
	virtual  CATUnicodeString               GetInstanceNameFromTuple(int iIndex)=0;
	/**
	* Adds the instance at the end of the report object instances list.
	*
	* @param spInstance an instance.
	*/
	virtual  void                           AddInstanceInTuple( const CATIInstance_var& spInstance )=0;

	/** @nodoc */
	virtual  void                           SetObjectInTuple( const CATISpecObject_var& spInstance )=0;

	/**
	* Gets the size of the t-uple.
	*
	* @return size of the t-uple.
	*/
	virtual  int                            TupleSize()=0;

	/**
	* Clears the t-uple.
	*/
	virtual  void                           TupleReset()=0;
};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATIReportObject, CATBaseUnknown) ;

#endif
