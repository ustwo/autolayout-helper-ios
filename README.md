AutoLayoutHelper
=======================

UIView helper to easily create common Auto Layout Constraints for iOS

### The Problem

Using Auto Layout programatically can either be quite verbose i.e. building NSLayoutConstraint objects for each rule or error prone e.g. (using Visual Format Language strings)

### A Solution

We can make creating common NSLayoutConstraint relations into some reusable methods we can call on any class that subclasses UIView. We also ensure the constraint created gets added to the view's superview for you. This means you can relate a UIView or subclass you have to another view fairly quickly with the NSLayoutAttribute or NSLayoutRelation you need and in a way that looks part of the view's setup routine and helps us keep the code DRY.

### Dependencies 

* [Xcode](https://itunes.apple.com/gb/app/xcode/id497799835?mt=12#)

### Installation

- Add the UIView+LayoutConstraints.h and UIView+LayoutConstraints.m files to your project.

- Import into source files where necessary i.e. <code>#import UIView+LayoutConstraints.h</code> 


### Usage

Examples:

Add NSLayoutConstraint relations for a UIView relating its left, top, bottom and right edges to it's superview 

	// Create the view
	
    UIView *leftView = [[UIView alloc] initWithFrame:CGRectZero];
    leftView.backgroundColor = [UIColor redColor];
    [self.view addSubview:leftView];
		
    leftView.translatesAutoresizingMaskIntoConstraints = NO;
    
	// Note. these methods will create, return and add the constraint to the superview.
    
    [leftView addTopConstraintToView:leftView.superview attribute:NSLayoutAttributeTop relation:NSLayoutRelationEqual constant:10.0];
    [leftView addLeftConstraintToView:leftView.superview attribute:NSLayoutAttributeLeft relation:NSLayoutRelationEqual constant:10.0];
    [leftView addRightConstraintToView:leftView.superview attribute:NSLayoutAttributeRight relation:NSLayoutRelationEqual constant:-10.0];
    [leftView addBottomConstraintToView:leftView.superview attribute:NSLayoutAttributeBottom relation:NSLayoutRelationEqual constant:-10.0];

or shorter assuming top to top, left to left, right to right and bottom to bottom you can omit the attribute: 
    
    [leftView addTopConstraintToView:leftView.superview relation:NSLayoutRelationEqual constant:10.0];
    [leftView addLeftConstraintToView:leftView.superview relation:NSLayoutRelationEqual constant:10.0];
    [leftView addRightConstraintToView:leftView.superview relation:NSLayoutRelationEqual constant:-10.0];
    [leftView addBottomConstraintToView:leftView.superview relation:NSLayoutRelationEqual constant:-10.0];

or more succinctly:

	[leftView fillSuperview:UIEdgeInsetsMake(10.0, 10.0, 10.0, 10.0)];


Add constraints to center a UIView in its superview both vertically (Y) and horizontally (X): 

    label.translatesAutoresizingMaskIntoConstraints = NO;
    
    // Note. these methods will create, return and add the constraint to the superview.
     
    [label addCenterXConstraintToView:label.superview relation:NSLayoutRelationEqual constant:0.0];
    [label addCenterYConstraintToView:label.superview relation:NSLayoutRelationEqual constant:0.0];
    
Add constraints for a fixed width and height amount:

    // Note. these methods will create, return and add the constraint to the superview.
    
    [view addWidthConstraintWithRelation:NSLayoutRelationEqual constant:100.0];
    [view addHeightConstraintWithRelation:NSLayoutRelationEqual constant:80.0];

Modify constraints after creation and animate the changes:

    // Note. these methods will create, return and add the constraint to the superview.

	NSLayoutConstraint *heightConstraint = [view addHeightConstraintWithRelation:NSLayoutRelationEqual constant:80.0];

	heightConstraint.constant = 30.0;
	[UIView animateWithDuration:0.3 animations:^{
            [view layoutIfNeeded];
        }];

### Team
* Development: [Shagun Madhikarmi](mailto:shagun@ustwo.com), [Daniela Dias](mailto:daniela@ustwo.com)
