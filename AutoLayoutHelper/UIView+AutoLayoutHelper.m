//
//  UIView+AutoLayoutHelper.m
//  AutoLayoutHelper
//
//  Created by Shagun Madhikarmi on 15/06/2015.
//  Copyright (c) 2015 ustwo. All rights reserved.
//

@import Foundation;
#import "UIView+AutoLayoutHelper.h"


@implementation UIView (AutoLayoutHelper)


#pragma mark - Fill

- (NSArray *)fillSuperView:(UIEdgeInsets)edges
{
    NSArray *constraints = @[];
    
    UIView *superview = self.superview;
    
    if (superview != nil)
    {
        NSLayoutConstraint *topConstraint = [self addTopConstraintToView:superview relation:NSLayoutRelationEqual constant:edges.top];
        NSLayoutConstraint *leftConstraint = [self addLeftConstraintToView:superview relation:NSLayoutRelationEqual constant:edges.left];
        NSLayoutConstraint *bottomConstraint = [self addBottomConstraintToView:superview relation:NSLayoutRelationEqual constant:edges.bottom];
        NSLayoutConstraint *rightConstraint = [self addRightConstraintToView:superview relation:NSLayoutRelationEqual constant:edges.right];

        constraints = @[topConstraint, leftConstraint, bottomConstraint, rightConstraint];
    }
    
    return constraints;
}


#pragma mark - Left

- (NSLayoutConstraint *)addLeftConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    return [self addLeftConstraintToView:toView attribute:NSLayoutAttributeLeft relation:relation constant:constant];
}

- (NSLayoutConstraint *)addLeftConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    NSLayoutConstraint *constraint = [self createConstraintWithAttribute:NSLayoutAttributeLeft
                                                                  toView:toView
                                                             toAttribute:toAttribute
                                                                relation:relation
                                                                constant:constant];
    [self.superview addConstraint:constraint];
    
    return constraint;
}


#pragma mark - Right

- (NSLayoutConstraint *)addRightConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    return [self addRightConstraintToView:toView attribute:NSLayoutAttributeRight relation:relation constant:constant];
}

- (NSLayoutConstraint *)addRightConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    NSLayoutConstraint *constraint = [self createConstraintWithAttribute:NSLayoutAttributeRight
                                                                  toView:toView
                                                             toAttribute:toAttribute
                                                                relation:relation
                                                                constant:constant];
    [self.superview addConstraint:constraint];
    
    return constraint;
}


#pragma mark - Top

- (NSLayoutConstraint *)addTopConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    return [self addTopConstraintToView:toView attribute:NSLayoutAttributeTop relation:relation constant:constant];
}

- (NSLayoutConstraint *)addTopConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    NSLayoutConstraint *constraint = [self createConstraintWithAttribute:NSLayoutAttributeTop
                                                                  toView:toView
                                                             toAttribute:toAttribute
                                                                relation:relation
                                                                constant:constant];
    [self.superview addConstraint:constraint];
    
    return constraint;
}


#pragma mark - Bottom

- (NSLayoutConstraint *)addBottomConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    return [self addBottomConstraintToView:toView attribute:NSLayoutAttributeBottom relation:relation constant:constant];
}

- (NSLayoutConstraint *)addBottomConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    NSLayoutConstraint *constraint = [self createConstraintWithAttribute:NSLayoutAttributeBottom
                                                                  toView:toView
                                                             toAttribute:toAttribute
                                                                relation:relation
                                                                constant:constant];
    [self.superview addConstraint:constraint];
    
    return constraint;
}


#pragma mark - CenterX

- (NSLayoutConstraint *)addCenterXConstraintToView:(UIView *)toView
{
    return [self addCenterXConstraintToView:toView constant:0.0];
}

- (NSLayoutConstraint *)addCenterXConstraintToView:(UIView *)toView constant:(CGFloat)constant
{
    return [self addCenterXConstraintToView:toView relation:NSLayoutRelationEqual constant:constant];
}

- (NSLayoutConstraint *)addCenterXConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    NSLayoutConstraint *constraint = [self createConstraintWithAttribute:NSLayoutAttributeCenterX
                                                                  toView:toView
                                                             toAttribute:NSLayoutAttributeCenterX
                                                                relation:relation
                                                                constant:constant];
    [self.superview addConstraint:constraint];
    
    return constraint;
}


#pragma mark - CenterY

- (NSLayoutConstraint *)addCenterYConstraintToView:(UIView *)toView
{
    return [self addCenterYConstraintToView:toView constant:0.0];
}

- (NSLayoutConstraint *)addCenterYConstraintToView:(UIView *)toView constant:(CGFloat)constant
{
    return [self addCenterYConstraintToView:toView relation: NSLayoutRelationEqual constant:constant];
}

- (NSLayoutConstraint *)addCenterYConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    NSLayoutConstraint *constraint = [self createConstraintWithAttribute:NSLayoutAttributeCenterY
                                                                  toView:toView
                                                             toAttribute:NSLayoutAttributeCenterY
                                                                relation:relation
                                                                constant:constant];
    [self.superview addConstraint:constraint];
    
    return constraint;
}


#pragma mark - Width

- (NSLayoutConstraint *)addWidthConstraintWithRelation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    return [self addWidthConstraintToView:nil relation:relation constant:constant];
}

- (NSLayoutConstraint *)addWidthConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    NSLayoutConstraint *constraint = [self createConstraintWithAttribute:NSLayoutAttributeWidth
                                                                  toView:toView
                                                             toAttribute:NSLayoutAttributeWidth
                                                                relation:relation
                                                                constant:constant];
    [self.superview addConstraint:constraint];
    
    return constraint;
}


#pragma mark - Height

- (NSLayoutConstraint *)addHeightConstraintWithRelation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    return [self addHeightConstraintToView:nil relation:relation constant:constant];
}

- (NSLayoutConstraint *)addHeightConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    NSLayoutConstraint *constraint = [self createConstraintWithAttribute:NSLayoutAttributeHeight
                                                                  toView:toView
                                                             toAttribute:NSLayoutAttributeHeight
                                                                relation:relation
                                                                constant:constant];
    [self.superview addConstraint:constraint];
    
    return constraint;
}


#pragma mark - Private

- (NSLayoutConstraint *)createConstraintWithAttribute:(NSLayoutAttribute)attribute toView:(UIView *)toView toAttribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant
{
    NSLayoutConstraint *constraint = [NSLayoutConstraint constraintWithItem:self
                                                                  attribute:attribute
                                                                  relatedBy:relation
                                                                     toItem:toView
                                                                  attribute:toAttribute
                                                                 multiplier:1.0
                                                                   constant:constant];
    
    return constraint;
}

@end
