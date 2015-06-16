//
//  ViewController.m
//  AutoLayoutHelper
//
//  Created by Shagun Madhikarmi on 15/06/2015.
//  Copyright (c) 2015 ustwo. All rights reserved.
//

#import "ViewController.h"
#import "UIView+AutoLayoutHelper.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self createViewWithAddTopLeftRightBottomConstraints];
    [self createViewWithAddWidthHeightConstraints];
    [self createViewWithCenterXCenterYConstraints];
}

- (void)createViewWithAddTopLeftRightBottomConstraints
{
    UIView *leftView = [[UIView alloc] initWithFrame:CGRectZero];
    leftView.backgroundColor = [UIColor redColor];
    [self.view addSubview:leftView];

    leftView.translatesAutoresizingMaskIntoConstraints = NO;
    
    [leftView addTopConstraintToView:leftView.superview attribute:NSLayoutAttributeTop relation:NSLayoutRelationEqual constant:10.0];
    [leftView addLeftConstraintToView:leftView.superview attribute:NSLayoutAttributeLeft relation:NSLayoutRelationEqual constant:10.0];
    [leftView addRightConstraintToView:leftView.superview attribute:NSLayoutAttributeRight relation:NSLayoutRelationEqual constant:-10.0];
    [leftView addBottomConstraintToView:leftView.superview attribute:NSLayoutAttributeBottom relation:NSLayoutRelationEqual constant:-10.0];
}

- (void)createViewWithCenterXCenterYConstraints
{
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectZero];
    label.text = @"Some centered text";
    
    label.backgroundColor = [UIColor yellowColor];
    [self.view addSubview:label];

    label.translatesAutoresizingMaskIntoConstraints = NO;
    
    [label addCenterXConstraintToView:label.superview relation:NSLayoutRelationEqual constant:0.0];
    [label addCenterYConstraintToView:label.superview relation:NSLayoutRelationEqual constant:0.0];
}

- (void)createViewWithAddWidthHeightConstraints
{
    UIView *view = [[UIView alloc] initWithFrame:CGRectZero];
    view.backgroundColor = [UIColor blueColor];
    [self.view addSubview:view];
    
    view.translatesAutoresizingMaskIntoConstraints = NO;
    
    [view addWidthConstraintWithRelation:NSLayoutRelationEqual constant:100.0];
    [view addHeightConstraintWithRelation:NSLayoutRelationEqual constant:80.0];
}

@end
