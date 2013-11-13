//
//  DDDetailViewController.h
//  ExistingProject
//
//  Created by Damien DELES on 13/11/2013.
//  Copyright (c) 2013 Damien DELES. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
