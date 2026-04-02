#ifndef CatProductSource_h
#define CatProductSource_h

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

//								   
// CatProductSource:						   
// enumeration for all types of possible source for products 
//  values are defined in STEP AP203 as "made" or "bought"
//								   

/**
 * Possible types of product source.
 *   @param catProductSourceUnknown
 *     The product's origin is unknown
 *   @param catProductMade
 *     The product is made within the company
 *   @param catProductBought
 *     The product is bought from outside of the company
 */

enum CatProductSource	
{
	catProductSourceUnknown,
	catProductMade,
	catProductBought
};

#endif // CatProductSource_h 









