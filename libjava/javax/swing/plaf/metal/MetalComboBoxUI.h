
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalComboBoxUI__
#define __javax_swing_plaf_metal_MetalComboBoxUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Container;
        class Dimension;
        class Graphics;
        class LayoutManager;
    }
    namespace beans
    {
        class PropertyChangeEvent;
        class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class ComboBoxEditor;
        class JButton;
        class JComboBox;
        class JComponent;
        class JList;
      namespace plaf
      {
          class ComponentUI;
        namespace basic
        {
            class ComboPopup;
        }
        namespace metal
        {
            class MetalComboBoxUI;
            class MetalComboBoxUI$MetalComboBoxLayoutManager;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalComboBoxUI : public ::javax::swing::plaf::basic::BasicComboBoxUI
{

public:
  MetalComboBoxUI();
  static ::javax::swing::plaf::ComponentUI * createUI(::javax::swing::JComponent *);
public: // actually protected
  virtual ::javax::swing::ComboBoxEditor * createEditor();
  virtual ::javax::swing::plaf::basic::ComboPopup * createPopup();
  virtual ::javax::swing::JButton * createArrowButton();
public:
  virtual ::java::beans::PropertyChangeListener * createPropertyChangeListener();
  virtual void paint(::java::awt::Graphics *, ::javax::swing::JComponent *);
public: // actually protected
  virtual void editablePropertyChanged(::java::beans::PropertyChangeEvent *);
  virtual ::java::awt::LayoutManager * createLayoutManager();
  virtual void removeListeners();
public:
  virtual ::java::awt::Dimension * getMinimumSize(::javax::swing::JComponent *);
  virtual void configureEditor();
  virtual void unconfigureEditor();
  virtual void layoutComboBox(::java::awt::Container *, ::javax::swing::plaf::metal::MetalComboBoxUI$MetalComboBoxLayoutManager *);
public: // actually package-private
  static ::javax::swing::JButton * access$0(::javax::swing::plaf::metal::MetalComboBoxUI *);
  static ::javax::swing::JComboBox * access$1(::javax::swing::plaf::metal::MetalComboBoxUI *);
  static ::javax::swing::JList * access$2(::javax::swing::plaf::metal::MetalComboBoxUI *);
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_metal_MetalComboBoxUI__
