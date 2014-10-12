//
//  ViewController.m
//  Passing Data Challenge Solution
//
//  Created by Matthew Linaberry on 10/12/14.
//  Copyright (c) 2014 Matthew Linaberry. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // did a button click us?
    if ([sender isKindOfClass:[UIButton class]])
    {
        // are we going to the DetailViewController next?
        if ([segue.destinationViewController isKindOfClass:[DetailViewController class]])
        {
            DetailViewController *nextOne = segue.destinationViewController;
            nextOne.theWords = self.textInput.text;
        }
    }
}

@end
