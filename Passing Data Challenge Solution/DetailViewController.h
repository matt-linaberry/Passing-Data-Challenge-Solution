//
//  DetailViewController.h
//  Passing Data Challenge Solution
//
//  Created by Matthew Linaberry on 10/12/14.
//  Copyright (c) 2014 Matthew Linaberry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *outputLabel;
@property (strong, nonatomic) NSString *theWords;
@end
