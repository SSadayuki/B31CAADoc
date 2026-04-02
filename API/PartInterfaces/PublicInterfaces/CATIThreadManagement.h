/* -*-c++-*- */
#ifndef CATIThreadManagement_H
#define CATIThreadManagement_H
// COPYRIGHT DASSAULT SYSTEMES 2014

/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#include <PartItf.h>
#include <CATBaseUnknown.h>

class CATISpecObject_var;
class CATICkeParm_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIThreadManagement;
#else
extern "C" const IID IID_CATIThreadManagement;
#endif

/**
* Class to manage 'Threaded Hole' or 'Thread' feature.
* <b>Role</b>: Class CATIThreadManagement inherits from CATBaseUnknown. 
* Methods defined below are specifics to 'Threaded Hole' or 'Thread' feature. 
* They manage Thread Standard and Thread Description for 'Threaded Hole' or 'Thread' 
* feature.
* @see CATBaseUnknown
*/
class ExportedByPartItf CATIThreadManagement : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

 	/**
	* Sets Thread Description for 'Threaded Hole' or 'Thread' feature 
	* @param iThreadDescription
	*		 Thread Description to be set on 'Threaded Hole' or 'Thread' feature 
	* In addition of setting Thread Description, this method also sets Thread Diameter and Thread Pitch linked to Thread Description on 'Threaded Hole' or 'Thread' feature 
	* In case of 'Threaded Hole' feature, if hole is not threaded or thread standards are not set on Hole then this method returns E_FAIL.
	* In case of 'Thread' feature, if Thread Standard is not set on 'Thread' feature then this method returns E_FAIL.
	**/
	virtual HRESULT SetThreadDescription(CATUnicodeString&  iThreadDescription)				= 0;

	/*
	* Method for retrieving name of Thread Description for 'Threaded Hole' or 'Thread' feature 
	*		@param oThreadDescription
	*					 Retrieved name of Thread Description of 'Threaded Hole' or 'Thread' feature 
	* In case of 'Threaded Hole' feature, if the hole is not threaded or if no Thread Standard has been set on the threaded Hole, this method returns E_FAIL.
	* In case of 'Thread' feature, if no Thread Standard has been set on the thread, this method returns E_FAIL.
	*	If thread standards with no description are set on 'Threaded Hole' or 'Thread' feature, this method returns empty string.
	*/
	virtual HRESULT GetThreadDescription(CATUnicodeString & oThreadDescription)				= 0;

	/*
	* Method for retrieving Thread Description Parameter for 'Threaded Hole' or 'Thread' feature 
	* @param oThreadDescription
	*				 Retrieved Thread Description Parameter of 'Threaded Hole' or 'Thread' feature 
	* In case of 'Threaded Hole' feature, if the hole is not threaded or if no Thread Standard has been set on the threaded Hole, this method returns E_FAIL. 
	* In case of 'Thread' feature, if no Thread Standard has been set on the thread, this method returns E_FAIL.
	* If thread standards with no description are set on 'Threaded Hole' or 'Thread' feature, this method returns NULL Thread Description parameter.
	*/
	virtual HRESULT GetThreadDescription (CATICkeParm_var & oThreadDescription)				= 0;

	/*
	* Method for retrieving name of Thread Standard for 'Threaded Hole' or 'Thread' feature 
  * @param ostrThreadStandard
	*		 Retrieved name of Thread Standard for 'Threaded Hole' or 'Thread' feature 
	* If the hole is not threaded, this method returns E_FAIL.
	* If no thread standards have been set on 'Threaded Hole' or 'Thread' feature, then this method returns empty string.
	*/
	virtual HRESULT GetThreadStandard (CATUnicodeString& ostrThreadStandard) 					= 0;

	/*
	* Method for setting Thread Standards for 'Threaded Hole' or 'Thread' feature 
	* @param istrThreadStandard
	*				 Name of desired Thread Standard, which is to be set on 'Threaded Hole' or 'Thread' feature 
	* Only those Thread Standard existing at the location, as specified by environment variable ‘CATCollectionStandard’, can be set on 'Threaded Hole' or 'Thread' feature 
	* If hole is not threaded, this method returns E_FAIL.
	* If 'No Standard' is to be set as thread standard then pass empty string as input to this method.
	*/
	virtual HRESULT SetThreadStandard (CATUnicodeString& istrThreadStandard)   =0;


};

CATDeclareHandler(CATIThreadManagement, CATBaseUnknown);

#endif // CATIThreadManagement_H
