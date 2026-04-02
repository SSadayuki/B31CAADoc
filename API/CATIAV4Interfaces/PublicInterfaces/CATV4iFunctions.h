/*-*-c++-*-*/
// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */
#ifndef  CATV4iFunctions_h
#define  CATV4iFunctions_h

#include <ExportedByCATV4iInterface.h>
#include  "CATUnicodeString.h"
#include "CATLISTP_CATV4iV4Attributes.h"

class CATV4iV4Element;
class CATDocument;
/**
 * Declare an application string.
 * @param  iApplString [in]
 *   The application string
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface  int CATV4iGmappl (const char* iApplString, int &ier) ;



/**
 * Retrieves the length of a description associated to an element.
 * @param iElement [in]
 *   The V4 element
 * @param iTypes [in]
 *   The description type
 * @param oExist [out]
 *   The description exist (=1) or not (=0)
 * @param oNumI4 [out]
 *   The number of I*4 values
 * @param oNumR4 [out]
 *   The number of R*4 values
 * @param oNumR8 [out]
 *   The number of R*8 values
 * @param oNumC8 [out]
 *   The number of C*8 values
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGmdrdl (const CATV4iV4Element* iElement, const int &iTyDes,
                                            int &oExist, int &oNumI4, int &oNumR4, int &oNumR8, 
                                            int &oNumC8,int &ier);


/**
 * Retrieves the number of values and their types of descriptions associated to an 
 * element, and related to the current application.
 * @param iElement [in]
 *   The V4 element
 * @param oNbrDes [out]
 *   The number of descriptions associated to the element
 * @param oTypeDes [out]
 *   The types of the descriptions. Array of oNbrDes elements
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGmdrds(const CATV4iV4Element* iElement, int &oNbrDes,
                                           int* oTypeDes, int &ier);


/**
 * Retrieves the values of descriptions related to an element.
 * @param iElement [in]
 *   The V4 element
 * @param iType [in]
 *   UDBV1 description type
 * @param oExist [out]
 *   The description existence
 *   <br><b>Legal values:</b> 1 if the description exists ; 0 if not
 * @param oNumI4 [out]
 *   The number of I*4 values
 * @param oI4 [out]
 *   The array of oNumI4 I*4 values
 * @param oNumR4 [out]
 *   The number of R*4 values
 * @param oR4 [out]
 *   The array of oNumR4 R*4 values
 * @param oNumR8 [out]
 *   The number of R*8 values
 * @param oR8 [out]
 *   The array of oNumR8 R*8 values
 * @param oNumC8 [out]
 *   The number of C*8 values
 * @param oC8 [out]
 *   The array of oNumC8 C*8 values
 * @param ier [out]
 *   error code 
 */
ExportedByCATV4iInterface int CATV4iGmdrdv(const CATV4iV4Element* iElement, const int &iType, int &oExist,
                                           int &oNumI4, int* oI4, int &oNumR4, float* oR4,
                                           int &oNumR8, double* oR8, int &oNumC8, char* oC8, int &ier);

/**
 * Retrieves the number of descriptions associated to an element.
 * @param iElement [in]
 *   The V4 element
 * @param oNbrDes [out]
 *   The number of descriptions
 * @param ier [out]
 *   error code 
 */
ExportedByCATV4iInterface int CATV4iGmdrnd(const CATV4iV4Element* iElement, int &oNbrDes, int &ier);



