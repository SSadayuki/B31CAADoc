/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// COPYRIGHT DASSAULT SYSTEMES  2001

#ifndef CATSdaiSchemaRestore_H
#define CATSdaiSchemaRestore_H


#include <KS0LATE.h>

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  1996
//=============================================================================
//
// class  CATSdaiSchemaRestore :
//        --------------------
//
//	SDAI -- C++ Language Binding
//
//	just contain a static function "Restore" that will build a SaveForm
//	from the 2 lists of orders, and use it to fill the SDAI dico
//
//=============================================================================
//
// Usage Notes :
// -----------
//
// this class only defines a level of scoping (as namespaces are forbidden...)
//
// it will reduce dependencies for application compiling "LoadDico" generated
// code issued from of one their schemas.
// (i.e. no reference to Collections or Internationalization FWs)
//
//=============================================================================
// Jul. 96   Creation                                   Ph. Baucher
//=============================================================================

#include <stdlib.h>

class SdaiDictionaryRepo ;


	////////////////////
class ExportedByKS0LATE CATSdaiSchemaRestore
	////////////////////
{
  public :
	static
	  void		Restore ( SdaiDictionaryRepo&	ioDico
				 , int			iCountCrtOrders
				 , const char**		iCreateOrders
				 , int			iCountUpdOrders
				 , const char**		iUpdateOrders
				 , int			iOrdersToDuplicate
				 , int			iFormLevel
				 );
  private :
	// to prevent instanciation of that class 
	CATSdaiSchemaRestore();
  CATSdaiSchemaRestore(const CATSdaiSchemaRestore&);
  CATSdaiSchemaRestore& operator=(const CATSdaiSchemaRestore&);
	~CATSdaiSchemaRestore()	  {} 


};

#endif  /* CATSdaiSchemaRestore_H */
