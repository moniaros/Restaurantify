//
//  BYViewController.h
//  Restaurantify
//
//  Created by Will Fairclough on 11-11-03.
//  Copyright (c) 2011 Boneyard Interactive. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LLStoreWrapper.h"
#import "BYShopifyVariant.h"

@interface BYViewController : UITableViewController <LLStoreDelegate>



@property (nonatomic, strong) NSArray *shopifyProducts;
@end
