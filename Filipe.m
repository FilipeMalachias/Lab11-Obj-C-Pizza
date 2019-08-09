//
//  Filipe.m
//  Lab11-Obj-C-Pizza
//
//  Created by Filipe Malachias Resende on 2019-08-08.
//  Copyright © 2019 malachias. All rights reserved.
//

#import "Filipe.h"
#import "Kitchen.h"
#import "Pizza.h"

@implementation Filipe

- (BOOL)kitchen:(Kitchen *)kitchen shouldMakePizzaOfSize:(PizzaSize)size andToppings:(NSArray *)toppings{
    if ([toppings containsObject:@"anchovies"]) {
        return NO;
    }
    
    return YES;
}

- (BOOL)kitchenShouldUpgradeOrder:(Kitchen *)kitchen{
    return NO;
}

@end