/**
 * Retrieves the set of an application element.
 * @param iApplElement [in]
 *   The V4 application element
 * @param oApplSet [out]
 *   The application set containing iApplElement
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGmares(const CATV4iV4Element* iApplElement, CATV4iV4Element* &oApplSet, int &ier );


/**
 * Retrieves the element linked to an application element.
 * @param iApplElement [in]
 *   The V4 application element
 * @param iNumEle [in]
 *   The number of the element linked to the application element
 * @param oLinkedElement [out]
 *   The element linked to iApplElement and corresponding to iNumEle
 * @param oLinkType [out]
 *   type of the link
 *   <br><b>Legal values:</b>
 *   <ul><li> 1, 3, 5, 7, 9, 11 : weak link </li>
 *       <li> 2, 4, 6, 8, 10, 12: strong link </li>
 *       <li> 1 : "no erase" link </li>
 *       <li> 2 : "no modif" link </li>
 *       <li> 0 : all others link </li></ul>
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGmarln(const CATV4iV4Element* iApplElement, const int &iNumEle,
                                           CATV4iV4Element* &oLinkedElement, int &oLinkType, int &ier);


/**
 * Scans the application elements of a given type and in a given application set.
 * @param iApplSet [in]
 *   The V4 application set
 * @param iType [in]
 *   The type of the application elements. 0 to search for all the type
 * @param iPrevApplElement [in]
 *   The previous application element.
 *   <br><b>Legal values:</b> NULL to get the first application element
 * @param iStep [in]
 *   The Number of times the search for application elements is to be iterated.
 *   <br><b>Legal values:</b>
 *   <ul><li> >0: scans in the order of the set ;</li> 
 *       <li> <0: scans in the inverse order of the set </li></ul>
 * @param oNextApplElement [out]
 *   The following application element of the desired type after iStep iteration
 * @param oEnd [out]
 *   The end of the scan.
 *   <br><b>Legal values:</b> value is 1 if iPrevApplElement is the last element
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGmasel(const CATV4iV4Element* iApplSet, const int &iType, 
                                           const CATV4iV4Element* iPrevApplElement, const int &iStep, 
                                           CATV4iV4Element* &oNextApplElement, int &oEnd, int &ier);

/**
 * Scans the application elements to which an element is linked.
 * @param iElement [in]
 *   The V4 element
 * @param iContainer [in]
 *   The container to scan
 *   <br><b>Legal values:</b> It could be an application set, a workspace or
 *   the current workspace
 * @param iPrevElement [in]
 *   The previous application element pointing iElement
 *   <br><b>Legal values:</b> NULL to start the scan
 * @param oNextElement [out]
 *   The next application element to which iElement is linked
 * @param oEnd [out]
 *   The end of the scan.
 *   <br><b>Legal values:</b> value is 1 if iPrevElement is the last element
 * @param ier [out]
 *   error code                                   
 */ 

ExportedByCATV4iInterface int CATV4iGmasln(const CATV4iV4Element* iElement, const CATV4iV4Element* iContainer,
                                           const CATV4iV4Element* iPrevElement, CATV4iV4Element* &oNextElement,
                                           int &oEnd, int &ier);


