AutoLayoutHelper
=======================

UIView helper to easily create common Auto Layout Constraints for iOS

### The Problem

Relating UIView's using Auto Layout programatically can either be quite verbose or error prone e.g. (using Visual Format Language):

### A Solution

We can make adding NSLayoutConstraint relations into some common reusable methods that you call on any UIView you're trying to relate (via an Extension). This extension means you can relate a view you have create to another in a way that looks like its part of its setup and helps ensure we keep the NSLayoutConstraint creation code as DRY as possible.

### Setup

- Add the UIView+LayoutConstraints.h and UIView+LayoutConstraints.m files to your project. That's it!

### Team
* Development: [Shagun Madhikarmi](mailto:shagun@ustwo.com?subject=autolayout-helper), [Daniela Dias](mailto:daniela@ustwo.com?subject=autolayout-helper)
