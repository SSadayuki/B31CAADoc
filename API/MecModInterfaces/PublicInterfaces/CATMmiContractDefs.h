#ifndef CATMmiContractDefs_h
#define CATMmiContractDefs_h
// COPYRIGHT DASSAULT SYSTEMES 2008
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

//------------------------------------------------------------------ 
/**
*
* Types used to specify if the BRep feature need to take into account relimitations. 
* <br><b>Role:</b> This enum used to specify options for the relimitationd of BRep feature. ( @href CATIMmiUseMfBRep )<br>
* Default value is Relimited.
* @param CATMmrRelimited
* Takes into account relimitations.
* This option should be used when the boundaries of the selected cell 
* are important. 
* @param CATMmrFunctional 
* Refers to the initial shape.
* Useful when the application does not take into account relimitations.
* This option should be used when the boundaries of the selected cell 
* are not important.
*
*	
*/
enum CATMmrLimitationType {CATMmrRelimited=0, CATMmrFunctional, CATMmrDefaultLimitationType};

//------------------------------------------------------------------ 
/**
*
* Types used to specify the geometry dimension of BRep feature. 
* <br><b>Role:</b> This enum used to specify options for the geometry dimension of BRep feature. ( @href CATIMmiUseMfBRep )<br>
* @param CATMmiVertex
* The geometry pointed is a vertex. 
* @param CATMmiEdge 
* The geometry pointed is an edge. 
* @param CATMmiFace 
* The geometry pointed is a face. 
* @param CATMmiVolume 
* The geometry pointed is a volume. 
* @param CATMmiDimUnknown 
* Returned value for error/particular cases  
*
*///----------------------------------------------------------------
enum CATMmiDimension { CATMmiVertex=0, CATMmiEdge=1, CATMmiFace=2, CATMmiVolume=3, CATMmiDimUnknown=-1 };

//------------------------------------------------------------------ 
/**
*
* Types used to specify the geometry position of BRep feature. 
* <br><b>Role:</b> This enum used to specify options for the geometry position of BRep feature. ( @href CATIMmiUseMfBRep )<br>
* @param CATMmiInternal
* The geometry pointed is internal. An edge between two faces for example. 
* @param CATMmiBorder 
* The geometry pointed is the border of another one. An edge bording 
* one face only, for example. 
* @param CATMmiFree 
* The geometry pointed is isolated. An edge part of a wire, for example.  
* @param CATMmiDimTypeUnknown 
* Returned value for error/particular cases  
*
*///----------------------------------------------------------------
enum CATMmiDimensionType { CATMmiInternal=1, CATMmiBorder=2, CATMmiFree=3, CATMmiDimTypeUnknown=0 };

//------------------------------------------------------------------ 
/**
*
* Types used to specify Support of BRep feature. 
* <br><b>Role:</b> This enum used to specify options for the support used in BRep feature. ( @href CATIMmiUseMfBRep )<br>
* @param CATMmrSupport 
* use for BRep Feature where the support will be automaticaly found.
* @param CATMmrNoSupport
* the Support of the BRep Feature is not definitive and will be asked before any resolution.
* @param CATMmrColorsAndAttributes
* for BRep Feature used to colorise or add attribute. 
*
*///----------------------------------------------------------------
enum CATMmrSupportType { CATMmrSupport=0, CATMmrNoSupport=1 , CATMmrColorsAndAttributes=2 };

/*------- Enum describing the Type of Fond level ---------
*
* Determines if the pointed cells must share or not the same geometry when solving the Brep feature.
* this is usefull for some application like FTA
*
* @param CATMmrMonoFond
* The different cells of the body of the BRep feature must share the same geometry.
*
* @param CATMmrMultiFond
* The different cells of the body of the BRep feature could not share the same geometry.
*/
enum CATMmrFondType {CATMmrMonoFond=0, CATMmrMultiFond=1, CATMmrUnknownFond=2};

#endif 