/**
 * Scans the application sets of a given type in a workspace.
 * @param iSetType [in]
 *   The type of the application set
 * @param iPrevSet [in]
 *   The previous application set
 *   <br><b>Legal values:</b> NULL to start the scan
 * @param oNextSet [out]
 *   The next application element of thr desired type
 * @param oEnd [out]
 *   end of scan.
 *   <br><b>Legal values:</b> 1 if iPrevSet is the last set
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGmasst(const int &iSetType, const CATV4iV4Element* iPrevSet, 
                                           CATV4iV4Element* &oNextSet, int &oEnd, int &ier);


/**
 * Retrieves the types of an element.
 * @param iElement [in]
 *   The V4 element
 * @param oTypeP [out]
 *   The primary type
 * @param oTypeS [out]
 *   The secondary type
 * @param oTemp [out]
 *   The temporality of the element
 *   <br><b>Legal values:</b>
 *   <ul><li>1 : the element is temporary</li>
 *       <li>0 : the element is permanent</li></ul>
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGirtps(const CATV4iV4Element* iElement, int &oTypeP,
                                           int &oTypeS, int &oTemp, int &ier);


/**
 * Retrieves a space text linked to an element.                                                                           
 * @param iElement [in]
 *   The V4 space element
 * @param iNumText [in]
 *   The number of the text to be read
 * @param oNbc [out]
 *   number of used characters.
 *   <br><b>Legal values:</b> 0 if the text is the element's identifier
 * @param oTxt [out]
 *   The text                                          
 * @param oPt [out]
 *   The coordinates of the text's positioning point
 * @param oSize [out]
 *   The text size
 *   <br><b>Legal values:</b> between 1 and 4
 * @param oDir [out]
 *   text direction 
 *   <br><b>Legal values:</b>
 *   <ul><li>0: horizontal</li>
 *       <li>1: vertical</li></ul>
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGirtex(const CATV4iV4Element* iElement, const int &iNumText,
                                           int &oNbc, char oTxt[80], double oPt[3], int &oSize, int &oDir,
                                           int &ier);


/**
 * Retrieves the text characteristics associated with a space element with advanced parameters.
 * @param iElement [in]
 *   The V4 space element
 * @param iNumtex [in]
 *   The number of the text to be read  
 * @param oNbc [out]
 *   The number of used characters 
 * @param oTxt [out]
 *   The text                                          
 * @param oPt [out]
 *   The coordonates of the text positioning point
 * @param oBase [out]
 *   The base vector for text display
 * @param oUp [out]
 *   The up vector for text display
 * @param oFont [out]
 *   The name of the font
 * @param oCol [out]
 *   The color number of the text
 *   <br><b>Legal values:</b> between 1 and 127
 * @param oAngle [out]
 *   The angle of the text with respect to the display horizontal
 * @param oThick [out]
 *   The text thickness
 *   <br><b>Legal values:</b> between 1 and 127
 * @param oSize [out]
 *   The text size 
 *   <br><b>Legal values:</b> between 1 and 127
 * @param oCenter [out]
 *   The centering of the text with respect to the positioning point
 *   <br><b>Legal values:</b>
 *   <ul><li>0: standard positioning point</li>
 *       <li>1: centered text</li></ul>
 * @param oFixed [out]
 *   The text is fixed with respect to the display plane
 *   <br><b>Legal values:</b> 1: the text is fixed
 * @param oItalic [out]
 *   The text is in italic
 *   <br><b>Legal values:</b> 1: the text is in italic
 * @param oShow [out]
 *   The text displayability
 *   <br><b>Legal values:</b> 1: the text is displayable
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGirtxt(const CATV4iV4Element* iElement, const int &iNumtex,
                                           int &oNbc, char oTxt[80], double oPt[3], double oBase[3], double oUp[3],
                                           char oFont[9], int &oCol, int &oAngle, int &oThick, int &oSize,
                                           int &oCenter, int &oFixed, int &oItalic, int &oShow, int &ier);


/**
 * Retrieves the value of the layer of an element.
 * @param iElement [in]
 *   The V4 element
 * @param oLayer [out]
 *   The number of the layer
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGirlay(const CATV4iV4Element* iElement, int &oLayer, int &ier);
 

/**
 * Retrieves the graphic attributes of an element.
 * @param iElement [in]
 *   The V4 element
 * @param oShow [out]
 *   The element is shown or not shown
 *   <br><b>Legal values:</b>
 *   <ul><li>1: SHOW</li>
 *       <li>0: NO SHOW</li></ul>
 * @param oPick [out]
 *   The element is pickable or not
 *   <br><b>Legal values:</b>
 *   <ul><li>1: PICK</li>
 *       <li>0: NO PICK</li></ul>
 * @param oCol [out]
 *   The color number
 *   <br><b>Legal values:</b> between 1 to 127. 0: transparent element
 * @param oBlink [out]
 *   The element blink or is steady
 *   <br><b>Legal values:</b>
 *   <ul><li>1: BLINK</li>
 *       <li>0: STEADY</li></ul>
 * @param oThick [out]
 *   The thickness number
 *   <br><b>Legal values:</b> between 1 to 6. 0 if not applicable
 * @param oLine [out]
 *   point or line type
 *   <br><b>Legal values:</b> between 1 to 32.
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGirvis(const CATV4iV4Element* iElement, int &oShow, int &oPick,
                                           int &oCol, int &oBlink, int &oThick, int &oLine, int &ier);


/**
 * Retrieves the logical information of an element.
 * @param iElement [in]
 *   The V4 element
 * @param oPerm [out]
 *   state of the element
 *   <br><b>Legal values:</b> 1 if the element is permanent, 0 if not
 * @param oNum  [out]
 *   Number of the passive overlay model to which it belongs (0 for active model)
 * @param oWsp [out]
 *   The element belongs to the current workspace.
 *   <br><b>Legal values:</b> 1 for current workspace, 0 in the other case
 * @param oSet [out]
 *   The element belongs to the current geometric set.
 *   <br><b>Legal values:</b> 1 for current set, 0 in the other case
 * @param oPlan [out]
 *   The element belongs to the current background plane.
 *   <br><b>Legal values:</b> 1 for current background plane, 0 in the other case
 * @param ier [out]
 *   error code                                   
 */
ExportedByCATV4iInterface int CATV4iGirele(const CATV4iV4Element* iElement, int &oPerm, int &oNum,
                                           int &oWsp, int &oSet, int &oPlan, int &ier);


/**
 * Retrieves the number of links of an application element.
 * @param iApplElement [in]
 *   The V4 application element
 * @param oNbRel [out]
 *   The number of links
 * @param ier [out]
 *   error code 
 */
ExportedByCATV4iInterface int CATV4iGmarel(const CATV4iV4Element* iApplElement, int &oNbRel,int &ier);


