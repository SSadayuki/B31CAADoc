#ifndef CATV4IV5V4AssociativityModeEnum_H
#define CATV4IV5V4AssociativityModeEnum_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
/**
     * The associativity mode of migration during Save As Model.
     * @param AssociativeMode
     *   The migration is made using the associative mode.
     * @param NonAssociativeMode
     *   The migration is made using the non associative mode.
	 * @param NonAssociativityModeAndNoSolidCreation
	 *   The migration is made using the non associative mode and no solid will be created.
	 * @see CATIV4IV4WritingSettingAtt
     */


enum CATV4IV5V4AssociativityModeEnum{AssociativeMode, NonAssociativeMode, NonAssociativityModeAndNoSolidCreation };
#endif
