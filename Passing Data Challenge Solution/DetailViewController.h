//
//  DetailViewController.h
//  Passing Data Challenge Solution
//
//  Created by Matthew Linaberry on 10/12/14.
//  Copyright (c) 2014 Matthew Linaberry. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol DetailViewControllerProtocol <NSObject>
@required
- (void) didUpdateText:(NSString *)text;
@end

@interface DetailViewController : UIViewController
@property (weak, nonatomic) id <DetailViewControllerProtocol> delegate;
@property (strong, nonatomic) IBOutlet UILabel *outputLabel;
@property (strong, nonatomic) NSString *theWords;
@property (strong, nonatomic) IBOutlet UITextField *detailTextField;
- (IBAction)updateButtonPress:(UIButton *)sender;
@end