/**
 * Scans the ultra-weak links referencing an entity.
 * @param iElement [in]
 *   The V4 element supporting the link(s)
 * @param iIdPrevious [in]
 *   The identifier of the previous link
 *   <br><b>Legal values:</b> 0 to start the scan
 * @param oIdLink [out]
 *   The identifier of the link following iIdPrevious
 * @param oEnd [out]
 *   The validity of oIdLink :
 *   <br><b>Legal values:</b>
 *   <ul><li>1 if iIdPrevious is the last link</li>
 *       <li>0 if oIdLink is the link following iIdPrevious</li></ul>
 * @param ier [out]
 *   error code 
 */
ExportedByCATV4iInterface int CATV4iGmlesc(const CATV4iV4Element* iElement, const int &iIdPrevious,
                                           int &oIdLink, int &oEnd, int &ier);


/**
 * Analyzes an ultra-weak link.
 * @param iElement [in]
 *   The V4 element supporting the link(s)
 * @param iIdLink [in]
 *   The identifier of the link
 * @param oUserInfo [out]
 *   Data associated to the link
 * @param oRefElement [out]
 *   The referenced element
 * @param oUpdated [out]
 *   The synchronization between the link and the referenced element
 *   <br><b>Legal values:</b>
 *   <ul><li>0 if it is synchronized</li>
 *       <li>1 if the referenced element has been modified after the last
 *           update of the link</li></ul>
 * @param ier [out]
 *   error code 
 */
ExportedByCATV4iInterface int CATV4iGmlanl (const CATV4iV4Element* iElement, const int &iIdLink,
                                            int &oUserInfo, CATV4iV4Element* &oRefElement, 
                                            int &oUpdated, int &ier);

/**
 * Analyzes a space ditto.
 * @param iDitto [in]
 *   The ditto
 * @param oDetail [out]
 *   The detail corresponding to the given iDitto
 * @param oTrans [out]
 *   The matrix of the transformation (isometric transformation + scalling)
 *   <br>X1 being the coordinates of a point of the detail, in the 3-axis system 
 *    of this detail ; 
 *   <br>X2 being the coordinates of the same point, relative to the 3-axis
 *    system of the current workspace, after the ditto has been positioned.
 *   <br>then X2=oTrans*X1
 * @param ier [out]
 *   error code 
 */
ExportedByCATV4iInterface int CATV4iGirwdi (const CATV4iV4Element* iDitto, CATV4iV4Element* &oDetail, 
                                            double oTrans[12], int &ier );

