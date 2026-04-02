/* -*-c++-*- */
#ifndef CAT_SESSION_H
#define CAT_SESSION_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#include "CATDocumentsInSession.h"
#include "CATDocument.h"
#include "CATListOfInt.h"
#include "CATBaseUnknown.h"
#include "booleanDef.h"
#include "AC0XXLNK.h"
#include "sequence_octet.h"
#include "CATLISTP_CATSession.h"

class CATIDocId;
class CATOmbSessionContext;

/**
 * Interface used only to allow the usage of a CATSession object. 
 */
 
class ExportedByAC0XXLNK CATSession : public CATBaseUnknown
{ 

  CATDeclareClass ;
  
  public:
    /** @nodoc */
	static  CATSession* Create_Session( char* IdSession ) ;
    /** @nodoc */
    static  void Delete_Session( char* IdSession, int ODTRollMode = 0, int exitContext = 0 ) ;
    /** @nodoc */
    static  CATSession* GetPtrSession() ;
 
    /** @nodoc */
   CATDocument* GetStarterDocument ();


    /** @nodoc */
    virtual void Attach_DocumentToSession(CATDocument* );
    /** @nodoc */
    virtual void Delete_DocumentFromSession(CATDocument*);

    // Do Not Use
    /** @nodoc */
    virtual void Attach_Object(CATBaseUnknown*);
    // Do Not Use
    /** @nodoc */
    virtual void Detach_Object(CATBaseUnknown*);
    
    /** @nodoc */
    virtual char* Get_Id_Session() ;
    
    /** @nodoc */
    virtual void   Dump_Session  ( const char* IdSession ) ;
    
    // Do Not Use
    /** @nodoc */
    virtual const CATLISTP(CATBaseUnknown)* AttachedObject();
    
    /** @nodoc */
    virtual const CATLISTP(CATDocument)* SessionToDocuments();

    /** @nodoc */
    virtual void ManageGarbage () ;

    
  // WARNING 
  // =======
  // The 2 followings methods are reserved for File Management
  // during Open Session. DO NOT USE THEM in other Context...
  //

    /** @nodoc */
    virtual CATDocument* RecognizedDoc() const;
    /** @nodoc */
    virtual void  RecognizedDoc(CATDocument *);
	
    /** @nodoc */
	virtual const CATDocumentsInSession* SessionToDocuments2();

  //-------------------------------
  // roll environnement management
  //-------------------------------
    /** @nodoc */
    int CreateEnvRoll () ;
    /** @nodoc */
    int DeleteEnvRoll () ;
    /** @nodoc */
    int GetRollTime () ;
    
  //-------------------------
  // Load and Save Diagnosis
  // ------------------------
    /** @nodoc */
    boolean DataTransferAborted;
    /** @nodoc */
    HRESULT AddBrokenLink(CATIDocId *iDocId);
    /** @nodoc */
    CATLISTV(CATUnicodeString)* LinksResolutionFailed;
  
  
  //----------------------------------------
  // Pointed document Services 
  //----------------------------
    /** @nodoc */
  CATLISTP(CATDocument)* GetListOfPointedDocument (CATDocument* PointingDocument);



//
//    virtual void   Backup_Session() ;
//    virtual void   Save_Session  () ;
//    virtual void   Write_Session () ;
//    

  //-------------------------------------------------------------
  // Make a document reachable by a container or any other object
  //-------------------------------------------------------------
    /** @nodoc */
    static CATDocument* GetCurrentDoc();
    /** @nodoc */
    static void SetCurrentDoc(CATDocument*);


  //-------------------------------------------------------------
  // Multi Session Management
  //-------------------------------------------------------------
    /** @nodoc */
  static HRESULT SetCurrentSession(char* IdSession);
    /** @nodoc */
  static CATSession* Find( char* Id);

    /** @nodoc */
  HRESULT GetSymbolicLinkSymbolList(CATListPV*& List);
    /** @nodoc */
  HRESULT GetSymbolicLinkAdapterList(CATListPV*& List);
    /** @nodoc */
  HRESULT SetSymbolicLinkSymbolList(CATListPV* List);
    /** @nodoc */
  HRESULT SetSymbolicLinkAdapterList(CATListPV* List);

  //-------------------------------------------------------------
  // Session context object 
  //-------------------------------------------------------------
    /** @nodoc */
  CATOmbSessionContext* GetContext() const;

  private:

   ~CATSession() ;  
    CATSession( char* id ) ;
    
    char* IdSession    ; // identificateur de la Session
    
    enum Type_wf { V4, SDAI, OTHERS } ; // type de la session supportable
    static CATSession* PtrSession ; // pointeur de l'objet session
    CATLISTP(CATDocument) DocumentsInSession;// tableau des documents de la session
	CATDocumentsInSession HDocumentsInSession;// tableau des documents de la session
    CATLISTP(CATBaseUnknown) ObjectInSession;
    CATDocument* _recognizedDoc;
    //CATListOfInt TypesDocument ; // tableau des tyeps de documents  
    CATDocument* _StarterDocument;
    static CATDocument* _currentDoc;

	CATOmbSessionContext *m_pContextObject; // Associated session context object 


	//-------------------------------------------------------------
   // Multi Session Management
   //-------------------------------------------------------------
	static CATLISTP(CATSession)* _ExistingSession;
	CATListPV*   _SymbolicLink_symbol_list;
    CATListPV*   _SymbolicLink_adapt_list;
} ;   
    

#endif      

