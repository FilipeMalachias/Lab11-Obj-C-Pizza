//
//  main.m
//  lab8-Pizza
//
//  Created by Filipe Malachias Resende on 2019-08-07.
//  Copyright © 2019 malachias. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pizza.h"

@class Kitchen;

@protocol KitchenDelegate <NSObject>

-(BOOL)kitchen:(Kitchen *)kitchen shouldMakePizzaOfSize:(PizzaSize)size andToppings:(NSArray *)toppings;
-(BOOL)kitchenShouldUpgradeOrder:(Kitchen *)kitchen;
@optional
-(void)kitchenDidMakePizza:(Pizza *)pizza;

@end

@interface Kitchen : NSObject


@property (nonatomic, weak) id<KitchenDelegate> delegate;

- (Pizza *)makePizzaWithSize:(PizzaSize)size toppings:(NSArray *)toppings;

@end