/**
 * Scans the elements of a given set of the current workspace.
 * @param iSet [in]
 *   The set to scan
 * @param iPrevElement [in]
 *   The previous  element
 *   <br><b>Legal values:</b> NULL to get the first element of the set
 * @param oNextElement [out]
 *   The following element.
 * @param oEnd [out]
 *   The end of the scan.
 *   <br><b>Legal values:</b> value is 1 if iPrevElement is the last element
 * @param ier
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGisels (const CATV4iV4Element* iSet, const CATV4iV4Element* iPrevElement,
                                            CATV4iV4Element* &oNextElement, int &oEnd, int &ier );


/**
 * Scans the set of a workspace.
 * @param iPrevSet [in]
 *   The previous set
 *   <br><b>Legal values:</b>
 *   <ul><li>the workspace we want to analyse. oNextSet is the first set of this workspace</li>
 *       <li>the previous set</li></ul>
 * @param oNextSet [out]
 *   The following set.
 * @param oEnd [out]
 *   The end of the scan.
 *   <br><b>Legal values:</b> value is 1 if iPrevSet is the last element
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGisset (const CATV4iV4Element* iPrevSet, CATV4iV4Element* &oNextSet, 
                                            int &oEnd, int &ier );


/**
 * Scans the set of a workspace.
 * @param iPrevWsp [in]
 *   The previous worspace
 * @param oNextWsp [out]
 *   The following worspace.
 * @param oType
 *   The type of workspace
 *   <br><b>Legal values:</b>
 *   <ul><li>1: MASTER</li>
 *       <li>2: DRAW detail</li>
 *       <li>3: SPACE detail</li>
 *       <li>4: SACE detail without any DRAW elements</li></ul>
 * @param oEnd [out]
 *   The end of the scan.
 *   <br><b>Legal values:</b> value is 1 if iPrevWsp is the last element
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGiswsp (const CATV4iV4Element* iPrevWsp, CATV4iV4Element* &oNextWsp,
                                            int &oType, int &oEnd, int &ier );



/**
 * Retrieves the first workspace of the document.
 * @param iDoc [in]
 *   The document to analyse. It must be a .model document.
 * @param oFirstWsp [out]
 *   The first workspace of the .model. This is the *MASTER workspace.
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGetMaster(CATDocument* iDoc, CATV4iV4Element* &oFirstWsp, int &ier);


/**
 * Retrieves the identificator of the element.
 * @param iElement [in]
 *   The element
 * @param oLength [out]
 *   The length of the identificator
 * @param oIdent [out]
 *   The identificator
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGiride (const CATV4iV4Element* iElement, int &oLength, 
                                            char oIdent[72], int &ier );


/**
 * Retrieves the display state of the element with reference to the layers filters.
 * @param iElement [in]
 *   The element
 * @param oVisu [out]
 *   The display state
 *   <br><b>Legal values:</b>
 *   <ul><li>1 : the element is temporary</li>
 *       <li>0 : the element is permanent</li></ul>
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGirevi (const CATV4iV4Element* iElement, int & oVisu, int &ier );


/**
 * Retrieves the mathematic description of an element.
 * @param iElement [in]
 *   The element
 * @param oBlockLength
 *   The length of mathematic block [out]
 * @param oMathBlock
 *   The math block [out]<br>
 *   This array has been allocated in the function. It must be deleted outside the function.
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGirmat(const CATV4iV4Element* iElement, int &oBlockLength, 
                                           double* &oMathBlock, int &ier );

/**
 * Retrieves the length of the mathematic description.
 * @param iElement [in]
 *   The element
 * @param oBlockLength
 *   The length of mathematic block [out]
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iGiresi(const CATV4iV4Element* iElement, int &oBlockLength, int &ier );

/**
* Retrieves the comment of a Detail.
* @param iDetail [in]
*   The V4 Detail element
* @param oFound [out]
*   The comment is found
<br><b>Legal values:</b> 0 if no comment ; 1 if the comment is found
* @param oComment [out]
*   The comment of the detail    
* @param ier [out]
*   error code                                   
*/
ExportedByCATV4iInterface int CATV4iGircom(const CATV4iV4Element* iDetail, int &oFound, char oComment[48], int &ier);

/**
* Retrieves the element called iIdent in the document.
* @param iDoc [in]
*   The document to analyse. It must be a .model
* @param iType [in]
*   The catgeo type of the element to search. If =0, search in all the geometrical element.
* @param iCarNbr [in]
*   The length of the string iIdent
* @param iIdent [in]
*   The identifier of the searched element 
* @param oElement [out]
*   The searched element
* @param ier [out]
*   error code
*/
ExportedByCATV4iInterface int CATV4iGirad1(CATDocument* iDoc, const int iType, const int iCarNbr, char iIdent[72],
                                           CATV4iV4Element* &oElement, int &ier);

/**
 * Retrieves an element given its jele and the document.
 * @param iDoc [in]
 *   The document
 * @param iJele [in]
 *   The jele to search 
 * @return
 *   The searched element
 */
ExportedByCATV4iInterface CATV4iV4Element* CATV4iGetV4ElementFromJele( CATDocument* iDoc, const int iJele );

/**
 * Retrieves in the model the connected element of a geometrical element.
 * @param iElement [in]
 *   The element: Surface/Plane, face, edge
 * @param iJADP [in]
 *   The element linked to iElement 
 *   <br><b>Legal values:</b> NULL for the first one, else the previous element
 * @param oJADF [out]
 *   The next element connected to iElement 
 * @param oEnd [out]
 *   <br><b>Legal values:</b> 1 if iJADP is the last element, else 0
 * @param ier [out]
 *   error code:
 *   <br><b>Legal values:</b>
 *   <ul><li>27 : the iElement is not one of the correct types</li>
 *       <li>2061 : Error on the element</li></ul>
 */
ExportedByCATV4iInterface int CATV4iGislnk(const CATV4iV4Element* iElement, const CATV4iV4Element* iJADP, CATV4iV4Element* &oJADF, int &oEnd, int &ier) ;

/**
 * Retrieves the comment of the model.
 * @param iDoc [in]
 *   The model
 * @param oComment [out]
 *   The model comment 
 * @param ier [out]
 *   error code:
 *   <br><b>Legal values:</b>
 *   <ul><li>1 : no comment found</li>
 */
