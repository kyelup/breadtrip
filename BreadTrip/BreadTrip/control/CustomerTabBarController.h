//
//  CustomerTabBarController.h
//  BreadTrip
//
//  Created by LI Haiyun on 12/19/12.
//  Copyright (c) 2012 LI Haiyun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TabBarView.h"

@interface CustomerTabBarController : UITabBarController
{
    
    
}
@property(nonatomic,strong) IBOutlet UIView *tabBarView;
-(void) hideExistingTabBar;

@end
