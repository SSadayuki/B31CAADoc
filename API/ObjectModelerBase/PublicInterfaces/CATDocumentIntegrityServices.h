 #ifndef  CATDocumentIntegrityServices_H
 #define  CATDocumentIntegrityServices_H
 /*  -*-c++-*-  */
 //  COPYRIGHT  DASSAULT  SYSTEMES  1999
 
 /**
     *  @CAA2Level  L1
     *  @CAA2Usage  U1
     */
 
 
 
 #include  "AC0XXLNK.h"
 #include  "CATBaseUnknown.h"
 #include  "CATListOfInt.h"
 #include  "CATListOfCATUnicodeString.h"
 class  CATDocument;
 class  CATIReporter;
 
 /**
 *  Services  to  check  data  integrity  within  a  document.
 *  <b>Role:</b>  Provide  support  to  know  if  a  given  document  contains  CATDUA  errors
 */
 
 class  ExportedByAC0XXLNK  CATDocumentIntegrityServices
 {
   public:
 
     /**
     *  Test  if  a  given  document  contains  CATDUA  errors
     *  <br><b>Role:</b>  Provide  support  to  know  if  a  given  document  contains  CATDUA  errors
           *      @param  iDoc  [in]
           *            The  given  document  to  check.
           *      @param  iRepairMode  [in]
           *            The  given  RepairMode  to  process.
           *  <UL><TT>0</TT>:  To  activate  Check  action  (default  value).  
           *  <BR><TT>1</TT>:  To  activate  Clean  action.  
           *  </UL>  
           *      @param  iSelectMode  [in]
           *            The  given  SelectMode  to  process.
           *  <UL><TT>0</TT>:  "AllBut"  mode:  All  errors  available  on  site  except  the  one  specified  in  the  following  criteria  are  applied.
           *  <BR><TT>1</TT>:  "NonePlus"  mode  (default  value):  Only  errors  specified  in  the  following  criteria  are  applied.
           *  </UL>  
           *  @param  ilstSelectedCriteriaType  [in]
           *  List  of  criteria  type  that  has  to  be  applied  to  ilstSelectedCriteria  argue.
           *  <UL>Possible  values  are:
 
           *  <BR><TT>0</TT>:  Criteria  is  a  ErrorName  filter  (default  value).
           *  <BR><TT>1</TT>:  Criteria  is  a  Severity  filter.
           *  <BR><TT>2</TT>:  Criteria  is  a  Domain  filter.
           *  <BR><TT>3</TT>:  Criteria  is  a  Keyword  filter.
           *  </UL>
 
           *  @param  ilstSelectedCriteria  [in]  
           *  List  of  criteria  that  has  to  be  taken  into  account  to  specify  the  list  of  errors  to  be  considered  while  CATDUA  check/clean  process.
           *  <UL>Possible  values  are:
           *  <BR>
           *  <LI>When  the  correspondant  Criteria  type  is  a  "ErrorName"  filter  (=0):
           *  <UL>
           *  Error  to  process  filter  defines  a  list  of  error,  identified  with  their  names,  to  process  or  not,  depending  on  the  iSelectMode  argue. 
					 *  Note: User has to follow a specific format to mention the list of Errors. All    errors have to be listed by comma separator in a single line.
           *  Ex: UAV_11,LIF_3,DOC_4,CST_4, ... 

           *  <BR>See  the  complete  list  of  possible  error  in  the  <A  HREF="http://v5doc/doc18/online/cfyugcatdua_C2/cfyugcatdua05.htm">CATDUA  documentation  error  code  table</A>.
 
           *  <BR>All  the  value  are  not  case  sensitive:  you  can  write  "Cst_4",  "DOc_4",  "lif_3"  ...
           *  </UL>
 
 
 
           *  <LI>When  the  correspondant  Criteria  type  is  a  "Severity"  filter  (=1):
           *  <UL><TT>1</TT>:  Severity  One:  Cleaning  action  may  lead  to  data  deletion.  
           *  <BR><TT>2</TT>:  Severity  Two:  Cleaning  action  may  lead  to  data  modification  (without  deletion).  
           *  <BR><TT>3</TT>:  Severity  Three:  Unimportant  error.  Cleaning  action  without  huge  impact  on  data.  
					 *  Note: User has to follow a specific format to mention the list of Severity.     All severities have to be listed by comma separator in a single line.
           *  Ex:3,1,2,…

           *  </UL>
           *  <LI>When  the  correspondant  Criteria  type  is  a  "Domain"  filter  (=2):
           *  <UL>Error  to  process  filter  defines  a  list  of  error,  identified  with  their  Domain,  to  process  or  not,  depending  on  the  iSelectMode  argue.  
		       *  Note: User has to follow a specific format to mention the list of Domains.      All domains have to be listed by comma separator in a single line.
		       *  Ex: Drafting,Sketcher,MechanicalDesign,... 
          
           *  <BR>The  complete  list  of  available  Domains  is  defined  in  the  CATCheckReport.CATNls  file.
           *  <UL><TT>3DFunctionalTolerancingAndAnnotation</TT>
           *  <BR><TT>Aggregation</TT>
           *  <BR><TT>Analysis</TT>
           *  <BR><TT>AssemblyDesign</TT>
           *  <BR><TT>BodyinWhite</TT>
           *  <BR><TT>Camera</TT>
           *  <BR><TT>Catalog</TT>
           *  <BR><TT>DMUFitting</TT>
           *  <BR><TT>DMUKinematics</TT>
           *  <BR><TT>DMUNavigator</TT>
           *  <BR><TT>Drafting</TT>
           *  <BR><TT>Electrical</TT>
           *  <BR><TT>EquipmentandSystemsArrangement</TT>
           *  <BR><TT>FunctionalModeler</TT>
           *  <BR><TT>GenerativeDrafting</TT>
           *  <BR><TT>GenerativeShapeDesign</TT>
           *  <BR><TT>GenericNaming</TT>
           *  <BR><TT>Geometry</TT>
           *  <BR><TT>Knowledge</TT>
           *  <BR><TT>Manufacturing</TT>
           *  <BR><TT>Material</TT>
           *  <BR><TT>MechanicalDesign</TT>
	           *  <BR><TT>MechanicalModeler</TT>
	           *  <BR><TT>MoldDesign</TT>
	           *  <BR><TT>Numbering</TT>
	           *  <BR><TT>ObjectModeler</TT>
	           *  <BR><TT>PartDesign</TT>
	           *  <BR><TT>PlantShipModeler</TT>
	           *  <BR><TT>ProductStructure</TT>
	           *  <BR><TT>Robotics</TT>
	           *  <BR><TT>SheetMetal</TT>
	           *  <BR><TT>Sketcher</TT>
	           *  <BR><TT>SketcherModeler</TT>
	           *  <BR><TT>SpecsModeler</TT>
	           *  <BR><TT>TopologicalObjects</TT>
	           *  <BR><TT>V4V5integration</TT>
	           *  </UL>
	           *  All  the  value  are  not  case  sensitive:  you  can  write  "MECHANICALDESIGN",  "mechanicaldesign",  ...
	           *  </UL>
	 
	 
	           *  <LI>When  the  correspondant  Criteria  type  is  a  "Keyword"  filter  (=3):
	           *  <UL>
	           *  Error  to  process  filter  defines  a  list  of  error,  identified  with  keyword,  to  process  or  not,  depending  on  the  iSelectMode  argue.          
	           *  <UL><TT>Specification</TT>:  List  of  errors  dealing  with  the  specifications
	           *  <BR><TT>Geometry</TT>:  List  of  errors  dealing  with  geometry  only
	           *  <BR><TT>Update</TT>:  List  of  errors  impacting  the  Update  status  of  the  document
	           *  <BR><TT>PCS</TT>:  List  of  errors  impacting  the  PCS  and  performance  result
	           *  <BR><TT>GhostLinks</TT>:  List  of  errors  dealing  with  Ghost  Link
			       *  Note: User has to follow a specific format to mention the list of
			          Keywords. All keywords have to be listed by comma separator in a single line.
			       *  Ex: Specification,Geometry,Update,..

	           *  </UL>The  complete  list  of  available  Keywords  is  defined  in  the  CATCheckReport.CATNls  file.
	           *  <BR>All  the  value  are  not  case  sensitive:  you  can  write  "UPDATE",  "pcs",  ...
	           *  </UL>
	 
	 
	           *  <P><LI>When  no  criteria  is  defined  (empty  list),  all  the  errors  available  on  the  site  are  automatically  processed  while  CATDUA  check/clean  process.
	           *    </UL>
	 
	           *      @param  oReporter  [out]
	           *  Pointer  allowing  to  retrieve  all  information  regarding  detected  errors  after  processing  the  input  document.  
	           *    <BR>Use  CATIReporter#GetListReporterInfo  to  retrieve  all  errors.
	           *    <BR>The  pointer  has  to  be  released  after  use  by  the  caller.  </UL>
	 
	           *      @return
	           *            S_OK  if  everything  goes  well,  otherwise  E_FAIL.
	     */
	 
	   static    HRESULT  CheckDataIntegrity  (  CATDocument  *iDoc,  int  iRepairMode,  int  iSelectMode,CATListOfInt  &  ilstSelectedCriteriaType,  CATListOfCATUnicodeString  &  ilstSelectedCriteria,  CATIReporter*  &  oReporter  )  ;  
	 
	 
	 };
	 /*
		For user reference: Below is just a sample code snippet to show the way ‘CheckDataIntegrity’ function can be called.
		...
		iRepairMode=1;
		iSelectMode=0;
		ilstSelectedCriteria.Append("AFI_1,KWE_1,KWE_2,KWE_8"); 
		ilstSelectedCriteriaType.Append(0); // All errors

		ilstSelectedCriteria.Append("Aggregation,DMUFitting,FunctionalModeler");
		ilstSelectedCriteriaType.Append(2); // type Domain

		ilstSelectedCriteria.Append("GHOSTLINKS,PCS");
		ilstSelectedCriteriaType.Append(3); // type Keyword

		ilstSelectedCriteria.Append("3");
		ilstSelectedCriteriaType.Append(1); // type severity=1
		...
		rc = CATDocumentIntegrityServices::CheckDataIntegrity(pDocument, iRepairMode, iSelectMode, ilstSelectedCriteriaType, ilstSelectedCriteria,		piReporter);

		*/
	 #endif
	 

	
		