ExportedByCATV4iInterface int CATV4iGetModelComment(CATDocument* iDoc, CATUnicodeString &oComment, int &ier);

/**
 * Retrieves the attributes of an element.
 * @param iElement [in]
 *   The element
 * @param iPartial [in]
 *   <br><b>Legal values:</b>
 *   <ul><li>0 : All values are returned</li> 
 *   <ul><li>1 : The values: NULL, -NaN, -1.#QNAN, -nan0xffffffff, are filtered </li> 
 * @param ioAttList [in][out]
 *   The list of attributes. Attributes are added in this list. Each attribute must be deleted, after been used.
 * @param ier [out]
 *   error code:
 *   <br><b>Legal values:</b>
 *   <ul><li>1 : invalid element</li>
 */
ExportedByCATV4iInterface int CATV4iGetV4Attributes(const CATV4iV4Element* iElement, int &iPartial,CATLISTP(CATV4iV4Attribute) &ioAttList, int &ier);

/**
 * Check if the input workspace is internal or external(library).
 * @param iWsp [in]
 *   The input workspace
 * @param oIsExternalWsp
 *   The type of workspace
 *   <br><b>Legal values:</b>
 *   <ul><li>0: Internal workspace</li>
 *       <li>1: external workspace</li>
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface int CATV4iIsExternalWsp (const CATV4iV4Element* iWsp, int &oIsExternalWsp, int &ier );

/**
 * Scans the draft of a workspace.
 * @param iV4ModelDocument [in]
 *   The document to analyse. It must be a .model document.
 * @param iPreviousDraft [in]
 *   The previous draft, NULL to start the scan
 * @param oNextDraft [out]
 *   The following draft.
 * @param oMasterDraft
 *   The oNextDraft is a MasterDraft
 *   <br><b>Legal values:</b>
 *   <ul><li>TRUE: Master Draft</li>
 *       <li>FALSE: Detail 2D draft</li>
 * @return
     * S_OK   : Everything is OK.
	 * S_FALSE : Last draft in the model
     * E_FAIL : Error.
 */
ExportedByCATV4iInterface HRESULT CATV4iGetDraft(const CATDocument* iV4ModelDocument, const CATV4iV4Element* iPreviousDraft, CATV4iV4Element*& oNextDraft, CATBoolean& oMasterDraft);

/**
 * Scans the views of a draft.
 * @param iDraft [in]
 *   The draft to scan the views
 * @param iPreviousView [in]
 *   The previous view, NULL to start the scan
 * @param oNextView [out]
 *   The following view.
 * @return
     * S_OK   : Everything is OK.
	 * S_FALSE : Last view in the draft
     * E_FAIL : Error.
 */
ExportedByCATV4iInterface HRESULT CATV4iGetView(const CATV4iV4Element* iDraft, const CATV4iV4Element* iPreviousView, CATV4iV4Element*& oNextView);

/**
 * Scans the views of a draft.
 * @param iElement [in]
 *   The element to get its CATBaseUnknown
 * @param opBaseUnknown [out][Release]
 *   The associated CATBaseUnknown to iElement, need to release after usage.
 * @return
     * S_OK   : Everything is OK.
     * E_FAIL : Error.
 */
ExportedByCATV4iInterface HRESULT CATV4iGetBaseObject(const CATV4iV4Element* iElement, CATBaseUnknown *& opV4BaseUnknown);

/**
 * Retrieves the total number of composits in an element.
 * It replaces the V4 function GISECO()
 * @param iElement [in]
 *   The element
 * @param oCompoNum [out]
 *   Total number of composits in element
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface HRESULT CAT4iGetCompositsNumber(const CATV4iV4Element* iElement, int &oCompoNum, int &ier);


/**
 * Retrieves the mathematic description of the given composit in an element.
 * It replaces the V4 function GIRESI() and GIREMA()
 * @param iElement [in]
 *   The element
 * @param iCompoIndex [in]
 *   Index of composit in element, iCompoIndex=1 if the element mono-composit
 * @param oBlockLength [out]
 *   The length of mathematic block 
 * @param oMathBlock [out]
 *   The math block 
 *   This array has been allocated in the function. It must be deleted outside the function.
 * @param ier [out]
 *   error code
 */
ExportedByCATV4iInterface HRESULT CATV4iGirema(const CATV4iV4Element* iElement, const int &iCompoIndex, int &oBlockLength, 
                                           double* &oMathBlock, int &ier);

#endif

