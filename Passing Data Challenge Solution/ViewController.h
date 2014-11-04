//
//  ViewController.h
//  Passing Data Challenge Solution
//
//  Created by Matthew Linaberry on 10/12/14.
//  Copyright (c) 2014 Matthew Linaberry. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"

@interface ViewController : UIViewController <DetailViewControllerProtocol>
@property (strong, nonatomic) IBOutlet UITextField *textInput;


@end

