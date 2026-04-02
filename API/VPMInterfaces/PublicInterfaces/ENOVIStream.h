#ifndef ENOVIStream_H
#define ENOVIStream_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


/**
 * Interface to carry extra information in event model, under a Backbone format.
 * <b>Role</b>: an ENOVIEvent carries some basic information about the raised event between Publisher and subscribers. 
 *  to associate extra information, the ENOVIStream is used .
 * @see ENOVIEvent
 */


//------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 1999
//------------------------------------------------------------------------------
// Interface  : ENOVIStream
// Author     : RCB
// Date       : July/08/1999
//------------------------------------------------------------------------------
// Stream format:
//    !================
//    !  Header code string
//    !
//    !  Cookie    Session
//    !  char      Type
//    !  char      Name
//    !  char      Format
//    !  char      Version
//    !  CORBAAny  UUID Context ( zone can be optional ) length >= 120
//    !  CORBAAny  OID  Context ( zone can be optional ) length = 16 
//    !
//    !================
//
//------------------------------------------------------------------------------
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "sequence_CORBAAny.h"
//
// UUID definition
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIStream;
#else
extern "C" const IID IID_ENOVIStream;
#endif


class ExportedByGUIDVPMInterfaces ENOVIStream : public CATBaseUnknown
   {
   CATDeclareInterface ;
   //
   public :

    /**
     * Gives the Cookie identifying the session this stream comes from.
	 * @param oCookie
	 * the session identifier
     */  
   virtual HRESULT GetCookieSession(CATUnicodeString& oCookie)=0;

	 /**
	  *  Gives the type of stream 
	  *  @param oType 
	  *   the type of stream :<br>
	  *   . ClientData : filled by the subscribers <br>
	  *   . EventData  : filled by the publisher<br>
	  */
   virtual HRESULT GetType (CATUnicodeString& oType)=0;

	 /**
     *  Gives the name of the stream
	 * @param oName
	 *  Name of Stream
     */
   virtual HRESULT GetName (CATUnicodeString& oName )=0;

    /**
     * @nodoc
     */  
   virtual HRESULT GetFormat(CATUnicodeString& oFormat) =0 ;

    /**
     * @nodoc
     */  
   virtual HRESULT GetVersion(CATUnicodeString& oVersion)= 0;

    /**
     * @nodoc
     */  
   virtual HRESULT GetUUIDContext (CORBAAny& oUUID ) = 0;

    /**
     * @nodoc
     */  
   virtual HRESULT SetUUIDContext (const CORBAAny& iUUID ) = 0;

    /**
     * @nodoc
     */  
   virtual HRESULT GetIdentifierContext (CORBAAny& oOID ) = 0;

    /**
     * @nodoc
     */  
   virtual HRESULT SetIdentifierContext (const CORBAAny& iOID ) = 0;

    /**
     * @nodoc
     */  
   virtual HRESULT GetTypeContext (CATUnicodeString& oType ) = 0;

    /**
     * @nodoc
     */  
   virtual HRESULT SetTypeContext (const CATUnicodeString& iType ) = 0;

   /**
     *  Gets the Event Data stored in the stream 
	 * <br><b>Role:</b> first get the list of arguments name, then ask for each argument the type and value.
     * @param oAssociatedArgs
	 *    the list of arguments name.
     */
   virtual HRESULT GetArguments
          (CATListOfCATUnicodeString & oAssociatedArgs) = 0;


   /**
     *  For a given Argument name returns the type and the value of the argument.
     * @param iArgument
	 *       the argument name
     * @param oArgValue
	 *  the value of argument
     * @param oArgType
	 *  type of argument
     */
   virtual HRESULT GetArgumentValue
          (const CATUnicodeString & iArgument,
           CORBAAny               & oArgValue,
           CATUnicodeString       & oArgType) =0 ;
   
    /**
     * 
     *  Adds an argument value in the opened stream.
	 *  This argument must have been declared in the 
	 *  Datastream definition in the XML event file.
     * @param iArgument
	 *       the argument name
     * @param oArgValue
	 *       the value of argument
     */  
   virtual  HRESULT AddArgumentValue 
                   (const CATUnicodeString & iArgument,
                    const CORBAAny         & iArgValue) = 0;

   };
    /**
     * @nodoc
     */  
   CATDeclareHandler(ENOVIStream, CATBaseUnknown);

#endif // ENOVIStream


