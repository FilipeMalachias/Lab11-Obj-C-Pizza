//
//  Other.m
//  Lab11-Obj-C-Pizza
//
//  Created by Filipe Malachias Resende on 2019-08-08.
//  Copyright © 2019 malachias. All rights reserved.
//

#import "Filipe2.h"
#import "Kitchen.h"
#import "Pizza.h"

@implementation Filipe2

- (BOOL)kitchen:(Kitchen *)kitchen shouldMakePizzaOfSize:(PizzaSize)size andToppings:(NSArray *)toppings{
    return YES;
}

- (BOOL)kitchenShouldUpgradeOrder:(Kitchen *)kitchen{
    return YES;
}

- (void)kitchenDidMakePizza:(Pizza *)pizza{
    NSLog(@"Thank You Guys!");
}

@end
