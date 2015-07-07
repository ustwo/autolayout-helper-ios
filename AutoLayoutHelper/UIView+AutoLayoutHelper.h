//
//  UIView+AutoLayoutHelper.h
//
//  Created by Shagun Madhikarmi on 15/06/2015.
//  The MIT License (MIT)
//
//  Copyright (c) 2015 ustwo™
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

@import Foundation;
@import UIKit;

/**
 *  UIView helper to easily create common Auto Layout Constraints
 */
@interface UIView (AutoLayoutHelper)


#pragma mark - Fill

/**
 *  Creates and adds an array of NSLayoutConstraint objects that relates this view's top, left, bottom and right to its superview (given an optional UIEdgeInsets for each side)
 *
 *  Note. The constraints are also added to this view's superview for you.
 *
 *  @param edges An amount of insets to apply to the top, left, bottom and right constraint
 *
 *  @return An array of 4 x NSLayoutConstraint objects (top, left, bottom , right) if the superview exists (otherwise an empty array)
 */
- (NSArray *)fillSuperView:(UIEdgeInsets)edges;


#pragma mark - Left

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's left to the left of another view.
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView   The other view to relate this view to
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's left from the other view's specified edge
 *
 *  @return The created NSLayoutConstraint for this left attribute relation
 */
- (NSLayoutConstraint *)addLeftConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's left to some specified edge of another view.
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView      The other view to relate this view to
 *  @param toAttribute The other view's layout attribute to relate this view's left to
 *  @param relation    The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant    An amount by which to offset this view's left from the other view's specified edge
 *
 *  @return The created NSLayoutConstraint for this Left attribute relation
 */
- (NSLayoutConstraint *)addLeftConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Right

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's right to the right of another view.
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView   The other view to relate this view to
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's right from the other view's specified edge
 *
 *  @return The created NSLayoutConstraint for this right attribute relation
 */
- (NSLayoutConstraint *)addRightConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's right to some specified edge of another view, given a relation and offset
 *
 * Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView      The other view to relate this view to
 *  @param toAttribute The other view's layout attribute to relate this view's right to
 *  @param relation    The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant    An amount by which to offset this view's right from the other view's specified edge
 *
 *  @return The created NSLayoutConstraint for this right attribute relation
 */
- (NSLayoutConstraint *)addRightConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Top

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's top to the top of another view.
 *
 * Note. The new constraint is added to this view's superview for you.
 
 *  @param toView   The other view to relate this view to
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's top from the other view's specified edge
 *
 *  @return The created NSLayoutConstraint for this top attribute relation
 */
- (NSLayoutConstraint *)addTopConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's top to some specified edge of another view, given a relation and offset
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView      The other view to relate this view to
 *  @param toAttribute The other view's layout attribute to relate this view's top to
 *  @param relation    The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant    An amount by which to offset this view's top from the other view's specified edge
 *
 *  @return The created NSLayoutConstraint for this top attribute relation
 */
- (NSLayoutConstraint *)addTopConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Bottom

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's bottom to the bottom edge of another view
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView   The other view to relate this view to
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's bottom from the other view's specified edge
 *
 *  @return The created NSLayoutConstraint for this bottom attribute relation
 */
- (NSLayoutConstraint *)addBottomConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's bottom to some specified edge of another view, given a relation and offset
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView      The other view to relate this view to
 *  @param toAttribute The other view's layout attribute to relate this view's bottom to
 *  @param relation    The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant    An amount by which to offset this view's bottom from the other view's specified edge
 *
 *  @return The created NSLayoutConstraint for this bottom attribute relation
 */
- (NSLayoutConstraint *)addBottomConstraintToView:(UIView *)toView attribute:(NSLayoutAttribute)toAttribute relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - CenterX

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's centerX coordinate to centerX coordinate of another view.
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView The other view to relate this view to
 *
 *  @return The created NSLayoutConstraint for this center X coordinate attribute relation
 */
- (NSLayoutConstraint *)addCenterXConstraintToView:(UIView *)toView;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's center X coordinate attribute to the center X coordinate attribute of another view given an offset.
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView   The other view to relate this view to
 *  @param constant An amount by which to offset this view's bottom from the other view's specified edge
 *
 *  @return The created NSLayoutConstraint for this center X coordinate attribute relation
 */
- (NSLayoutConstraint *)addCenterXConstraintToView:(UIView *)toView constant:(CGFloat)constant;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's center X coordinate to the center X coordinate of another view, given a relation and offset
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView   The other view to relate this view to
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's center X coordinate attribute from the other view's center X coordinate attribute
 *
 *  @return The created NSLayoutConstraint for this center X coordinate attribute relation
 */
- (NSLayoutConstraint *)addCenterXConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - CenterY

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's center Y coordinate to the center Y coordinate of another view, given a relation and offset
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView The other view to relate this view to
 *
 *  @return The created NSLayoutConstraint for this center Y coordinate attribute relation
 */
- (NSLayoutConstraint *)addCenterYConstraintToView:(UIView *)toView;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's center Y coordinate to the center Y coordinate of another view, given a relation and offset
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView   The other view to relate this view to
 *  @param constant An amount by which to offset this view's center X coordinate attribute from the other view's center X coordinate attribute
 *
 *  @return The created NSLayoutConstraint for this center Y coordinate attribute relation
 */
- (NSLayoutConstraint *)addCenterYConstraintToView:(UIView *)toView constant:(CGFloat)constant;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's center Y coordinate to the center Y coordinate of another view, given a relation and offset
 *
 *  Note. The new constraint is added to this view's superview for you.
 *
 *  @param toView   The other view to relate this view to
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's center X coordinate attribute from the other view's center X coordinate attribute
 *
 *  @return The created NSLayoutConstraint for this center Y coordinate attribute relation
 */
- (NSLayoutConstraint *)addCenterYConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Width

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's width to the width of another view, given a relation and offset
 *
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's width from the other view's width amount
 *
 *  @return The created NSLayoutConstraint for this width attribute relation
 */
- (NSLayoutConstraint *)addWidthConstraintWithRelation:(NSLayoutRelation)relation constant:(CGFloat)constant;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's width to the width of another view, given a relation and offset
 *
 *  @param toView   The other view to relate this view to
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's width from the other view's width amount
 *
 *  @return The created NSLayoutConstraint for this width attribute relation
 */
- (NSLayoutConstraint *)addWidthConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;


#pragma mark - Height

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's height to the height of another view, given a relation and offset
 *
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's height from the other view's height amount
 *
 *  @return The created NSLayoutConstraint for this height attribute relation
 */
- (NSLayoutConstraint *)addHeightConstraintWithRelation:(NSLayoutRelation)relation constant:(CGFloat)constant;

/**
 *  Creates and adds an NSLayoutConstraint that relates this view's height to the height of another view, given a relation and offset
 *
 *  @param toView   The other view to relate this view to
 *  @param relation The relation of the constraint e.g. .Equal, .GreaterThanOrEqual, LessThanOrEqual
 *  @param constant An amount by which to offset this view's height from the other view's height amount
 *
 *  @return The created NSLayoutConstraint for this height attribute relation
 */
- (NSLayoutConstraint *)addHeightConstraintToView:(UIView *)toView relation:(NSLayoutRelation)relation constant:(CGFloat)constant;

@end
