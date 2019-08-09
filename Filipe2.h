//
//  Other.h
//  Lab11-Obj-C-Pizza
//
//  Created by Filipe Malachias Resende on 2019-08-08.
//  Copyright © 2019 malachias. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Kitchen.h"
#import "Pizza.h"

@interface Filipe2 : NSObject<KitchenDelegate>

- (BOOL)kitchen:(Kitchen *)kitchen shouldMakePizzaOfSize:(PizzaSize)size andToppings:(NSArray *)toppings;

- (BOOL)kitchenShouldUpgradeOrder:(Kitchen *)kitchen;

- (void)kitchenDidMakePizza:(Pizza *)pizza;

@end
