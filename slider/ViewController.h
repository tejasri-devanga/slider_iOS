//
//  ViewController.h
//  slider
//
//  Created by Mac on 23/05/16.
//  Copyright (c) 2016 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    IBOutlet UILabel *label;
    
}



-(IBAction)sliderValueChanged:(UISlider *)sender;

@end

