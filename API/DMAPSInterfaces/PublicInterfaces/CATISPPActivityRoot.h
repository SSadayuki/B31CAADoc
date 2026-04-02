#ifndef CATISPPActivityRoot_H
#define CATISPPActivityRoot_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"
#include "sequence_octet.h"

class CATIContainer_var ; 
class CATUnicodeString ;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPActivityRoot ;
#else
extern "C" const IID IID_CATISPPActivityRoot ;
#endif

/**
* Interface to manage specific fonctionnalities for process root.
*/
class ExportedByProcessInterfaces CATISPPActivityRoot : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
	/**
	*  Adds a path to library in the list of libraries associated to the process.
	* @return
	* 	Handler on the the libray container
	*/
    virtual CATIContainer_var   AddLibraryToUse(const CATUnicodeString & iLibraryName) = 0 ;
    
	/**
	*  Returns list of paths to libraries associated to the process.
	* @return
	* 	List of paths
	*/
    virtual CATListOfCATUnicodeString*   GetListOfLibraryPath()const = 0 ;
    
    	/**
	*  Returns list of libraries containers associated to the process.
	* @return
	* 	List of handlers on the the libray container
	*/
    virtual CATListValCATBaseUnknown_var*   GetListOfLibraryContainer()const = 0 ;

	/**
	*  Adds a path to library in the list of libraries associated to the process.
	* @return
	* 	Handler on the the libray container
	*/
    virtual CATIContainer_var   AddLibraryToUse(const SEQUENCE(octet)& iDocSymlink) = 0 ;
    

};

CATDeclareHandler( CATISPPActivityRoot, CATBaseUnknown) ;

#endif







