//
//  DDMasterViewController.h
//  ExistingProject
//
//  Created by Damien DELES on 13/11/2013.
//  Copyright (c) 2013 Damien DELES. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface DDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
