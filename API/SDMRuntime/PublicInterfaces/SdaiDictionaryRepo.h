/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_DICTIONARY_REPO_H_
#define	_SDAI_DICTIONARY_REPO_H_


#include <KS0LATE.h>

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiDictionaryRepo
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	Corinne  VANDAELE (fevrier 1996)
//	Philippe BAUCHER  
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 00
//	DATE		: fevrier 1996
//	AUTEUR		: CVE
//	NATURE		: Creation
//	DESCRIPTION	: La norme ISO 10303-22 (annexe D) indique que le dictionary-repo
//			 doit etre la seule instance de la classe SdaiRepo. Or celle-ci est
//			 purement virtuelle, donc non-instantiable. De plus, pour des problemes
//			 d'initialisation de Session (les known-servers en particulier), il faut
//			 que chaque constructeur des SdaiXxxRepo ajoute la nouvelle instance a la
//			 liste des known-servers de la session MAIS le dictionary-repo ne doit
//			 pas apparaitre dans cette liste. Enfin il n'y a, pour chaque session,
//			 qu'un et un seul dictionary-repo qui s'initialise de lui-meme (et avant
//			 que la SdaiSession Courante ne soit creee).
//
//	MODIFICATION	: 01
//	DATE		: fevrier 1996
//	AUTEUR		: PHB
//	NATURE		: No more CKM dependency for run-time
//	DESCRIPTION	: Restrict access to Session
//
// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiDictionaryRepo' est une classe cach‚e a l'utilisateur (et donc propre a
//	l'implementation D.S. de la norme) et dont une seule instance sera cre‚e a l'OpenSession
//
//	Seuls des 'SdaiTRModel' peuvent etre crees dans un repository dictionnaire, car on
//	doit pouvoir les relire d'une Base de Donn‚es, mais on ne doit pas pouvor les sauvegerder
//
// ------------------------------------------------------------------------------------------------

#include <SdaiMacro.h>
#include <SdaiRepo.h>
#include "CATDataType.h"

class CATSdaiDictionaryRepo;
class SdaiBoolean;
class SdaiString;

//class CATSdaiSession;
class SdaiSession;


	//////////////////
class ExportedByKS0LATE SdaiDictionaryRepo :	public SdaiRepo
	//////////////////
{
//  friend ExportedByKS0LATE
//    class CATSdaiSession;
  friend ExportedByKS0LATE
    class SdaiSession;
  friend class SdaiVolatileModelRepo;
  
	// =======================
	// D S   E X T E N S I O N
	// =======================
	//
	//	cdtors
	//	------
	//
private : SdaiDictionaryRepo ( const SdaiSessionH ); // use Create
	 ~SdaiDictionaryRepo ();		     // use Delete	

private :
	SdaiDictionaryRepo ( const SdaiDictionaryRepo&	iCopy );
	SdaiDictionaryRepo&	 operator= ( const SdaiDictionaryRepo& );


	//
	//	create/delete THE repo
	//	----------------------
	//
public :
	static
	  SdaiDictionaryRepo*	 TheOne();
	static
	  SdaiDictionaryRepo*	 Create( const SdaiSessionH );
	static
	  void	 Delete();


	//
	//	add/remove schema
	//	-----------------
	//
public :
	int	Add ( SdaiSchemaH );
	int	Remove ( SdaiSchemaH );


	//
	//	retrieve a schema by its name
	//	-----------------------------
	//
public :
	const SdaiSchemaH	GetSchemaDefinition ( const SdaiString&	iName ) const;


	//
	//	close volatile repo
	//	-------------------
	//
private :
	void	CloseRepo ();
	void	CloseRepo ()  const;



	//
	//	type info
	//	---------
	//
public :
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString&	iName )  const;

	virtual
	  const SdaiString&	GetInstanceTypeName()   const ;
	//
	//	add pointer to function loading dictionary
	//	------------------------------------------
public:
	static CATINTPTR AddPtr(void (*)());
	static CATINTPTR AddPtr(void (*)(), const SdaiString& schName);
	//
	//	lock on the definition
	//	----------------------
public :
	const SdaiBoolean&	Lock ()	const;
	//
	void		LocalLock ();
	void		LocalUnlock ();
	//
	virtual
	  void		GlobalLock ();
	virtual
	  void		GlobalUnlock ();

	//
	//	access to implementation :
	//	------------------------
public :
	inline
	  CATSdaiDictionaryRepo*	DictionaryRepo() const
	    { return _DictionaryRepo; }


	// ============
	// DATA MEMBERS
	// ============
private :
	CATSdaiDictionaryRepo*	  _DictionaryRepo ;

	static
	  SdaiDictionaryRepo*	  _TheOne ;


};

#endif	/* _SDAI_DICTIONARY_REPO_H_ */
