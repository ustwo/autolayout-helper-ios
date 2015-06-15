//
//  UIView+AutoLayoutHelper.h
//  AutoLayoutHelper
//
//  Created by Shagun Madhikarmi on 15/06/2015.
//  Copyright (c) 2015 ustwo. All rights reserved.
//

@import UIKit;


@interface UIView (AutoLayoutHelper)


#pragma mark - Fill

- (NSArray *)fillSuperView:(UIEdgeInsets)edges;


#pragma mark - Left

- (NSLayoutConstraint *)addLeftConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

- (NSLayoutConstraint *)addLeftConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Right

- (NSLayoutConstraint *)addRightConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

- (NSLayoutConstraint *)addRightConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Top

- (NSLayoutConstraint *)addTopConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

- (NSLayoutConstraint *)addTopConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Bottom

- (NSLayoutConstraint *)addBottomConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

- (NSLayoutConstraint *)addBottomConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - CenterX

- (NSLayoutConstraint *)addCenterXConstraintToView:(UIView *)toView;

- (NSLayoutConstraint *)addCenterXConstraintToView:(UIView *)toView constant:(CGFloat)constant;

- (NSLayoutConstraint *)addCenterXConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - CenterY

- (NSLayoutConstraint *)addCenterYConstraintToView:(UIView *)toView;

- (NSLayoutConstraint *)addCenterYConstraintToView:(UIView *)toView constant:(CGFloat)constant;

- (NSLayoutConstraint *)addCenterYConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Width

- (NSLayoutConstraint *)addWidthConstraintWithRelation:(NSLayoutRelation)relation constant:(CGFloat)constant;

- (NSLayoutConstraint *)addWidthConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Height

- (NSLayoutConstraint *)addHeightConstraintWithRelation:(NSLayoutRelation)relation constant:(CGFloat)constant;

- (NSLayoutConstraint *)addHeightConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

@end
