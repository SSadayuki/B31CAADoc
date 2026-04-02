/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_REPO_H_
#define	_SDAI_REPO_H_


#include <KS0LATE.h>

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiRepo
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	Corinne  VANDAELE (fevrier 1996)
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 00
//	DATE		: fevrier 1996
//	AUTEUR		: CVE
//	NATURE		: Creation
//	DESCRIPTION	: Norme ISO 10303-22 (binding C++)
//
// ------------------------------------------------------------------------------------------------

#include <SdaiMacro.h>
#include <SdaiSessionInstance.h>
#include <SdaiString.h>

class CATSdaiRepo;
class SdaiBoolean;
class SdaiModel;
class SdaiSession;
class SdaiSet;
class SdaiSchema;

// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiRepo' represente un support ou les modeles peuvent etre stockes.
//
//      'SdaiRepo' est le super-type de volatil_model_repository (par. 7.4.11),
//					transaction_repository	 (par. 7.4.12) et
//					model_repository	 (par. 7.4.13).
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   sdai_repository
//
//		SUPERTYPE OF ( ONEOF ( volatil_model_repository, model_repository, transaction_repository )) ;
//
//		name		: STRING ;			   (* Nom du repository *)
//		contents	: sdai_repository_contents ;	   (* Modeles residants dans le repository *)
//		schemas		: SET OF schema_definition ;	   (* Liste des schemas du repository *)
//		mode		: OPTIONAL access_type ;	   (* Mode d'acces courant du repository *)
//
//	INVERSE
//		session		: sdai_session FOR known_servers ; (* Session courante *)
//
//	UNIQUE
//		UR1		: name, session ;		   (* Le nom doit etre unique dans une session *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

class ExportedByKS0LATE SdaiRepo	: public	SdaiSessionInstance
{

friend class	SdaiSession;
friend class	SdaiTransaction;

	// ****************************************************************************************
	// C O N S T R U C T O R S
	// D E S T R U C T O R S
	// ****************************************************************************************
	SdaiRepo ();
protected :
	SdaiRepo	( const SdaiSessionH	session,
			  const SdaiBoolean  &  add_to_known_servers  );
private:
	SdaiRepo	( const	SdaiRepo& );
	SdaiRepo& operator=(const	SdaiRepo& );
protected:
	SdaiRepo	( const SdaiSessionH                    session ,
			  const SDAIAGGRH(SdaiSet,SdaiModelH)&	models,
			  const SdaiString&			repo_name,
			  const SDAIAGGRH(SdaiSet,SdaiSchemaH)&	schemata,
			  SdaiAccessMode			mode,
			  SdaiAttrFlag				mode_flag = sdaiUNSET );

	/* virtual */   ~SdaiRepo ();

	// ****************************************************************************************
	// A C C E S    F U N C T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public :
		const	SdaiRepoContentsH		Models		()		const;
		const	SdaiString&			Repo_name	()		const;
		const	SDAIAGGRH(SdaiSet,SdaiSchemaH)	Schemata	()		const;
			SdaiAccessMode			Mode		()		const;
		const	SdaiSessionH			Session		()		const;
		const	SdaiBoolean &			TestModels	()		const;
		const	SdaiBoolean &  			TestRepo_name	()		const;
		const	SdaiBoolean &			TestSchemata	()		const;
		const	SdaiBoolean &			TestMode	()		const;

	// ****************************************************************************************
	// S D A I    O P E R A T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
public :
	// Fermeture d'un repository
	virtual		void	CloseRepo	()			= 0;

	// Destruction d'un modele
			void	DeleteModel	( SdaiModelH& );
			
        /* determine si l'instance est d'un type appele typeName ou de l'un de ses sous-types */
	virtual const SdaiBoolean &   IsKindOf( const SdaiString& iTypeName )  const;


	// ****************************************************************************************
	// D S    O P E R A T I O N    D E C L A R A T I O N S
	// ****************************************************************************************
protected :
	// Verification commit possible
	virtual		int	Verify	() ;

	// Confirmation du commit
	virtual		void	Confirm	() ;
			
        // Invalidation du commit
	virtual 	void    UnConfirm () ;

        // Abort du repositoty
	virtual 	void    Abort () ;

        // Fin des traitements pour un EndTransaction
	virtual 	void    EndEndTransaction () ;

        // Ouverture de la transaction sur le repositoty
	virtual 	int     StartTransaction () ;

public :	
	// ****************************************************************************************
	// I M P L E M E N T A T I O N
	// ****************************************************************************************
public :
        inline CATSdaiRepo * Repo() const { return _Repo; }
protected:
	// Pointeur sur implementation  
	CATSdaiRepo * _Repo ;


};


#endif	/* _SDAI_REPO_H_ */





