#ifndef CATIPrdObjectPublisher_H
#define CATIPrdObjectPublisher_H
// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "AS0STARTUP.h"
#include "CATBaseUnknown.h"

class CATUnicodeString;
class CATISpecObject;
class CATListValCATUnicodeString;
class CATListValCATBaseUnknown_var;

extern ExportedByAS0STARTUP IID IID_CATIPrdObjectPublisher ;

//------------------------------------------------------------------

/**	
* Interface to create and manage publications on a Product.
*/

class ExportedByAS0STARTUP CATIPrdObjectPublisher: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	  /** Creates a new publication.
	    * @param iName
		*        The name of the new publication.
		* @param iObject
		*        The object being published. If none, the publication is not valuated.
		* @return
		*        1: The publication is OK.<br>
		*        0: The publication already exists.
	    */
	  virtual int  Publish   (  const CATUnicodeString& iName 
		                      , const CATBaseUnknown*   iObject = NULL ) = 0;

	  /** Deletes an existing publication.
	    * @param iName
		*        The name of the publication to be deleted.
		* @return
		*        1: The publication is deleted.<br>
		*        0: The publication name is not found.
	    */
	  virtual int  Unpublish ( const CATUnicodeString& iName ) = 0;

      /** Retrieves the final publication object.
	    * @param iName
		*        The name of the publication referring to the final object
		*        that is to be retrieved.
		* @return
		*        If NULL: The publication is not valuated.<br>
		*        Otherwise: The final publication object.
		*/ 
	  virtual CATBaseUnknown*  GetFinalObject(  const CATUnicodeString& iName ) = 0;

	  /** Retrieves the direct publication object.
	    * @param iName
		*        The name of the publication referring to the direct object
		*        that is to be retrieved.
        * @param oObjectOrSubPublisher
		*        If Return = 1, this is the direct publication object. Otherwise, if
		*        Return = 2, this is the sub-publisher, a pointer to another publication.
		* @param oSubPublicationName
		*        If Return = 2, this is the name of the publication pointed to by the
		*        sub-publisher.
		* @return
		*        0: The publication is not valuated.<br>
		*        1: The direct publication object is returned.<br>
		*        2: The direct publication object is a pointer to another publication. 
		*/   
	  virtual int GetDirectObject (  const CATUnicodeString& iName
		                           , CATBaseUnknown   *&  oObjectOrSubPublisher
								   , CATUnicodeString  &  oSubPublicationName) = 0;

	  /** Valuates a publication directly with the object being published.
	    * @param iName
		*        The name of the publication to be valuated.
        * @param iObject
		*        The publication object.
		* @return
		*        0: The publication name is not found.<br>
		*        1: The publication is valuated OK.
		*/ 
	  virtual int  Valuate (  const CATUnicodeString& iName
		                    , const CATBaseUnknown * iObject) = 0;

	  /** Valuates a publication with another publication object.
	    * @param iName
		*        The name of the publication to be valuated.
        * @param iSubPublisher
		*        The publication object referencing the object being published.
		* @param iSubName
		*        The name of the referencing publication.
		* @return
		*        0: The publication name is not found.<br>
		*        1: The publication is valuated OK.
		*/ 
	  virtual int  Valuate (  const CATUnicodeString      & iName
		                    , const CATIPrdObjectPublisher* iSubPublisher
							, const CATUnicodeString      & iSubName ) = 0;

      /** Deletes a publication's valuation.
	    * @param iName
		*        The name of the publication whose valuation is to be deleted.
        */ 
	  virtual int  Unvaluate ( const CATUnicodeString& iName ) = 0;

	  /** Retrieves the list of an object's publications.
	    * @param iObject
		*        The object whose publications are to be retrieved.
        * @param oListOfNames
		*        The list of publications for the given object.
		* @return
		*        0: The object is not published.<br>
		*        1: The object is published and a list of names has been retrieved.
		*/ 
	  virtual int  IsPublished(  const CATBaseUnknown* iObject
		                       , CATListValCATUnicodeString*& oListOfNames ) = 0;

      /** Retrieves the list of an object's publications.
	    * @param iSubPublisher
		*        The sub-publication object referencing the object whose publications
		*        are to be retrieved.
		* @param iName
		*        The name of the publication of the sub-publication object referencing
		*        the object whose publications are to be retrieved.
        * @param oListOfNames
		*        The list of publications for the referenced object.
		* @return
		*        0: The object is not published.<br>
		*        1: The object is published and a list of names has been retrieved.
		*/ 
	  virtual int  IsPublished(  const CATIPrdObjectPublisher* iSubPublisher
		                       , const CATUnicodeString& iName
		                       , CATListValCATUnicodeString*& oListOfNames ) = 0;

	  /** Retrieves the list of the publication objects referencing a given publication object.
	    * @param iObject
		*        The object whose referencing publications (sub-publications) are to be retrieved.
        * @param oSubPublishers
		*        The list of sub-publishers of the given publication object.
		* @param oSubPublicationNames
		*        The list of the sub-publication names.
		* @return
		*        0: The object is not published.<br>
		*        1: The object is published and a list of names has been retrieved.
		*/ 
      virtual int  IsFinallyPublished ( const CATBaseUnknown* iObject
                                       ,CATListValCATBaseUnknown_var *& oSubPublishers
                                       ,CATListValCATUnicodeString   *& oSubPublicationNames ) = 0;
      
	  /** Retrieves the list of the publication objects referencing a given publication object.
	    * @param iSubPublisher
		*        The sub-publisher whose publications are to be retrieved.
        * @param iName
		*        The name of the sub-publication.  
        * @param oSubPublishers
		*        The list of sub-publishers of the given publication object.
		* @param oSubPublicationNames
		*        The list of the sub-publication names.
		* @return
		*        0: The object is not published.<br>
		*        1: The object is published and a list of names has been retrieved.
		*/ 
	  virtual int  IsFinallyPublished ( CATIPrdObjectPublisher* iSubPublisher
                                       ,const CATUnicodeString&       iName
                                       ,CATListValCATBaseUnknown_var *& oSubPublishers
                                       ,CATListValCATUnicodeString   *& oSubPublicationNames ) = 0;
	  
      /** Retrieves the list of the publications of the current product.
	    * @param oListOfPublications
		*        The list of publication names of the current product.
        * @return
		*        =0: No publications found.<br>
		*        >1: The number of publications found.
		*/ 
	  virtual int  ListPublications ( CATListValCATUnicodeString*& oListOfPublications ) = 0;

	  /** @nodoc
	    * Retrieves the object publication in the container of publications
		* to make a CATIPrdPublication index give its rank.
	    */
	  virtual void  FindPublication (const CATUnicodeString& iName
					,CATISpecObject*& oResult
					,int& oIndex  ) = 0;

      /** @nodoc */
	  virtual void  MakeInverseLink (CATISpecObject* iPointing
									 ,const CATUnicodeString& iPubName,int depth) = 0;

      /** @nodoc */
      virtual void  RemoveInverseLink (CATISpecObject* iPointing
									   ,const CATUnicodeString& iPubName) = 0;
	  /** @nodoc 
	    * @return
		*      1: Publication OK
		*      0: Publication already exists
	    */
	  virtual int  Rename   (  CATUnicodeString& OldName 
		                     , CATUnicodeString& NewName) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIPrdObjectPublisher, CATBaseUnknown );

#endif
